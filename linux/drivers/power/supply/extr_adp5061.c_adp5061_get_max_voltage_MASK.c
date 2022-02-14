
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct adp5061_state {int regmap; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int*) ;
 int* VAR_2 ;
 int FUNC_1 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct adp5061_state *VAR_3,
       union power_supply_propval *VAR_4)
{
 unsigned int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_3->regmap, VAR_0, &VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_5 = ((VAR_5 & VAR_1) >> 2) - 0x0F;
 if (VAR_5 >= FUNC_0(VAR_2))
  VAR_5 = FUNC_0(VAR_2) - 1;

 VAR_4->intval = VAR_2[VAR_5] * 1000;

 return VAR_6;
}
