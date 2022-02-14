
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arizona {int rev; int regmap; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_2(struct arizona *VAR_4)
{
 switch (VAR_4->rev) {
 case 0:
  return FUNC_1(VAR_4->regmap,
          VAR_0,
          FUNC_0(VAR_0));
 case 1:
  return FUNC_1(VAR_4->regmap,
          VAR_1,
          FUNC_0(VAR_1));
 case 3:
  return FUNC_1(VAR_4->regmap,
          VAR_2,
          FUNC_0(VAR_2));
 default:
  return FUNC_1(VAR_4->regmap,
          VAR_3,
          FUNC_0(VAR_3));
 }
}
