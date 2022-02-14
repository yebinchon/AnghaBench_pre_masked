
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union power_supply_propval {int intval; int strval; } ;
struct TYPE_2__ {int parent; } ;
struct power_supply {TYPE_1__ dev; } ;
struct nvec_power {int bat_type_enum; int bat_model; int bat_manu; int bat_temperature; int capacity_remain; int critical_capacity; int charge_last_full; int charge_full_design; int time_remain; int bat_current_avg; int bat_current_now; int bat_voltage_now; int bat_present; int bat_cap; int bat_status; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 struct nvec_power* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct power_supply *VAR_1,
         enum power_supply_property VAR_2,
         union power_supply_propval *VAR_3)
{
 struct nvec_power *VAR_4 = FUNC_0(VAR_1->dev.parent);

 switch (VAR_2) {
 case 132:
  VAR_3->intval = VAR_4->bat_status;
  break;
 case 142:
  VAR_3->intval = VAR_4->bat_cap;
  break;
 case 133:
  VAR_3->intval = VAR_4->bat_present;
  break;
 case 128:
  VAR_3->intval = VAR_4->bat_voltage_now;
  break;
 case 136:
  VAR_3->intval = VAR_4->bat_current_now;
  break;
 case 137:
  VAR_3->intval = VAR_4->bat_current_avg;
  break;
 case 129:
  VAR_3->intval = VAR_4->time_remain;
  break;
 case 139:
  VAR_3->intval = VAR_4->charge_full_design;
  break;
 case 140:
  VAR_3->intval = VAR_4->charge_last_full;
  break;
 case 141:
  VAR_3->intval = VAR_4->critical_capacity;
  break;
 case 138:
  VAR_3->intval = VAR_4->capacity_remain;
  break;
 case 130:
  VAR_3->intval = VAR_4->bat_temperature;
  break;
 case 135:
  VAR_3->strval = VAR_4->bat_manu;
  break;
 case 134:
  VAR_3->strval = VAR_4->bat_model;
  break;
 case 131:
  VAR_3->intval = VAR_4->bat_type_enum;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
