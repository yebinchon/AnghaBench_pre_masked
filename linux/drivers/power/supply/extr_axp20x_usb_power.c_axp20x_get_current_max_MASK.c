
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct axp20x_usb_power {int axp20x_id; int regmap; } ;





 unsigned int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct axp20x_usb_power *VAR_3, int *VAR_4)
{
 unsigned int VAR_5;
 int VAR_6 = FUNC_0(VAR_3->regmap, VAR_1, &VAR_5);

 if (VAR_6)
  return VAR_6;

 switch (VAR_5 & VAR_0) {
 case 131:
  if (VAR_3->axp20x_id == VAR_2)
   *VAR_4 = -1;
  else
   *VAR_4 = 100000;
  break;
 case 130:
  *VAR_4 = 500000;
  break;
 case 129:
  *VAR_4 = 900000;
  break;
 case 128:
  *VAR_4 = -1;
  break;
 }

 return 0;
}
