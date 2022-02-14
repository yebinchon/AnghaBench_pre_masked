
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {struct a2150_private* private; } ;
struct a2150_private {int config_bits; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_1,
         unsigned int VAR_2,
         unsigned int VAR_3)
{
 struct a2150_private *VAR_4 = VAR_1->private;

 if (VAR_2 + VAR_3 > 4)
  return -1;

 VAR_4->config_bits &= ~VAR_0;

 switch (VAR_3) {
 case 1:
  VAR_4->config_bits |= FUNC_0(0x4 | VAR_2);
  break;
 case 2:
  if (VAR_2 == 0)
   VAR_4->config_bits |= FUNC_0(0x2);
  else if (VAR_2 == 2)
   VAR_4->config_bits |= FUNC_0(0x3);
  else
   return -1;
  break;
 case 4:
  VAR_4->config_bits |= FUNC_0(0x1);
  break;
 default:
  return -1;
 }

 return 0;
}
