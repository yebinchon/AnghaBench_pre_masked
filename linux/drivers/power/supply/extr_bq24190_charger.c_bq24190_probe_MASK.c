
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct power_supply_config {struct bq24190_dev_info* drv_data; int num_supplicants; int supplied_to; int of_node; int attr_grp; } ;
struct i2c_device_id {int name; } ;
struct device {int of_node; } ;
struct i2c_client {int irq; struct device dev; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;
struct bq24190_dev_info {int initialized; void* charger; void* battery; int ss_reg; void* edev; int input_current_limit_work; scalar_t__ f_reg; int f_reg_lock; int model_name; struct device* dev; struct i2c_client* client; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (struct bq24190_dev_info*,int ) ;
 int FUNC_6 (struct bq24190_dev_info*) ;
 int FUNC_7 (struct bq24190_dev_info*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_8 (struct bq24190_dev_info*) ;
 int VAR_14 ;
 int FUNC_9 () ;
 int VAR_15 ;
 int FUNC_10 (struct device*,char*,...) ;
 int FUNC_11 (struct device*,char*) ;
 void* FUNC_12 (struct device*,int ) ;
 int FUNC_13 (struct device*,void*) ;
 struct bq24190_dev_info* FUNC_14 (struct device*,int,int ) ;
 int FUNC_15 (struct device*,int ,int *,int ,int,char*,struct bq24190_dev_info*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct i2c_adapter*,int ) ;
 int FUNC_18 (struct i2c_client*,struct bq24190_dev_info*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (struct device*) ;
 int FUNC_21 (struct device*) ;
 int FUNC_22 (struct device*) ;
 int FUNC_23 (struct device*) ;
 int FUNC_24 (struct device*) ;
 int FUNC_25 (struct device*) ;
 int FUNC_26 (struct device*) ;
 int FUNC_27 (struct device*,int) ;
 int FUNC_28 (struct device*) ;
 void* FUNC_29 (struct device*,int *,struct power_supply_config*) ;
 int FUNC_30 (void*) ;
 int FUNC_31 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_32(struct i2c_client *VAR_16,
  const struct i2c_device_id *VAR_17)
{
 struct i2c_adapter *VAR_18 = VAR_16->adapter;
 struct device *VAR_19 = &VAR_16->dev;
 struct power_supply_config VAR_20 = {}, VAR_21 = {};
 struct bq24190_dev_info *VAR_22;
 int VAR_23;

 if (!FUNC_17(VAR_18, VAR_5)) {
  FUNC_10(VAR_19, "No support for SMBUS_BYTE_DATA\n");
  return -VAR_2;
 }

 VAR_22 = FUNC_14(VAR_19, sizeof(*VAR_22), VAR_4);
 if (!VAR_22) {
  FUNC_10(VAR_19, "Can't alloc bdi struct\n");
  return -VAR_3;
 }

 VAR_22->client = VAR_16;
 VAR_22->dev = VAR_19;
 FUNC_31(VAR_22->model_name, VAR_17->name, VAR_6);
 FUNC_19(&VAR_22->f_reg_lock);
 VAR_22->f_reg = 0;
 VAR_22->ss_reg = VAR_0;
 FUNC_1(&VAR_22->input_current_limit_work,
     VAR_12);

 FUNC_18(VAR_16, VAR_22);

 if (VAR_16->irq <= 0) {
  FUNC_10(VAR_19, "Can't get irq info\n");
  return -VAR_1;
 }

 VAR_22->edev = FUNC_12(VAR_19, VAR_15);
 if (FUNC_2(VAR_22->edev))
  return FUNC_4(VAR_22->edev);

 VAR_23 = FUNC_13(VAR_19, VAR_22->edev);
 if (VAR_23 < 0)
  return VAR_23;

 FUNC_22(VAR_19);
 FUNC_28(VAR_19);
 FUNC_27(VAR_19, 600);
 VAR_23 = FUNC_23(VAR_19);
 if (VAR_23 < 0) {
  FUNC_10(VAR_19, "pm_runtime_get failed: %i\n", VAR_23);
  goto out_pmrt;
 }






 VAR_20.drv_data = VAR_22;
 VAR_20.of_node = VAR_19->of_node;
 VAR_20.supplied_to = VAR_11;
 VAR_20.num_supplicants = FUNC_0(VAR_11),
 VAR_22->charger = FUNC_29(VAR_19, &VAR_10,
      &VAR_20);
 if (FUNC_2(VAR_22->charger)) {
  FUNC_10(VAR_19, "Can't register charger\n");
  VAR_23 = FUNC_4(VAR_22->charger);
  goto out_pmrt;
 }



 if (!FUNC_11(VAR_19, "omit-battery-class")) {
  VAR_21.drv_data = VAR_22;
  VAR_22->battery = FUNC_29(VAR_19, &VAR_9,
           &VAR_21);
  if (FUNC_2(VAR_22->battery)) {
   FUNC_10(VAR_19, "Can't register battery\n");
   VAR_23 = FUNC_4(VAR_22->battery);
   goto out_charger;
  }
 }

 VAR_23 = FUNC_6(VAR_22);
 if (VAR_23 < 0) {
  FUNC_10(VAR_19, "Can't get devicetree config\n");
  goto out_charger;
 }

 VAR_23 = FUNC_7(VAR_22);
 if (VAR_23 < 0) {
  FUNC_10(VAR_19, "Hardware init failed\n");
  goto out_charger;
 }

 VAR_23 = FUNC_5(VAR_22, VAR_22->ss_reg);
 if (VAR_23 < 0)
  goto out_charger;

 VAR_22->initialized = 1;

 VAR_23 = FUNC_15(VAR_19, VAR_16->irq, ((void*)0),
   VAR_13,
   VAR_8 | VAR_7,
   "bq24190-charger", VAR_22);
 if (VAR_23 < 0) {
  FUNC_10(VAR_19, "Can't set up irq handler\n");
  goto out_charger;
 }

 VAR_23 = FUNC_8(VAR_22);
 if (VAR_23 < 0)
  goto out_charger;

 FUNC_16(VAR_16->irq);

 FUNC_24(VAR_19);
 FUNC_25(VAR_19);

 return 0;

out_charger:
 if (!FUNC_3(VAR_22->battery))
  FUNC_30(VAR_22->battery);
 FUNC_30(VAR_22->charger);

out_pmrt:
 FUNC_26(VAR_19);
 FUNC_21(VAR_19);
 FUNC_20(VAR_19);
 return VAR_23;
}
