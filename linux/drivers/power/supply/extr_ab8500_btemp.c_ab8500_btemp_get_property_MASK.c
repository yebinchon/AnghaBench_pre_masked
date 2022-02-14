
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union power_supply_propval {int intval; } ;
struct power_supply {int dummy; } ;
struct TYPE_5__ {int batt_rem; } ;
struct ab8500_btemp {TYPE_1__* bm; TYPE_2__ events; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;
struct TYPE_6__ {int name; } ;
struct TYPE_4__ {size_t batt_id; TYPE_3__* bat_type; } ;


 int VAR_0 ;




 int FUNC_0 (struct ab8500_btemp*) ;
 struct ab8500_btemp* FUNC_1 (struct power_supply*) ;

__attribute__((used)) static int FUNC_2(struct power_supply *VAR_1,
 enum power_supply_property VAR_2,
 union power_supply_propval *VAR_3)
{
 struct ab8500_btemp *VAR_4 = FUNC_1(VAR_1);

 switch (VAR_2) {
 case 130:
 case 131:
  if (VAR_4->events.batt_rem)
   VAR_3->intval = 0;
  else
   VAR_3->intval = 1;
  break;
 case 129:
  VAR_3->intval = VAR_4->bm->bat_type[VAR_4->bm->batt_id].name;
  break;
 case 128:
  VAR_3->intval = FUNC_0(VAR_4);
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
