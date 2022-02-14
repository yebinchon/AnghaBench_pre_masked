
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union power_supply_propval {int dummy; } power_supply_propval ;
struct power_supply {int dummy; } ;
struct TYPE_2__ {size_t num_properties; int * properties; } ;
struct charger_manager {struct charger_desc* desc; TYPE_1__ charger_psy_desc; int tzd_batt; } ;
struct charger_desc {int measure_battery_temp; scalar_t__ temp_diff; scalar_t__ temp_max; scalar_t__ thermal_zone; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct power_supply*,int ,union power_supply_propval*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct charger_manager *VAR_4,
  struct power_supply *VAR_5)
{
 struct charger_desc *VAR_6 = VAR_4->desc;
 union power_supply_propval VAR_7;
 int VAR_8;


 VAR_8 = FUNC_2(VAR_5,
     VAR_2, &VAR_7);

 if (!VAR_8) {
  VAR_4->charger_psy_desc.properties[VAR_4->charger_psy_desc.num_properties] =
    VAR_2;
  VAR_4->charger_psy_desc.num_properties++;
  VAR_4->desc->measure_battery_temp = 1;
 }
 if (VAR_4->desc->measure_battery_temp) {

  if (!VAR_6->temp_max)
   VAR_6->temp_max = VAR_0;
  if (!VAR_6->temp_diff)
   VAR_6->temp_diff = VAR_1;
 }

 return VAR_8;
}
