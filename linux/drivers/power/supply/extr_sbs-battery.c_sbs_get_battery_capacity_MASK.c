
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union power_supply_propval {scalar_t__ intval; } ;
struct i2c_client {int dummy; } ;
typedef scalar_t__ s32 ;
typedef enum sbs_battery_mode { ____Placeholder_sbs_battery_mode } sbs_battery_mode ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;
struct TYPE_2__ {int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_1 (struct i2c_client*,int ) ;
 scalar_t__ FUNC_2 (struct i2c_client*,int) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_3,
 int VAR_4, enum power_supply_property VAR_5,
 union power_supply_propval *VAR_6)
{
 s32 VAR_7;
 enum sbs_battery_mode VAR_8 = VAR_1;

 if (FUNC_0(VAR_5))
  VAR_8 = VAR_0;

 VAR_8 = FUNC_2(VAR_3, VAR_8);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_7 = FUNC_1(VAR_3, VAR_2[VAR_4].addr);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_6->intval = VAR_7;

 VAR_7 = FUNC_2(VAR_3, VAR_8);
 if (VAR_7 < 0)
  return VAR_7;

 return 0;
}
