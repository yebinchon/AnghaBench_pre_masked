
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct ucs1002_info {int regmap; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,unsigned int*) ;
 int * VAR_2 ;

__attribute__((used)) static int FUNC_1(struct ucs1002_info *VAR_3,
       union power_supply_propval *VAR_4)
{
 unsigned int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_3->regmap, VAR_1, &VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_4->intval = VAR_2[VAR_5 & VAR_0];

 return 0;
}
