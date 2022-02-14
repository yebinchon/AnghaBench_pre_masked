
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct axp20x_usb_power {int regmap; } ;


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
 case 4000000:
 case 4100000:
 case 4200000:
 case 4300000:
 case 4400000:
 case 4500000:
 case 4600000:
 case 4700000:
  VAR_6 = (VAR_5 - 4000000) / 100000;
  return FUNC_0(VAR_4->regmap,
       VAR_0,
       VAR_1,
       VAR_6 << VAR_2);
 default:
  return -VAR_3;
 }

 return -VAR_3;
}
