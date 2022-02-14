
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct power_supply {int dummy; } ;
struct ds2760_device_info {int rem_capacity; int life_sec; int temp_C; int accum_current_uAh; int empty_uAh; int full_active_uAh; int rated_capacity; int current_uA; int voltage_uV; int charge_status; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int FUNC_0 (struct ds2760_device_info*) ;
 struct ds2760_device_info* FUNC_1 (struct power_supply*) ;

__attribute__((used)) static int FUNC_2(struct power_supply *VAR_1,
           enum power_supply_property VAR_2,
           union power_supply_propval *VAR_3)
{
 struct ds2760_device_info *VAR_4 = FUNC_1(VAR_1);

 switch (VAR_2) {
 case 131:
  VAR_3->intval = VAR_4->charge_status;
  return 0;
 default:
  break;
 }

 FUNC_0(VAR_4);

 switch (VAR_2) {
 case 128:
  VAR_3->intval = VAR_4->voltage_uV;
  break;
 case 132:
  VAR_3->intval = VAR_4->current_uA;
  break;
 case 134:
  VAR_3->intval = VAR_4->rated_capacity;
  break;
 case 135:
  VAR_3->intval = VAR_4->full_active_uAh;
  break;
 case 136:
  VAR_3->intval = VAR_4->empty_uAh;
  break;
 case 133:
  VAR_3->intval = VAR_4->accum_current_uAh;
  break;
 case 130:
  VAR_3->intval = VAR_4->temp_C;
  break;
 case 129:
  VAR_3->intval = VAR_4->life_sec;
  break;
 case 137:
  VAR_3->intval = VAR_4->rem_capacity;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
