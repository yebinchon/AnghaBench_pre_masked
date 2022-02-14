
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_device {scalar_t__ iobase; struct comedi_subdevice* read_subdev; struct apci1500_private* private; } ;
struct apci1500_private {scalar_t__ amcc; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct comedi_device*,int ) ;
 int FUNC_1 (struct comedi_subdevice*,unsigned int*,int) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*) ;
 unsigned int FUNC_3 (scalar_t__) ;
 unsigned int FUNC_4 (scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_7, void *VAR_8)
{
 struct comedi_device *VAR_9 = VAR_8;
 struct apci1500_private *VAR_10 = VAR_9->private;
 struct comedi_subdevice *VAR_11 = VAR_9->read_subdev;
 unsigned int VAR_12 = 0;
 unsigned int VAR_13;

 VAR_13 = FUNC_4(VAR_10->amcc + VAR_0);
 if (!(VAR_13 & VAR_2))
  return VAR_4;

 if (FUNC_0(VAR_9, VAR_5))
  VAR_12 |= 0x01;

 if (FUNC_0(VAR_9, VAR_6)) {

  VAR_13 = FUNC_3(VAR_9->iobase + VAR_1);
  VAR_13 &= 0xc0;
  if (VAR_13) {
   if (VAR_13 & 0x80)
    VAR_12 |= 0x40;
   if (VAR_13 & 0x40)
    VAR_12 |= 0x80;
  } else {
   VAR_12 |= 0x02;
  }
 }
 FUNC_1(VAR_11, &VAR_12, 1);
 FUNC_2(VAR_9, VAR_11);

 return VAR_3;
}
