
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dt282x_private {scalar_t__ dma_dir; scalar_t__ nread; int supcsr; scalar_t__ ad_2scomp; } ;
struct comedi_subdevice {unsigned short maxdata; TYPE_1__* async; } ;
struct comedi_device {scalar_t__ iobase; int class_dev; int attached; struct comedi_subdevice* write_subdev; struct comedi_subdevice* read_subdev; struct dt282x_private* private; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int events; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned int VAR_7 ;
 scalar_t__ VAR_8 ;
 unsigned int VAR_9 ;
 scalar_t__ VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct comedi_subdevice*,unsigned short*,int) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*) ;
 unsigned short FUNC_3 (struct comedi_subdevice*,unsigned short) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_6 (struct comedi_device*,struct comedi_subdevice*) ;
 void* FUNC_7 (scalar_t__) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_14, void *VAR_15)
{
 struct comedi_device *VAR_16 = VAR_15;
 struct dt282x_private *VAR_17 = VAR_16->private;
 struct comedi_subdevice *VAR_18 = VAR_16->read_subdev;
 struct comedi_subdevice *VAR_19 = VAR_16->write_subdev;
 unsigned int VAR_20, VAR_21, VAR_22;
 int VAR_23 = 0;

 if (!VAR_16->attached) {
  FUNC_4(VAR_16->class_dev, "spurious interrupt\n");
  return VAR_13;
 }

 VAR_21 = FUNC_7(VAR_16->iobase + VAR_5);
 VAR_22 = FUNC_7(VAR_16->iobase + VAR_8);
 VAR_20 = FUNC_7(VAR_16->iobase + VAR_10);
 if (VAR_20 & VAR_9) {
  if (VAR_17->dma_dir == VAR_2)
   FUNC_5(VAR_16, VAR_18);
  else
   FUNC_6(VAR_16, VAR_19);
  VAR_23 = 1;
 }
 if (VAR_21 & VAR_4) {
  if (VAR_17->nread != 0) {
   FUNC_4(VAR_16->class_dev, "A/D error\n");
   VAR_18->async->events |= VAR_1;
  }
  VAR_23 = 1;
 }
 if (VAR_22 & VAR_7) {
  FUNC_4(VAR_16->class_dev, "D/A error\n");
  VAR_19->async->events |= VAR_1;
  VAR_23 = 1;
 }
 FUNC_2(VAR_16, VAR_18);
 if (VAR_19)
  FUNC_2(VAR_16, VAR_19);

 return FUNC_0(VAR_23);
}
