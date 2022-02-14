
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int* properties; int num_properties; int use_for_apm; int external_power_changed; int get_property; int type; scalar_t__ name; } ;
struct z2_charger {TYPE_2__ batt_ps_desc; TYPE_1__* client; struct z2_battery_info* info; } ;
struct z2_battery_info {scalar_t__ charge_gpio; scalar_t__ batt_tech; scalar_t__ batt_I2C_reg; scalar_t__ max_voltage; scalar_t__ min_voltage; scalar_t__ batt_name; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int *,char*) ;
 int* FUNC_1 (int,int,int ) ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_2(struct z2_charger *VAR_12, int VAR_13)
{
 int VAR_14 = 0;
 enum power_supply_property *VAR_15;
 struct z2_battery_info *VAR_16 = VAR_12->info;

 if (VAR_16->charge_gpio >= 0)
  VAR_13++;
 if (VAR_16->batt_tech >= 0)
  VAR_13++;
 if (VAR_16->batt_I2C_reg >= 0)
  VAR_13++;
 if (VAR_16->max_voltage >= 0)
  VAR_13++;
 if (VAR_16->min_voltage >= 0)
  VAR_13++;

 VAR_15 = FUNC_1(VAR_13, sizeof(*VAR_15), VAR_1);
 if (!VAR_15)
  return -VAR_0;

 VAR_15[VAR_14++] = VAR_2;
 if (VAR_16->charge_gpio >= 0)
  VAR_15[VAR_14++] = VAR_3;
 if (VAR_16->batt_tech >= 0)
  VAR_15[VAR_14++] = VAR_4;
 if (VAR_16->batt_I2C_reg >= 0)
  VAR_15[VAR_14++] = VAR_7;
 if (VAR_16->max_voltage >= 0)
  VAR_15[VAR_14++] = VAR_5;
 if (VAR_16->min_voltage >= 0)
  VAR_15[VAR_14++] = VAR_6;

 if (!VAR_16->batt_name) {
  FUNC_0(&VAR_12->client->dev,
    "Please consider setting proper battery "
    "name in platform definition file, falling "
    "back to name \" Z2_DEFAULT_NAME \"\n");
  VAR_12->batt_ps_desc.name = VAR_9;
 } else
  VAR_12->batt_ps_desc.name = VAR_16->batt_name;

 VAR_12->batt_ps_desc.properties = VAR_15;
 VAR_12->batt_ps_desc.num_properties = VAR_13;
 VAR_12->batt_ps_desc.type = VAR_8;
 VAR_12->batt_ps_desc.get_property = VAR_11;
 VAR_12->batt_ps_desc.external_power_changed =
      VAR_10;
 VAR_12->batt_ps_desc.use_for_apm = 1;

 return 0;
}
