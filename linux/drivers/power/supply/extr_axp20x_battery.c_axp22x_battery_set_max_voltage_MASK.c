
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct axp20x_batt_ps {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct axp20x_batt_ps *VAR_5,
       int VAR_6)
{
 switch (VAR_6) {
 case 4100000:
  VAR_6 = VAR_1;
  break;

 case 4200000:
  VAR_6 = VAR_2;
  break;

 default:






  return -VAR_4;
 }

 return FUNC_0(VAR_5->regmap, VAR_0,
      VAR_3, VAR_6);
}
