
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_isadma_desc {unsigned short* virt_addr; unsigned int size; int chan; } ;
struct comedi_isadma {struct comedi_isadma_desc* desc; } ;
struct comedi_device {scalar_t__ iobase; int attached; struct comedi_subdevice* read_subdev; struct a2150_private* private; } ;
struct comedi_cmd {scalar_t__ stop_src; } ;
struct comedi_async {int events; struct comedi_cmd cmd; } ;
struct a2150_private {unsigned int count; struct comedi_isadma* dma; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (struct comedi_subdevice*,unsigned short*,int) ;
 unsigned int FUNC_1 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (struct comedi_isadma_desc*) ;
 unsigned int FUNC_5 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_11, void *VAR_12)
{
 struct comedi_device *VAR_13 = VAR_12;
 struct a2150_private *VAR_14 = VAR_13->private;
 struct comedi_isadma *VAR_15 = VAR_14->dma;
 struct comedi_isadma_desc *VAR_16 = &VAR_15->desc[0];
 struct comedi_subdevice *VAR_17 = VAR_13->read_subdev;
 struct comedi_async *VAR_18 = VAR_17->async;
 struct comedi_cmd *VAR_19 = &VAR_18->cmd;
 unsigned short *VAR_20 = VAR_16->virt_addr;
 unsigned int VAR_21, VAR_22, VAR_23, VAR_24;
 unsigned short VAR_25;
 int VAR_26;
 int VAR_27;

 if (!VAR_13->attached)
  return VAR_5;

 VAR_26 = FUNC_6(VAR_13->iobase + VAR_8);
 if ((VAR_26 & VAR_4) == 0)
  return VAR_6;

 if (VAR_26 & VAR_7) {
  VAR_18->events |= VAR_1;
  FUNC_2(VAR_13, VAR_17);
 }

 if ((VAR_26 & VAR_2) == 0) {
  VAR_18->events |= VAR_1;
  FUNC_2(VAR_13, VAR_17);
  return VAR_5;
 }






 VAR_23 = FUNC_3(VAR_16->chan);


 VAR_21 = FUNC_1(VAR_17, VAR_16->size);
 VAR_22 = VAR_21 - FUNC_1(VAR_17, VAR_23);
 if (VAR_14->count < VAR_22 && VAR_19->stop_src == VAR_9)
  VAR_22 = VAR_14->count;


 VAR_24 = 0;
 if (VAR_19->stop_src == VAR_10) {
  VAR_24 = FUNC_1(VAR_17, VAR_16->size);
 } else if (VAR_14->count > VAR_21) {
  VAR_24 = VAR_14->count - VAR_21;
  if (VAR_24 > VAR_21)
   VAR_24 = VAR_21;
 }





 if (VAR_23)
  VAR_24 = 0;

 for (VAR_27 = 0; VAR_27 < VAR_22; VAR_27++) {

  VAR_25 = VAR_20[VAR_27];

  VAR_25 ^= 0x8000;
  FUNC_0(VAR_17, &VAR_25, 1);
  if (VAR_19->stop_src == VAR_9) {
   if (--VAR_14->count == 0) {
    VAR_18->events |= VAR_0;
    break;
   }
  }
 }

 if (VAR_24) {
  VAR_16->size = FUNC_5(VAR_17, VAR_24);
  FUNC_4(VAR_16);
 }

 FUNC_2(VAR_13, VAR_17);


 FUNC_7(0x00, VAR_13->iobase + VAR_3);

 return VAR_5;
}
