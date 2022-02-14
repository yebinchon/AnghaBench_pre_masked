
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {scalar_t__ iobase; int class_dev; int attached; struct comedi_subdevice* read_subdev; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int events; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct comedi_subdevice*,unsigned int*,int) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_2 (int ,char*) ;
 unsigned int FUNC_3 (scalar_t__) ;
 unsigned int FUNC_4 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_5 (unsigned int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_15, void *VAR_16)
{
 unsigned int VAR_17;
 struct comedi_device *VAR_18 = VAR_16;
 struct comedi_subdevice *VAR_19 = VAR_18->read_subdev;
 int VAR_20;
 int VAR_21 = 0;
 unsigned int VAR_22;

 if (!VAR_18->attached)
  return VAR_3;

 if (FUNC_3(VAR_18->iobase + VAR_13) &
     VAR_12) {

  VAR_17 = FUNC_3(VAR_18->iobase + VAR_11);

  if (!(VAR_17 & VAR_9) &&
      !(VAR_17 & VAR_10) &&
      (VAR_17 & VAR_8)) {
   FUNC_2(VAR_18->class_dev, "FIFO overflow\n");
   VAR_19->async->events |= VAR_1;
   VAR_21 = VAR_7;
  } else if ((VAR_17 & VAR_9) &&
      !(VAR_17 & VAR_10) &&
      (VAR_17 & VAR_8)) {
   VAR_21 = VAR_7 / 2;
  } else {
   FUNC_2(VAR_18->class_dev, "Undefined FIFO state\n");
   VAR_19->async->events |= VAR_1;
   VAR_21 = 0;
  }

  for (VAR_20 = 0; VAR_20 < VAR_21; VAR_20++) {
   VAR_22 = FUNC_4(VAR_18, VAR_19);
   if (!FUNC_0(VAR_19, &VAR_22, 1))
    break;
  }


  VAR_17 |= VAR_4;
  FUNC_5(VAR_17, VAR_18->iobase + VAR_5);
  VAR_17 &= ~VAR_4;
  FUNC_5(VAR_17, VAR_18->iobase + VAR_5);
 }

 if (FUNC_3(VAR_18->iobase + VAR_13) &
     VAR_14) {

  VAR_19->async->events |= VAR_0;


  while (FUNC_3(VAR_18->iobase + VAR_11) &
         VAR_8) {
   VAR_22 = FUNC_4(VAR_18, VAR_19);
   if (!FUNC_0(VAR_19, &VAR_22, 1))
    break;
  }


  VAR_17 = FUNC_3(VAR_18->iobase + VAR_5);
  VAR_17 |= VAR_6;
  FUNC_5(VAR_17, VAR_18->iobase + VAR_5);
  VAR_17 &= ~VAR_6;
  FUNC_5(VAR_17, VAR_18->iobase + VAR_5);
 }

 FUNC_1(VAR_18, VAR_19);

 return VAR_2;
}
