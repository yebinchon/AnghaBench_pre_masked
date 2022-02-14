
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nidio96_private {int mite_channel_lock; scalar_t__ di_mite_chan; } ;
struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {int spinlock; scalar_t__ mmio; int class_dev; int attached; struct comedi_subdevice* read_subdev; struct nidio96_private* private; } ;
struct comedi_async {int events; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (struct comedi_subdevice*,unsigned int*,int) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (scalar_t__,struct comedi_subdevice*,int) ;
 int FUNC_4 (scalar_t__) ;
 unsigned int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_22 ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_23, void *VAR_24)
{
 struct comedi_device *VAR_25 = VAR_24;
 struct nidio96_private *VAR_26 = VAR_25->private;
 struct comedi_subdevice *VAR_27 = VAR_25->read_subdev;
 struct comedi_async *VAR_28 = VAR_27->async;
 unsigned int VAR_29;
 int VAR_30;
 int VAR_31;
 int VAR_32 = 0;


 if (!VAR_25->attached) {

  return VAR_15;
 }


 FUNC_6(&VAR_25->spinlock);

 VAR_31 = FUNC_4(VAR_25->mmio + VAR_12);
 VAR_30 = FUNC_4(VAR_25->mmio + VAR_10);

 FUNC_6(&VAR_26->mite_channel_lock);
 if (VAR_26->di_mite_chan) {
  FUNC_3(VAR_26->di_mite_chan, VAR_27, 0);

 }
 FUNC_7(&VAR_26->mite_channel_lock);

 while (VAR_31 & VAR_7) {
  VAR_32++;
  if (VAR_32 > 20) {
   FUNC_2(VAR_25->class_dev, "too much work in interrupt\n");
   FUNC_8(0x00,
          VAR_25->mmio + VAR_16);
   break;
  }

  VAR_30 &= VAR_13;

  if (VAR_30 & VAR_20) {
   while (VAR_30 & VAR_20) {
    VAR_32++;
    if (VAR_32 > 100) {
     FUNC_2(VAR_25->class_dev,
      "too much work in interrupt\n");
     FUNC_8(0x00, VAR_25->mmio +
            VAR_16
           );
     goto out;
    }
    VAR_29 = FUNC_5(VAR_25->mmio + VAR_8);
    FUNC_0(VAR_27, &VAR_29, 1);
    VAR_30 = FUNC_4(VAR_25->mmio + VAR_10);
   }
  }

  if (VAR_30 & VAR_6) {
   FUNC_8(VAR_0, VAR_25->mmio + VAR_11);
   VAR_28->events |= VAR_4;

   FUNC_8(0x00, VAR_25->mmio + VAR_17);
   break;
  } else if (VAR_30 & VAR_21) {
   FUNC_8(VAR_3, VAR_25->mmio + VAR_9);
   VAR_28->events |= VAR_5;
   break;
  } else if (VAR_30 & VAR_18) {
   FUNC_8(VAR_1,
          VAR_25->mmio + VAR_9);
   VAR_28->events |= VAR_4;
  } else if (VAR_30 & VAR_19) {
   FUNC_8(VAR_2,
          VAR_25->mmio + VAR_9);
   VAR_28->events |= VAR_4;
  }

  VAR_30 = FUNC_4(VAR_25->mmio + VAR_10);
  VAR_31 = FUNC_4(VAR_25->mmio + VAR_12);
 }

out:
 FUNC_1(VAR_25, VAR_27);





 FUNC_7(&VAR_25->spinlock);
 return VAR_14;
}
