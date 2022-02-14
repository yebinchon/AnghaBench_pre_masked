
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct power_supply {int dummy; } ;
struct axp20x_ac_power {int regmap; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;


 struct axp20x_ac_power* FUNC_2 (struct power_supply*) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct power_supply *VAR_4,
     enum power_supply_property VAR_5,
     const union power_supply_propval *VAR_6)
{
 struct axp20x_ac_power *VAR_7 = FUNC_2(VAR_4);

 switch (VAR_5) {
 case 128:
  if (VAR_6->intval < 4000000 || VAR_6->intval > 4700000)
   return -VAR_3;

  return FUNC_3(VAR_7->regmap, VAR_0,
       VAR_2,
       FUNC_1(VAR_6->intval));

 case 129:
  if (VAR_6->intval < 1500000 || VAR_6->intval > 4000000)
   return -VAR_3;

  return FUNC_3(VAR_7->regmap, VAR_0,
       VAR_1,
       FUNC_0(VAR_6->intval));

 default:
  return -VAR_3;
 }

 return -VAR_3;
}
