
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct hpdi_private {scalar_t__ dio_count; scalar_t__ plx9080_mmio; } ;
struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {int class_dev; int spinlock; scalar_t__ mmio; int attached; struct comedi_subdevice* read_subdev; struct hpdi_private* private; } ;
struct comedi_async {int events; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct comedi_device*,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int,scalar_t__) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_18, void *VAR_19)
{
 struct comedi_device *VAR_20 = VAR_19;
 struct hpdi_private *VAR_21 = VAR_20->private;
 struct comedi_subdevice *VAR_22 = VAR_20->read_subdev;
 struct comedi_async *VAR_23 = VAR_22->async;
 u32 VAR_24, VAR_25;
 u32 VAR_26;
 u32 VAR_27;
 u8 VAR_28, VAR_29;
 unsigned long VAR_30;

 if (!VAR_20->attached)
  return VAR_5;

 VAR_26 = FUNC_4(VAR_21->plx9080_mmio + VAR_14);
 if ((VAR_26 &
      (VAR_8 | VAR_9 | VAR_11)) == 0)
  return VAR_5;

 VAR_24 = FUNC_4(VAR_20->mmio + VAR_3);
 VAR_25 = FUNC_4(VAR_20->mmio + VAR_0);

 if (VAR_24)
  FUNC_8(VAR_24, VAR_20->mmio + VAR_3);


 FUNC_5(&VAR_20->spinlock, VAR_30);
 VAR_28 = FUNC_3(VAR_21->plx9080_mmio + VAR_12);
 if (VAR_26 & VAR_8) {

  FUNC_7((VAR_28 & VAR_7) | VAR_6,
         VAR_21->plx9080_mmio + VAR_12);

  if (VAR_28 & VAR_7)
   FUNC_2(VAR_20, 0);
 }
 FUNC_6(&VAR_20->spinlock, VAR_30);


 FUNC_5(&VAR_20->spinlock, VAR_30);
 VAR_29 = FUNC_3(VAR_21->plx9080_mmio + VAR_13);
 if (VAR_26 & VAR_9) {

  FUNC_7((VAR_29 & VAR_7) | VAR_6,
         VAR_21->plx9080_mmio + VAR_13);
 }
 FUNC_6(&VAR_20->spinlock, VAR_30);


 if (VAR_26 & VAR_10) {

  VAR_27 = FUNC_4(VAR_21->plx9080_mmio + VAR_15);
  FUNC_8(VAR_27, VAR_21->plx9080_mmio + VAR_15);
 }

 if (VAR_25 & VAR_16) {
  FUNC_1(VAR_20->class_dev, "rx fifo overrun\n");
  VAR_23->events |= VAR_2;
 }

 if (VAR_25 & VAR_17) {
  FUNC_1(VAR_20->class_dev, "rx fifo underrun\n");
  VAR_23->events |= VAR_2;
 }

 if (VAR_21->dio_count == 0)
  VAR_23->events |= VAR_1;

 FUNC_0(VAR_20, VAR_22);

 return VAR_4;
}
