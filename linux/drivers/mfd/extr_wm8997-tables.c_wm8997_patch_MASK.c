
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arizona {int rev; int regmap; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_0 ;

int FUNC_2(struct arizona *VAR_1)
{
 switch (VAR_1->rev) {
 case 0:
  return FUNC_1(VAR_1->regmap,
          VAR_0,
          FUNC_0(VAR_0));
 default:
  return 0;
 }
}
