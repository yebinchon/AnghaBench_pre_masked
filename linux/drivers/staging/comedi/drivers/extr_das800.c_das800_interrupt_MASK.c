
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct das800_private {int do_bits; } ;
struct comedi_subdevice {int maxdata; struct comedi_async* async; } ;
struct comedi_device {int spinlock; scalar_t__ iobase; int attached; struct comedi_subdevice* read_subdev; struct das800_private* private; } ;
struct comedi_cmd {scalar_t__ stop_src; scalar_t__ stop_arg; } ;
struct comedi_async {scalar_t__ scans_done; int events; struct comedi_cmd cmd; } ;
typedef int irqreturn_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (struct comedi_subdevice*,unsigned int*,int) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;
 unsigned int FUNC_2 (struct comedi_device*) ;
 int FUNC_3 (struct comedi_device*) ;
 unsigned int FUNC_4 (struct comedi_device*,int ) ;
 int FUNC_5 (struct comedi_device*,int,int ) ;
 unsigned int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_16, void *VAR_17)
{
 struct comedi_device *VAR_18 = VAR_17;
 struct das800_private *VAR_19 = VAR_18->private;
 struct comedi_subdevice *VAR_20 = VAR_18->read_subdev;
 struct comedi_async *VAR_21;
 struct comedi_cmd *VAR_22;
 unsigned long VAR_23;
 unsigned int VAR_24;
 unsigned int VAR_25;
 bool VAR_26;
 bool VAR_27;
 int VAR_28;

 VAR_24 = FUNC_6(VAR_18->iobase + VAR_7);
 if (!(VAR_24 & VAR_11))
  return VAR_13;
 if (!VAR_18->attached)
  return VAR_12;

 VAR_21 = VAR_20->async;
 VAR_22 = &VAR_21->cmd;

 FUNC_7(&VAR_18->spinlock, VAR_23);
 VAR_24 = FUNC_4(VAR_18, VAR_4) & VAR_14;






 if (VAR_24 == 0) {
  FUNC_8(&VAR_18->spinlock, VAR_23);
  return VAR_12;
 }

 for (VAR_28 = 0; VAR_28 < VAR_8; VAR_28++) {
  VAR_25 = FUNC_2(VAR_18);
  if (VAR_20->maxdata == 0x0fff) {
   VAR_26 = !!(VAR_25 & VAR_9);
   VAR_27 = !!(VAR_25 & VAR_10);
  } else {

   VAR_26 = 0;
   VAR_27 = !!(FUNC_6(VAR_18->iobase + VAR_6) &
      VAR_0);
  }
  if (VAR_26 || VAR_27)
   break;

  if (VAR_20->maxdata == 0x0fff)
   VAR_25 >>= 4;

  VAR_25 &= VAR_20->maxdata;
  FUNC_0(VAR_20, &VAR_25, 1);

  if (VAR_22->stop_src == VAR_15 &&
      VAR_21->scans_done >= VAR_22->stop_arg) {
   VAR_21->events |= VAR_2;
   break;
  }
 }

 if (VAR_27) {
  FUNC_8(&VAR_18->spinlock, VAR_23);
  VAR_21->events |= VAR_3;
  FUNC_1(VAR_18, VAR_20);
  return VAR_12;
 }

 if (!(VAR_21->events & VAR_1)) {




  FUNC_5(VAR_18, VAR_5 | VAR_19->do_bits,
     VAR_4);
  FUNC_8(&VAR_18->spinlock, VAR_23);
 } else {

  FUNC_8(&VAR_18->spinlock, VAR_23);
  FUNC_3(VAR_18);
 }
 FUNC_1(VAR_18, VAR_20);
 return VAR_12;
}
