
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


union power_supply_propval {int intval; } ;
struct power_supply {int dummy; } ;
struct i2c_device_id {int driver_data; int name; } ;
struct TYPE_13__ {TYPE_1__* driver; struct bq2415x_platform_data* platform_data; struct device_node* of_node; } ;
struct i2c_client {TYPE_4__ dev; } ;
struct device_node {int dummy; } ;
struct bq2415x_platform_data {int dummy; } ;
struct TYPE_12__ {scalar_t__ notify_device; int resistor_sense; int termination_current; int charge_current; int battery_regulation_voltage; int weak_battery_voltage; int current_limit; } ;
struct TYPE_11__ {scalar_t__ notifier_call; } ;
struct bq2415x_device {int id; char* name; int automode; scalar_t__ notify_node; TYPE_4__* dev; int work; void* reported_mode; TYPE_3__ init_data; TYPE_2__ nb; scalar_t__ autotimer; void* mode; int chip; } ;
struct acpi_device_id {int driver_data; int id; } ;
struct TYPE_10__ {int acpi_match_table; } ;


 scalar_t__ FUNC_0 (TYPE_4__*) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (struct power_supply*) ;
 int VAR_4 ;
 struct acpi_device_id* FUNC_3 (int ,TYPE_4__*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (struct bq2415x_device*) ;
 int FUNC_5 (struct bq2415x_device*) ;
 int FUNC_6 (struct bq2415x_device*) ;
 int FUNC_7 (struct bq2415x_device*,int) ;
 int FUNC_8 (struct bq2415x_device*) ;
 int FUNC_9 (struct bq2415x_device*,void*) ;
 int VAR_8 ;
 int FUNC_10 (struct bq2415x_device*,int ) ;
 int FUNC_11 (TYPE_4__*,char*,...) ;
 int FUNC_12 (TYPE_4__*,char*) ;
 int FUNC_13 (TYPE_4__*,char*,int *) ;
 struct bq2415x_device* FUNC_14 (TYPE_4__*,int,int ) ;
 int FUNC_15 (struct i2c_client*,struct bq2415x_device*) ;
 int FUNC_16 (int *,struct i2c_client*,int ,int ,int ) ;
 int FUNC_17 (int *,int) ;
 char* FUNC_18 (int ,char*,int ,int) ;
 int FUNC_19 (char*) ;
 int FUNC_20 (TYPE_3__*,struct bq2415x_platform_data*,int) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (scalar_t__) ;
 scalar_t__ FUNC_24 (struct device_node*,char*,int ) ;
 struct power_supply* FUNC_25 (scalar_t__) ;
 struct power_supply* FUNC_26 (struct device_node*,char*) ;
 int FUNC_27 (struct power_supply*,int ,union power_supply_propval*) ;
 int FUNC_28 (struct power_supply*) ;
 int FUNC_29 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_30(struct i2c_client *VAR_9,
    const struct i2c_device_id *VAR_10)
{
 int VAR_11;
 int VAR_12;
 char *VAR_13 = ((void*)0);
 struct bq2415x_device *VAR_14;
 struct device_node *VAR_15 = VAR_9->dev.of_node;
 struct bq2415x_platform_data *VAR_16 = VAR_9->dev.platform_data;
 const struct acpi_device_id *VAR_17 = ((void*)0);
 struct power_supply *VAR_18 = ((void*)0);
 union power_supply_propval VAR_19;

 if (!VAR_15 && !VAR_16 && !FUNC_0(&VAR_9->dev)) {
  FUNC_11(&VAR_9->dev, "Neither devicetree, nor platform data, nor ACPI support\n");
  return -VAR_1;
 }


 FUNC_21(&VAR_6);
 VAR_12 = FUNC_16(&VAR_5, VAR_9, 0, 0, VAR_3);
 FUNC_22(&VAR_6);
 if (VAR_12 < 0)
  return VAR_12;

 if (VAR_10) {
  VAR_13 = FUNC_18(VAR_3, "%s-%d", VAR_10->name, VAR_12);
 } else if (FUNC_0(&VAR_9->dev)) {
  VAR_17 =
   FUNC_3(VAR_9->dev.driver->acpi_match_table,
       &VAR_9->dev);
  if (!VAR_17) {
   FUNC_11(&VAR_9->dev, "failed to match device name\n");
   VAR_11 = -VAR_1;
   goto error_1;
  }
  VAR_13 = FUNC_18(VAR_3, "%s-%d", VAR_17->id, VAR_12);
 }
 if (!VAR_13) {
  FUNC_11(&VAR_9->dev, "failed to allocate device name\n");
  VAR_11 = -VAR_2;
  goto error_1;
 }

 VAR_14 = FUNC_14(&VAR_9->dev, sizeof(*VAR_14), VAR_3);
 if (!VAR_14) {
  VAR_11 = -VAR_2;
  goto error_2;
 }

 FUNC_15(VAR_9, VAR_14);

 VAR_14->id = VAR_12;
 VAR_14->dev = &VAR_9->dev;
 if (VAR_10)
  VAR_14->chip = VAR_10->driver_data;
 else if (FUNC_0(VAR_14->dev))
  VAR_14->chip = VAR_17->driver_data;
 VAR_14->name = VAR_13;
 VAR_14->mode = VAR_0;
 VAR_14->reported_mode = VAR_0;
 VAR_14->autotimer = 0;
 VAR_14->automode = 0;

 if (VAR_15 || FUNC_0(VAR_14->dev)) {
  VAR_11 = FUNC_13(VAR_14->dev,
            "ti,current-limit",
            &VAR_14->init_data.current_limit);
  if (VAR_11)
   goto error_2;
  VAR_11 = FUNC_13(VAR_14->dev,
     "ti,weak-battery-voltage",
     &VAR_14->init_data.weak_battery_voltage);
  if (VAR_11)
   goto error_2;
  VAR_11 = FUNC_13(VAR_14->dev,
    "ti,battery-regulation-voltage",
    &VAR_14->init_data.battery_regulation_voltage);
  if (VAR_11)
   goto error_2;
  VAR_11 = FUNC_13(VAR_14->dev,
            "ti,charge-current",
            &VAR_14->init_data.charge_current);
  if (VAR_11)
   goto error_2;
  VAR_11 = FUNC_13(VAR_14->dev,
    "ti,termination-current",
    &VAR_14->init_data.termination_current);
  if (VAR_11)
   goto error_2;
  VAR_11 = FUNC_13(VAR_14->dev,
            "ti,resistor-sense",
            &VAR_14->init_data.resistor_sense);
  if (VAR_11)
   goto error_2;
  if (VAR_15)
   VAR_14->notify_node = FUNC_24(VAR_15,
      "ti,usb-charger-detection", 0);
 } else {
  FUNC_20(&VAR_14->init_data, VAR_16, sizeof(VAR_14->init_data));
 }

 FUNC_6(VAR_14);

 VAR_11 = FUNC_5(VAR_14);
 if (VAR_11) {
  FUNC_11(VAR_14->dev, "failed to register power supply: %d\n", VAR_11);
  goto error_2;
 }

 VAR_11 = FUNC_8(VAR_14);
 if (VAR_11) {
  FUNC_11(VAR_14->dev, "failed to set default values: %d\n", VAR_11);
  goto error_3;
 }

 if (VAR_14->notify_node || VAR_14->init_data.notify_device) {
  VAR_14->nb.notifier_call = VAR_7;
  VAR_11 = FUNC_29(&VAR_14->nb);
  if (VAR_11) {
   FUNC_11(VAR_14->dev, "failed to reg notifier: %d\n", VAR_11);
   goto error_3;
  }

  VAR_14->automode = 1;
  FUNC_12(VAR_14->dev, "automode supported, waiting for events\n");
 } else {
  VAR_14->automode = -1;
  FUNC_12(VAR_14->dev, "automode not supported\n");
 }


 if (VAR_14->nb.notifier_call) {
  if (VAR_15) {
   VAR_18 = FUNC_26(VAR_15,
      "ti,usb-charger-detection");
   if (FUNC_2(VAR_18))
    VAR_18 = ((void*)0);
  } else if (VAR_14->init_data.notify_device) {
   VAR_18 = FUNC_25(
      VAR_14->init_data.notify_device);
  }
 }
 if (VAR_18) {
  VAR_11 = FUNC_27(VAR_18,
     VAR_4, &VAR_19);
  FUNC_28(VAR_18);

  if (VAR_11 == 0) {
   FUNC_10(VAR_14, VAR_19.intval);
   FUNC_9(VAR_14, VAR_14->reported_mode);
  }
 }

 FUNC_1(&VAR_14->work, VAR_8);
 FUNC_7(VAR_14, 1);

 FUNC_12(VAR_14->dev, "driver registered\n");
 return 0;

error_3:
 FUNC_4(VAR_14);
error_2:
 if (VAR_14)
  FUNC_23(VAR_14->notify_node);
 FUNC_19(VAR_13);
error_1:
 FUNC_21(&VAR_6);
 FUNC_17(&VAR_5, VAR_12);
 FUNC_22(&VAR_6);

 return VAR_11;
}
