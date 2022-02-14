
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct regulator_desc {int name; int id; } ;
struct regulator_config {int of_node; int init_data; struct regulator_dev* regmap; struct act8865* driver_data; struct device* dev; } ;
struct regmap_config {int dummy; } ;
struct of_device_id {scalar_t__ data; } ;
struct i2c_device_id {unsigned long driver_data; } ;
struct device {scalar_t__ of_node; } ;
struct i2c_client {struct device dev; } ;
struct act8865_regulator_data {int of_node; int init_data; } ;
struct act8865_platform_data {int dummy; } ;
struct act8865 {int off_reg; int off_mask; struct regulator_dev* regmap; } ;




 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct regulator_desc*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (struct device*,struct regulator_dev*) ;
 struct regmap_config VAR_10 ;
 struct regulator_desc* VAR_11 ;
 struct regulator_desc* VAR_12 ;
 struct regulator_desc* VAR_13 ;
 int VAR_14 ;
 struct act8865_regulator_data* FUNC_4 (int ,struct act8865_platform_data*) ;
 struct i2c_client* VAR_15 ;
 scalar_t__ VAR_16 ;
 struct regmap_config VAR_17 ;
 struct regulator_desc* VAR_18 ;
 int FUNC_5 (struct device*,char*,...) ;
 struct act8865_platform_data* FUNC_6 (struct device*) ;
 struct act8865* FUNC_7 (struct device*,int,int ) ;
 struct regulator_dev* FUNC_8 (struct i2c_client*,struct regmap_config const*) ;
 struct regulator_dev* FUNC_9 (struct device*,struct regulator_desc const*,struct regulator_config*) ;
 int FUNC_10 (struct i2c_client*,struct act8865*) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__,char*,int *) ;
 struct of_device_id* FUNC_13 (int ,struct device*) ;
 int FUNC_14 (int ) ;
 scalar_t__ VAR_19 ;
 int FUNC_15 (struct regulator_dev*,int ,int) ;

__attribute__((used)) static int FUNC_16(struct i2c_client *VAR_20,
         const struct i2c_device_id *VAR_21)
{
 const struct regulator_desc *VAR_22;
 struct act8865_platform_data *VAR_23 = ((void*)0);
 struct device *VAR_24 = &VAR_20->dev;
 int VAR_25, VAR_26, VAR_27;
 struct act8865 *VAR_28;
 const struct regmap_config *VAR_29;
 unsigned long VAR_30;
 int VAR_31, VAR_32;
 int VAR_33 = 0;

 if (VAR_24->of_node) {
  const struct of_device_id *VAR_34;

  VAR_34 = FUNC_13(FUNC_14(VAR_14), VAR_24);
  if (!VAR_34)
   return -VAR_6;

  VAR_30 = (unsigned long) VAR_34->data;

  VAR_33 = !!FUNC_12(VAR_24->of_node,
         "active-semi,vsel-high",
         ((void*)0));
 } else {
  VAR_30 = VAR_21->driver_data;
  VAR_23 = FUNC_6(VAR_24);
 }

 switch (VAR_30) {
 case 130:
  VAR_22 = VAR_11;
  VAR_27 = FUNC_0(VAR_11);
  VAR_29 = &VAR_10;
  VAR_31 = -1;
  VAR_32 = -1;
  break;
 case 129:
  VAR_22 = VAR_12;
  VAR_27 = FUNC_0(VAR_12);
  VAR_29 = &VAR_17;
  VAR_31 = VAR_0;
  VAR_32 = VAR_1;
  break;
 case 128:
  if (VAR_33) {
   VAR_22 = VAR_13;
   VAR_27 = FUNC_0(VAR_13);
  } else {
   VAR_22 = VAR_18;
   VAR_27 = FUNC_0(VAR_18);
  }
  VAR_29 = &VAR_17;
  VAR_31 = VAR_3;
  VAR_32 = VAR_2;
  break;
 default:
  FUNC_5(VAR_24, "invalid device id %lu\n", VAR_30);
  return -VAR_5;
 }

 VAR_28 = FUNC_7(VAR_24, sizeof(struct act8865), VAR_9);
 if (!VAR_28)
  return -VAR_7;

 VAR_28->regmap = FUNC_8(VAR_20, VAR_29);
 if (FUNC_1(VAR_28->regmap)) {
  VAR_26 = FUNC_2(VAR_28->regmap);
  FUNC_5(VAR_24, "Failed to allocate register map: %d\n", VAR_26);
  return VAR_26;
 }

 if (FUNC_11(VAR_24->of_node)) {
  if (!VAR_19 && (VAR_31 > 0)) {
   VAR_15 = VAR_20;
   VAR_28->off_reg = VAR_31;
   VAR_28->off_mask = VAR_32;
   VAR_19 = VAR_16;
  } else {
   FUNC_5(VAR_24, "Failed to set poweroff capability, already defined\n");
  }
 }


 for (VAR_25 = 0; VAR_25 < VAR_27; VAR_25++) {
  const struct regulator_desc *VAR_35 = &VAR_22[VAR_25];
  struct regulator_config VAR_36 = { };
  struct regulator_dev *VAR_37;

  VAR_36.dev = VAR_24;
  VAR_36.driver_data = VAR_28;
  VAR_36.regmap = VAR_28->regmap;

  if (VAR_23) {
   struct act8865_regulator_data *VAR_38;

   VAR_38 = FUNC_4(VAR_35->id, VAR_23);
   if (VAR_38) {
    VAR_36.init_data = VAR_38->init_data;
    VAR_36.of_node = VAR_38->of_node;
   }
  }

  VAR_37 = FUNC_9(VAR_24, VAR_35, &VAR_36);
  if (FUNC_1(VAR_37)) {
   FUNC_5(VAR_24, "failed to register %s\n", VAR_35->name);
   return FUNC_2(VAR_37);
  }
 }

 if (VAR_30 == 130) {
  VAR_26 = FUNC_3(VAR_24, VAR_28->regmap);
  if (VAR_26 < 0) {
   if (VAR_26 != -VAR_8)
    FUNC_5(VAR_24, "Failed to probe charger");
   return VAR_26;
  }
 }

 FUNC_10(VAR_20, VAR_28);


 return VAR_30 != 128 ? 0 : FUNC_15(VAR_28->regmap,
        VAR_4, 0xef);
}
