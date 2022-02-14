
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct z2_charger {int bat_status; struct z2_battery_info* info; } ;
struct z2_battery_info {int batt_tech; int max_voltage; int min_voltage; int batt_I2C_reg; } ;
struct power_supply {int dummy; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;






 struct z2_charger* FUNC_0 (struct power_supply*) ;
 int FUNC_1 (struct z2_charger*) ;

__attribute__((used)) static int FUNC_2(struct power_supply *VAR_1,
       enum power_supply_property VAR_2,
       union power_supply_propval *VAR_3)
{
 struct z2_charger *VAR_4 = FUNC_0(VAR_1);
 struct z2_battery_info *VAR_5 = VAR_4->info;

 switch (VAR_2) {
 case 132:
  VAR_3->intval = VAR_4->bat_status;
  break;
 case 131:
  VAR_3->intval = VAR_5->batt_tech;
  break;
 case 128:
  if (VAR_5->batt_I2C_reg >= 0)
   VAR_3->intval = FUNC_1(VAR_4);
  else
   return -VAR_0;
  break;
 case 130:
  if (VAR_5->max_voltage >= 0)
   VAR_3->intval = VAR_5->max_voltage;
  else
   return -VAR_0;
  break;
 case 129:
  if (VAR_5->min_voltage >= 0)
   VAR_3->intval = VAR_5->min_voltage;
  else
   return -VAR_0;
  break;
 case 133:
  VAR_3->intval = 1;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
