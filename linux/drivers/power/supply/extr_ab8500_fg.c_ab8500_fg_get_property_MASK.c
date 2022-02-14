
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union power_supply_propval {int intval; } ;
struct power_supply {int dummy; } ;
struct TYPE_6__ {int max_mah_design; int max_mah; int prev_mah; int prev_percent; int prev_level; } ;
struct TYPE_5__ {int batt_id_received; int batt_unknown; int bat_ovv; } ;
struct ab8500_fg {int vbat; int inst_curr; int avg_curr; TYPE_3__ bat_cap; TYPE_2__ flags; TYPE_1__* bm; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;
struct TYPE_4__ {int chg_unknown_bat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (struct ab8500_fg*,int) ;
 struct ab8500_fg* FUNC_1 (struct power_supply*) ;

__attribute__((used)) static int FUNC_2(struct power_supply *VAR_3,
 enum power_supply_property VAR_4,
 union power_supply_propval *VAR_5)
{
 struct ab8500_fg *VAR_6 = FUNC_1(VAR_3);
 switch (VAR_4) {
 case 128:
  if (VAR_6->flags.bat_ovv)
   VAR_5->intval = VAR_0 * 1000;
  else
   VAR_5->intval = VAR_6->vbat * 1000;
  break;
 case 132:
  VAR_5->intval = VAR_6->inst_curr * 1000;
  break;
 case 133:
  VAR_5->intval = VAR_6->avg_curr * 1000;
  break;
 case 130:
  VAR_5->intval = FUNC_0(VAR_6,
    VAR_6->bat_cap.max_mah_design);
  break;
 case 131:
  VAR_5->intval = FUNC_0(VAR_6,
    VAR_6->bat_cap.max_mah);
  break;
 case 129:
  if (VAR_6->flags.batt_unknown && !VAR_6->bm->chg_unknown_bat &&
    VAR_6->flags.batt_id_received)
   VAR_5->intval = FUNC_0(VAR_6,
     VAR_6->bat_cap.max_mah);
  else
   VAR_5->intval = FUNC_0(VAR_6,
     VAR_6->bat_cap.prev_mah);
  break;
 case 135:
  VAR_5->intval = VAR_6->bat_cap.max_mah_design;
  break;
 case 136:
  VAR_5->intval = VAR_6->bat_cap.max_mah;
  break;
 case 134:
  if (VAR_6->flags.batt_unknown && !VAR_6->bm->chg_unknown_bat &&
    VAR_6->flags.batt_id_received)
   VAR_5->intval = VAR_6->bat_cap.max_mah;
  else
   VAR_5->intval = VAR_6->bat_cap.prev_mah;
  break;
 case 138:
  if (VAR_6->flags.batt_unknown && !VAR_6->bm->chg_unknown_bat &&
    VAR_6->flags.batt_id_received)
   VAR_5->intval = 100;
  else
   VAR_5->intval = VAR_6->bat_cap.prev_percent;
  break;
 case 137:
  if (VAR_6->flags.batt_unknown && !VAR_6->bm->chg_unknown_bat &&
    VAR_6->flags.batt_id_received)
   VAR_5->intval = VAR_2;
  else
   VAR_5->intval = VAR_6->bat_cap.prev_level;
  break;
 default:
  return -VAR_1;
 }
 return 0;
}
