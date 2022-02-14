
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union power_supply_propval {int intval; } ;
typedef int u8 ;
struct power_supply {int dummy; } ;
struct max8998_battery_data {TYPE_1__* iodev; } ;
struct i2c_client {int dummy; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;
struct TYPE_2__ {struct i2c_client* i2c; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct i2c_client*,int ,int*) ;
 struct max8998_battery_data* FUNC_1 (struct power_supply*) ;

__attribute__((used)) static int FUNC_2(struct power_supply *VAR_2,
  enum power_supply_property VAR_3,
  union power_supply_propval *VAR_4)
{
 struct max8998_battery_data *VAR_5 = FUNC_1(VAR_2);
 struct i2c_client *VAR_6 = VAR_5->iodev->i2c;
 int VAR_7;
 u8 VAR_8;

 switch (VAR_3) {
 case 128:
  VAR_7 = FUNC_0(VAR_6, VAR_1, &VAR_8);
  if (VAR_7)
   return VAR_7;
  if (VAR_8 & (1 << 4))
   VAR_4->intval = 0;
  else
   VAR_4->intval = 1;
  break;
 case 129:
  VAR_7 = FUNC_0(VAR_6, VAR_1, &VAR_8);
  if (VAR_7)
   return VAR_7;
  if (VAR_8 & (1 << 3))
   VAR_4->intval = 0;
  else
   VAR_4->intval = 1;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
