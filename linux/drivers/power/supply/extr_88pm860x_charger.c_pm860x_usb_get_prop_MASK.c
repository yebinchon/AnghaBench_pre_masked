
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct power_supply {int dummy; } ;
struct pm860x_charger_info {int online; int state; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 struct pm860x_charger_info* FUNC_0 (struct power_supply*) ;

__attribute__((used)) static int FUNC_1(struct power_supply *VAR_5,
          enum power_supply_property VAR_6,
          union power_supply_propval *VAR_7)
{
 struct pm860x_charger_info *VAR_8 = FUNC_0(VAR_5);

 switch (VAR_6) {
 case 128:
  if (VAR_8->state == VAR_1 ||
    VAR_8->state == VAR_2)
   VAR_7->intval = VAR_3;
  else
   VAR_7->intval = VAR_4;
  break;
 case 129:
  VAR_7->intval = VAR_8->online;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
