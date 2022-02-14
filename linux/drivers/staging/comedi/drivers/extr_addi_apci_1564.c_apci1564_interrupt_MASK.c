
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int state; } ;
struct comedi_device {scalar_t__ iobase; struct comedi_subdevice* read_subdev; struct apci1564_private* private; } ;
struct apci1564_private {unsigned long counters; scalar_t__ timer; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long FUNC_0 (unsigned int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (unsigned int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct comedi_subdevice*,int*,int) ;
 int FUNC_3 (struct comedi_device*,struct comedi_subdevice*) ;
 void* FUNC_4 (scalar_t__) ;
 int FUNC_5 (unsigned int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_11, void *VAR_12)
{
 struct comedi_device *VAR_13 = VAR_12;
 struct apci1564_private *VAR_14 = VAR_13->private;
 struct comedi_subdevice *VAR_15 = VAR_13->read_subdev;
 unsigned int VAR_16;
 unsigned int VAR_17;
 unsigned int VAR_18;

 VAR_15->state &= ~VAR_8;

 VAR_16 = FUNC_4(VAR_13->iobase + VAR_6);
 if (VAR_16 & VAR_5) {

  VAR_15->state = FUNC_4(VAR_13->iobase + VAR_4);
  VAR_15->state &= VAR_3;
  VAR_15->state |= VAR_7;


  FUNC_5(VAR_16 & ~VAR_5,
       VAR_13->iobase + VAR_6);
  FUNC_5(VAR_16, VAR_13->iobase + VAR_6);
 }

 VAR_16 = FUNC_4(VAR_14->timer + VAR_2);
 if (VAR_16 & VAR_1) {
  VAR_15->state |= VAR_9;


  VAR_17 = FUNC_4(VAR_14->timer + VAR_0);
  FUNC_5(0x0, VAR_14->timer + VAR_0);
  FUNC_5(VAR_17, VAR_14->timer + VAR_0);
 }

 if (VAR_14->counters) {
  for (VAR_18 = 0; VAR_18 < 3; VAR_18++) {
   unsigned long VAR_19;

   VAR_19 = VAR_14->counters + FUNC_0(VAR_18);

   VAR_16 = FUNC_4(VAR_19 + VAR_2);
   if (VAR_16 & VAR_1) {
    VAR_15->state |= FUNC_1(VAR_18);


    VAR_17 = FUNC_4(VAR_19 + VAR_0);
    FUNC_5(0x0, VAR_19 + VAR_0);
    FUNC_5(VAR_17, VAR_19 + VAR_0);
   }
  }
 }

 if (VAR_15->state & VAR_8) {
  FUNC_2(VAR_15, &VAR_15->state, 1);
  FUNC_3(VAR_13, VAR_15);
 }

 return VAR_10;
}
