
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct axp20x_usb_power {int regmap; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct axp20x_usb_power *VAR_2, int *VAR_3)
{
 unsigned int VAR_4;
 int VAR_5 = FUNC_0(VAR_2->regmap, VAR_1, &VAR_4);

 if (VAR_5)
  return VAR_5;

 switch (VAR_4 & VAR_0) {
 case 128:
  *VAR_3 = 900000;
  break;
 case 131:
  *VAR_3 = 1500000;
  break;
 case 130:
  *VAR_3 = 2000000;
  break;
 case 129:
  *VAR_3 = 2500000;
  break;
 }
 return 0;
}
