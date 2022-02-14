
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {struct apci3120_private* private; } ;
struct apci3120_private {unsigned int osc_base; } ;



 unsigned int VAR_0 ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_2(struct comedi_device *VAR_1,
      unsigned int VAR_2,
      unsigned int VAR_3,
      unsigned int VAR_4)
{
 struct apci3120_private *VAR_5 = VAR_1->private;
 unsigned int VAR_6 = (VAR_2 == 0) ? 10 : 1000;
 unsigned int VAR_7 = VAR_5->osc_base * VAR_6;
 unsigned int VAR_8;

 switch (VAR_4 & VAR_0) {
 case 128:
  VAR_8 = FUNC_1(VAR_3, VAR_7);
  break;
 case 130:
  VAR_8 = VAR_3 / VAR_7;
  break;
 case 129:
 default:
  VAR_8 = FUNC_0(VAR_3, VAR_7);
  break;
 }

 if (VAR_2 == 2) {

  if (VAR_8 > 0x00ffffff)
   VAR_8 = 0x00ffffff;
 } else {

  if (VAR_8 > 0xffff)
   VAR_8 = 0xffff;
 }

 if (VAR_8 < 2)
  VAR_8 = 2;

 return VAR_8;
}
