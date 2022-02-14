
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sc2731_charger_info {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_1(struct sc2731_charger_info *VAR_4)
{
 u32 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_4->regmap, VAR_3, &VAR_5);
 if (VAR_6)
  return VAR_6;

 if (VAR_5 & VAR_2)
  return VAR_1;

 return VAR_0;
}
