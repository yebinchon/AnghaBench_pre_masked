
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpc624_private {unsigned int ai_speed; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {int class_dev; scalar_t__ iobase; struct mpc624_private* private; } ;


 unsigned int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (unsigned int,scalar_t__) ;
 int FUNC_4 (int) ;

__attribute__((used)) static unsigned int FUNC_5(struct comedi_device *VAR_7,
      struct comedi_subdevice *VAR_8)
{
 struct mpc624_private *VAR_9 = VAR_7->private;
 unsigned int VAR_10 = VAR_9->ai_speed;
 unsigned int VAR_11 = 0;
 unsigned int VAR_12;
 int VAR_13;


 FUNC_4(1);
 for (VAR_13 = 0; VAR_13 < 32; VAR_13++) {

  FUNC_3(0, VAR_7->iobase + VAR_0);
  FUNC_4(1);


  VAR_12 = (VAR_10 & FUNC_0(31)) ? VAR_2 : 0;
  FUNC_3(VAR_12, VAR_7->iobase + VAR_0);
  FUNC_4(1);


  FUNC_3(VAR_1 | VAR_12, VAR_7->iobase + VAR_0);
  FUNC_4(1);


  VAR_11 <<= 1;
  VAR_11 |= (FUNC_2(VAR_7->iobase + VAR_0) & VAR_3) >> 4;
  FUNC_4(1);

  VAR_10 <<= 1;
 }
 if (VAR_11 & VAR_5)
  FUNC_1(VAR_7->class_dev, "EOC bit is set!");
 if (VAR_11 & VAR_4)
  FUNC_1(VAR_7->class_dev, "DMY bit is set!");

 if (VAR_11 & VAR_6) {






  VAR_11 &= 0x3fffffff;
 } else {






  VAR_11 |= VAR_6;
  VAR_11 = ~VAR_11;
  VAR_11 += 1;

  VAR_11 &= ~(VAR_5 | VAR_4);
  VAR_11 = 0x20000000 - VAR_11;
 }
 return VAR_11;
}
