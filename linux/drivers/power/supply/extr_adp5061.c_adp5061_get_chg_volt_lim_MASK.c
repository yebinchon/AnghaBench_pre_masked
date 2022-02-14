
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct adp5061_state {int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int* VAR_1 ;
 int FUNC_1 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct adp5061_state *VAR_2,
        union power_supply_propval *VAR_3)
{
 unsigned int VAR_4;
 int VAR_5, VAR_6;

 VAR_6 = FUNC_1(VAR_2->regmap, VAR_0, &VAR_4);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_5 = FUNC_0(VAR_4);
 VAR_3->intval = VAR_1[VAR_5] * 1000;

 return VAR_6;
}
