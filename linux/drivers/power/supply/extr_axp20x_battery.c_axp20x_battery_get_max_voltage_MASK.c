
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct axp20x_batt_ps {int regmap; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_1(struct axp20x_batt_ps *VAR_3,
       int *VAR_4)
{
 int VAR_5, VAR_6;

 VAR_5 = FUNC_0(VAR_3->regmap, VAR_0, &VAR_6);
 if (VAR_5)
  return VAR_5;

 switch (VAR_6 & VAR_1) {
 case 130:
  *VAR_4 = 4100000;
  break;
 case 131:
  *VAR_4 = 4150000;
  break;
 case 129:
  *VAR_4 = 4200000;
  break;
 case 128:
  *VAR_4 = 4360000;
  break;
 default:
  return -VAR_2;
 }

 return 0;
}
