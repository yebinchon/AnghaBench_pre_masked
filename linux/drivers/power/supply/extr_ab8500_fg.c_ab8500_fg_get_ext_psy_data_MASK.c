
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


union power_supply_propval {int intval; } ;
struct power_supply {TYPE_3__* desc; int num_supplicants; scalar_t__ supplied_to; } ;
struct device {int dummy; } ;
struct abx500_battery_type {int charge_full_design; int nominal_voltage; } ;
struct TYPE_8__ {int charging; int fully_charged; int force_full; int batt_id_received; int batt_unknown; } ;
struct TYPE_6__ {int max_mah; int mah; int max_mah_design; } ;
struct ab8500_fg {int bat_temp; TYPE_4__ flags; int vbat_nom; TYPE_2__ bat_cap; TYPE_1__* bm; int fg_work; int fg_wq; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;
struct TYPE_7__ {int num_properties; int* properties; int type; int name; } ;
struct TYPE_5__ {size_t batt_id; struct abx500_battery_type* bat_type; int capacity_scaling; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ab8500_fg*) ;
 struct power_supply* FUNC_1 (struct device*) ;
 int FUNC_2 (char const**,int ,int ) ;
 struct ab8500_fg* FUNC_3 (struct power_supply*) ;
 scalar_t__ FUNC_4 (struct power_supply*,int,union power_supply_propval*) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_2, void *VAR_3)
{
 struct power_supply *VAR_4;
 struct power_supply *VAR_5 = FUNC_1(VAR_2);
 const char **VAR_6 = (const char **)VAR_5->supplied_to;
 struct ab8500_fg *VAR_7;
 union power_supply_propval VAR_8;
 int VAR_9;

 VAR_4 = (struct power_supply *)VAR_3;
 VAR_7 = FUNC_3(VAR_4);





 VAR_9 = FUNC_2(VAR_6, VAR_5->num_supplicants, VAR_4->desc->name);
 if (VAR_9 < 0)
  return 0;


 for (VAR_9 = 0; VAR_9 < VAR_5->desc->num_properties; VAR_9++) {
  enum power_supply_property VAR_10;
  VAR_10 = VAR_5->desc->properties[VAR_9];

  if (FUNC_4(VAR_5, VAR_10, &VAR_8))
   continue;

  switch (VAR_10) {
  case 136:
   switch (VAR_5->desc->type) {
   case 128:
    switch (VAR_8.intval) {
    case 129:
    case 132:
    case 130:
     if (!VAR_7->flags.charging)
      break;
     VAR_7->flags.charging = 0;
     VAR_7->flags.fully_charged = 0;
     if (VAR_7->bm->capacity_scaling)
      FUNC_0(VAR_7);
     FUNC_5(VAR_7->fg_wq, &VAR_7->fg_work);
     break;
    case 131:
     if (VAR_7->flags.fully_charged)
      break;
     VAR_7->flags.fully_charged = 1;
     VAR_7->flags.force_full = 1;

     VAR_7->bat_cap.max_mah = VAR_7->bat_cap.mah;
     FUNC_5(VAR_7->fg_wq, &VAR_7->fg_work);
     break;
    case 133:
     if (VAR_7->flags.charging &&
      !VAR_7->flags.fully_charged)
      break;
     VAR_7->flags.charging = 1;
     VAR_7->flags.fully_charged = 0;
     if (VAR_7->bm->capacity_scaling)
      FUNC_0(VAR_7);
     FUNC_5(VAR_7->fg_wq, &VAR_7->fg_work);
     break;
    };
   default:
    break;
   };
   break;
  case 135:
   switch (VAR_5->desc->type) {
   case 128:
    if (!VAR_7->flags.batt_id_received &&
        VAR_7->bm->batt_id != VAR_0) {
     const struct abx500_battery_type *VAR_11;

     VAR_11 = &(VAR_7->bm->bat_type[VAR_7->bm->batt_id]);

     VAR_7->flags.batt_id_received = 1;

     VAR_7->bat_cap.max_mah_design =
      VAR_1 *
      VAR_11->charge_full_design;

     VAR_7->bat_cap.max_mah =
      VAR_7->bat_cap.max_mah_design;

     VAR_7->vbat_nom = VAR_11->nominal_voltage;
    }

    if (VAR_8.intval)
     VAR_7->flags.batt_unknown = 0;
    else
     VAR_7->flags.batt_unknown = 1;
    break;
   default:
    break;
   }
   break;
  case 134:
   switch (VAR_5->desc->type) {
   case 128:
    if (VAR_7->flags.batt_id_received)
     VAR_7->bat_temp = VAR_8.intval;
    break;
   default:
    break;
   }
   break;
  default:
   break;
  }
 }
 return 0;
}
