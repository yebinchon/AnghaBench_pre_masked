
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union power_supply_propval {int intval; } ;
struct power_supply {int dummy; } ;
struct TYPE_5__ {int temp; } ;
struct TYPE_4__ {int btemp_underover; int batt_ovv; } ;
struct abx500_chargalg {int charge_state; TYPE_3__* bm; TYPE_2__ batt_data; TYPE_1__ events; int charge_status; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;
struct TYPE_6__ {int temp_under; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;
 int VAR_7 ;
 struct abx500_chargalg* FUNC_0 (struct power_supply*) ;

__attribute__((used)) static int FUNC_1(struct power_supply *VAR_8,
 enum power_supply_property VAR_9,
 union power_supply_propval *VAR_10)
{
 struct abx500_chargalg *VAR_11 = FUNC_0(VAR_8);

 switch (VAR_9) {
 case 128:
  VAR_10->intval = VAR_11->charge_status;
  break;
 case 129:
  if (VAR_11->events.batt_ovv) {
   VAR_10->intval = VAR_4;
  } else if (VAR_11->events.btemp_underover) {
   if (VAR_11->batt_data.temp <= VAR_11->bm->temp_under)
    VAR_10->intval = VAR_1;
   else
    VAR_10->intval = VAR_3;
  } else if (VAR_11->charge_state == VAR_6 ||
      VAR_11->charge_state == VAR_7) {
   VAR_10->intval = VAR_5;
  } else {
   VAR_10->intval = VAR_2;
  }
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
