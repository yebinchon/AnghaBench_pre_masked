
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct axp20x_batt_ps {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct axp20x_batt_ps *VAR_3,
      int VAR_4)
{
 int VAR_5 = (VAR_4 - 2600000) / 100000;

 if (VAR_5 < 0 || VAR_5 > VAR_1)
  return -VAR_2;

 return FUNC_0(VAR_3->regmap, VAR_0,
      VAR_1, VAR_5);
}
