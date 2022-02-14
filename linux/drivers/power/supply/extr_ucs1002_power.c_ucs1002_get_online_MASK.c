
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct ucs1002_info {int regmap; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct ucs1002_info *VAR_2,
         union power_supply_propval *VAR_3)
{
 unsigned int VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2->regmap, VAR_1, &VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_3->intval = !!(VAR_4 & VAR_0);

 return 0;
}
