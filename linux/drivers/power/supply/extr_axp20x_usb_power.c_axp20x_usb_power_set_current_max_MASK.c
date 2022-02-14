
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct axp20x_usb_power {int regmap; int axp20x_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct axp20x_usb_power *VAR_4,
         int VAR_5)
{
 int VAR_6;

 switch (VAR_5) {
 case 100000:
  if (VAR_4->axp20x_id == VAR_2)
   return -VAR_3;

 case 500000:
 case 900000:
  VAR_6 = (900000 - VAR_5) / 400000;
  return FUNC_0(VAR_4->regmap,
       VAR_1,
       VAR_0, VAR_6);
 default:
  return -VAR_3;
 }

 return -VAR_3;
}
