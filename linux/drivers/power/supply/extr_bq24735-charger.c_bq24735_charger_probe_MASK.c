
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_9__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct power_supply_desc {char* name; int property_is_writeable; int set_property; int get_property; int num_properties; int properties; int type; } ;
struct power_supply_config {struct bq24735* drv_data; scalar_t__ of_node; int num_supplicants; int supplied_to; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_10__ {scalar_t__ of_node; TYPE_9__* platform_data; } ;
struct i2c_client {int irq; TYPE_1__ dev; } ;
struct bq24735 {int charging; int poll_interval; int poll; int charger; int status_gpio; TYPE_9__* pdata; struct power_supply_desc charger_desc; struct i2c_client* client; int lock; } ;
struct TYPE_11__ {int num_supplicants; int supplied_to; scalar_t__ name; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_11 ;
 int FUNC_4 (int ) ;
 int VAR_12 ;
 scalar_t__ FUNC_5 (struct bq24735*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_6 (struct bq24735*) ;
 TYPE_9__* FUNC_7 (struct i2c_client*) ;
 int VAR_17 ;
 int FUNC_8 (struct i2c_client*,int ) ;
 int FUNC_9 (TYPE_1__*,char*,...) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,char*,int *) ;
 int FUNC_12 (TYPE_1__*,char*,int ) ;
 char* FUNC_13 (TYPE_1__*,int ,char*,int ) ;
 struct bq24735* FUNC_14 (TYPE_1__*,int,int ) ;
 int FUNC_15 (TYPE_1__*,struct power_supply_desc*,struct power_supply_config*) ;
 int FUNC_16 (TYPE_1__*,int,int *,int ,int,char*,int ) ;
 int FUNC_17 (struct i2c_client*,struct bq24735*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *,int ) ;

__attribute__((used)) static int FUNC_21(struct i2c_client *VAR_18,
     const struct i2c_device_id *VAR_19)
{
 int VAR_20;
 struct bq24735 *VAR_21;
 struct power_supply_desc *VAR_22;
 struct power_supply_config VAR_23 = {};
 char *VAR_24;

 VAR_21 = FUNC_14(&VAR_18->dev, sizeof(*VAR_21), VAR_6);
 if (!VAR_21)
  return -VAR_5;

 FUNC_19(&VAR_21->lock);
 VAR_21->charging = 1;
 VAR_21->pdata = VAR_18->dev.platform_data;

 if (FUNC_2(VAR_2) && !VAR_21->pdata && VAR_18->dev.of_node)
  VAR_21->pdata = FUNC_7(VAR_18);

 if (!VAR_21->pdata) {
  FUNC_9(&VAR_18->dev, "no platform data provided\n");
  return -VAR_3;
 }

 VAR_24 = (char *)VAR_21->pdata->name;
 if (!VAR_24) {
  VAR_24 = FUNC_13(&VAR_18->dev, VAR_6,
          "bq24735@%s",
          FUNC_10(&VAR_18->dev));
  if (!VAR_24) {
   FUNC_9(&VAR_18->dev, "Failed to alloc device name\n");
   return -VAR_5;
  }
 }

 VAR_21->client = VAR_18;

 VAR_22 = &VAR_21->charger_desc;

 VAR_22->name = VAR_24;
 VAR_22->type = VAR_11;
 VAR_22->properties = VAR_14;
 VAR_22->num_properties = FUNC_0(VAR_14);
 VAR_22->get_property = VAR_12;
 VAR_22->set_property = VAR_16;
 VAR_22->property_is_writeable =
    VAR_15;

 VAR_23.supplied_to = VAR_21->pdata->supplied_to;
 VAR_23.num_supplicants = VAR_21->pdata->num_supplicants;
 VAR_23.of_node = VAR_18->dev.of_node;
 VAR_23.drv_data = VAR_21;

 FUNC_17(VAR_18, VAR_21);

 VAR_21->status_gpio = FUNC_12(&VAR_18->dev,
             "ti,ac-detect",
             VAR_7);
 if (FUNC_3(VAR_21->status_gpio)) {
  VAR_20 = FUNC_4(VAR_21->status_gpio);
  FUNC_9(&VAR_18->dev, "Getting gpio failed: %d\n", VAR_20);
  return VAR_20;
 }

 if (FUNC_5(VAR_21)) {
  VAR_20 = FUNC_8(VAR_18, VAR_1);
  if (VAR_20 < 0) {
   FUNC_9(&VAR_18->dev, "Failed to read manufacturer id : %d\n",
    VAR_20);
   return VAR_20;
  } else if (VAR_20 != 0x0040) {
   FUNC_9(&VAR_18->dev,
    "manufacturer id mismatch. 0x0040 != 0x%04x\n", VAR_20);
   return -VAR_4;
  }

  VAR_20 = FUNC_8(VAR_18, VAR_0);
  if (VAR_20 < 0) {
   FUNC_9(&VAR_18->dev, "Failed to read device id : %d\n", VAR_20);
   return VAR_20;
  } else if (VAR_20 != 0x000B) {
   FUNC_9(&VAR_18->dev,
    "device id mismatch. 0x000b != 0x%04x\n", VAR_20);
   return -VAR_4;
  }

  VAR_20 = FUNC_6(VAR_21);
  if (VAR_20 < 0) {
   FUNC_9(&VAR_18->dev, "Failed to enable charging\n");
   return VAR_20;
  }
 }

 VAR_21->charger = FUNC_15(&VAR_18->dev, VAR_22,
            &VAR_23);
 if (FUNC_3(VAR_21->charger)) {
  VAR_20 = FUNC_4(VAR_21->charger);
  FUNC_9(&VAR_18->dev, "Failed to register power supply: %d\n",
   VAR_20);
  return VAR_20;
 }

 if (VAR_18->irq) {
  VAR_20 = FUNC_16(&VAR_18->dev, VAR_18->irq,
      ((void*)0), VAR_13,
      VAR_10 |
      VAR_9 |
      VAR_8,
      VAR_22->name,
      VAR_21->charger);
  if (VAR_20) {
   FUNC_9(&VAR_18->dev,
    "Unable to register IRQ %d err %d\n",
    VAR_18->irq, VAR_20);
   return VAR_20;
  }
 } else {
  VAR_20 = FUNC_11(&VAR_18->dev, "poll-interval",
            &VAR_21->poll_interval);
  if (VAR_20)
   return 0;
  if (!VAR_21->poll_interval)
   return 0;

  FUNC_1(&VAR_21->poll, VAR_17);
  FUNC_20(&VAR_21->poll,
          FUNC_18(VAR_21->poll_interval));
 }

 return 0;
}
