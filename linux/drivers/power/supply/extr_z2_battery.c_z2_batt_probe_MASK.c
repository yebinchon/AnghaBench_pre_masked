
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct z2_charger* properties; } ;
struct z2_charger {TYPE_2__ batt_ps_desc; int bat_work; int batt_ps; int work_lock; struct i2c_client* client; struct z2_battery_info* info; int bat_status; } ;
struct z2_battery_info {scalar_t__ charge_gpio; } ;
struct power_supply_config {struct z2_charger* drv_data; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_4__ {struct z2_battery_info* platform_data; } ;
struct i2c_client {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (int ,struct z2_charger*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__,char*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (struct i2c_client*,struct z2_charger*) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (struct z2_charger*) ;
 struct z2_charger* FUNC_13 (int,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (TYPE_1__*,TYPE_2__*,struct power_supply_config*) ;
 int FUNC_16 (int ,int ,int ,char*,struct z2_charger*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct z2_charger*,int) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_19(struct i2c_client *VAR_7,
    const struct i2c_device_id *VAR_8)
{
 int VAR_9 = 0;
 int VAR_10 = 1;
 struct z2_charger *VAR_11;
 struct z2_battery_info *VAR_12 = VAR_7->dev.platform_data;
 struct power_supply_config VAR_13 = {};

 if (VAR_12 == ((void*)0)) {
  FUNC_3(&VAR_7->dev,
   "Please set platform device platform_data"
   " to a valid z2_battery_info pointer!\n");
  return -VAR_0;
 }

 VAR_11 = FUNC_13(sizeof(*VAR_11), VAR_2);
 if (VAR_11 == ((void*)0))
  return -VAR_1;

 VAR_11->bat_status = VAR_4;
 VAR_11->info = VAR_12;
 VAR_11->client = VAR_7;
 FUNC_10(VAR_7, VAR_11);
 VAR_13.drv_data = VAR_11;

 FUNC_14(&VAR_11->work_lock);

 if (VAR_12->charge_gpio >= 0 && FUNC_7(VAR_12->charge_gpio)) {
  VAR_9 = FUNC_8(VAR_12->charge_gpio, "BATT CHRG");
  if (VAR_9)
   goto err;

  VAR_9 = FUNC_5(VAR_12->charge_gpio);
  if (VAR_9)
   goto err2;

  FUNC_11(FUNC_9(VAR_12->charge_gpio),
     VAR_3);
  VAR_9 = FUNC_16(FUNC_9(VAR_12->charge_gpio),
    VAR_6, 0,
    "AC Detect", VAR_11);
  if (VAR_9)
   goto err3;
 }

 VAR_9 = FUNC_18(VAR_11, VAR_10);
 if (VAR_9)
  goto err3;

 FUNC_0(&VAR_11->bat_work, VAR_5);

 VAR_11->batt_ps = FUNC_15(&VAR_7->dev,
       &VAR_11->batt_ps_desc,
       &VAR_13);
 if (FUNC_1(VAR_11->batt_ps)) {
  VAR_9 = FUNC_2(VAR_11->batt_ps);
  goto err4;
 }

 FUNC_17(&VAR_11->bat_work);

 return 0;

err4:
 FUNC_12(VAR_11->batt_ps_desc.properties);
err3:
 if (VAR_12->charge_gpio >= 0 && FUNC_7(VAR_12->charge_gpio))
  FUNC_4(FUNC_9(VAR_12->charge_gpio), VAR_11);
err2:
 if (VAR_12->charge_gpio >= 0 && FUNC_7(VAR_12->charge_gpio))
  FUNC_6(VAR_12->charge_gpio);
err:
 FUNC_12(VAR_11);
 return VAR_9;
}
