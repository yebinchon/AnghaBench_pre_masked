
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct regulator_config {scalar_t__ of_node; struct regulator_dev* regmap; struct da9210* driver_data; int * init_data; struct device* dev; } ;
struct of_device_id {int dummy; } ;
struct i2c_device_id {int dummy; } ;
struct device {scalar_t__ of_node; } ;
struct i2c_client {int irq; struct device dev; } ;
struct da9210_pdata {int da9210_constraints; } ;
struct da9210 {struct regulator_dev* regmap; struct regulator_dev* rdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (struct device*,char*,...) ;
 struct da9210_pdata* FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,char*) ;
 struct da9210* FUNC_5 (struct device*,int,int ) ;
 struct regulator_dev* FUNC_6 (struct i2c_client*,int *) ;
 struct regulator_dev* FUNC_7 (struct device*,int *,struct regulator_config*) ;
 int FUNC_8 (struct device*,int,int *,int ,int,char*,struct da9210*) ;
 int FUNC_9 (struct i2c_client*,struct da9210*) ;
 int * FUNC_10 (struct device*,scalar_t__,int *) ;
 struct of_device_id* FUNC_11 (int ,struct device*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct regulator_dev*,int ,int,int ) ;
 int FUNC_14 (struct regulator_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_15(struct i2c_client *VAR_17,
       const struct i2c_device_id *VAR_18)
{
 struct da9210 *VAR_19;
 struct device *VAR_20 = &VAR_17->dev;
 struct da9210_pdata *VAR_21 = FUNC_3(VAR_20);
 struct regulator_dev *VAR_22 = ((void*)0);
 struct regulator_config VAR_23 = { };
 int VAR_24;
 const struct of_device_id *VAR_25;

 if (VAR_17->dev.of_node && !VAR_21) {
  VAR_25 = FUNC_11(FUNC_12(VAR_13),
      &VAR_17->dev);
  if (!VAR_25) {
   FUNC_2(&VAR_17->dev, "Error: No device match found\n");
   return -VAR_7;
  }
 }

 VAR_19 = FUNC_5(&VAR_17->dev, sizeof(struct da9210), VAR_9);
 if (!VAR_19)
  return -VAR_8;

 VAR_19->regmap = FUNC_6(VAR_17, &VAR_16);
 if (FUNC_0(VAR_19->regmap)) {
  VAR_24 = FUNC_1(VAR_19->regmap);
  FUNC_2(&VAR_17->dev, "Failed to allocate register map: %d\n",
   VAR_24);
  return VAR_24;
 }

 VAR_23.dev = &VAR_17->dev;
 VAR_23.init_data = VAR_21 ? &VAR_21->da9210_constraints :
  FUNC_10(VAR_20, VAR_20->of_node, &VAR_15);
 VAR_23.driver_data = VAR_19;
 VAR_23.regmap = VAR_19->regmap;
 VAR_23.of_node = VAR_20->of_node;


 VAR_24 = FUNC_14(VAR_19->regmap, VAR_5, ~0);
 if (!VAR_24)
  VAR_24 = FUNC_14(VAR_19->regmap, VAR_6, ~0);
 if (VAR_24) {
  FUNC_2(&VAR_17->dev, "Failed to write to mask reg: %d\n", VAR_24);
  return VAR_24;
 }

 VAR_22 = FUNC_7(&VAR_17->dev, &VAR_15, &VAR_23);
 if (FUNC_0(VAR_22)) {
  FUNC_2(&VAR_17->dev, "Failed to register DA9210 regulator\n");
  return FUNC_1(VAR_22);
 }

 VAR_19->rdev = VAR_22;
 if (VAR_17->irq) {
  VAR_24 = FUNC_8(&VAR_17->dev, VAR_17->irq, ((void*)0),
        VAR_14,
        VAR_12 |
        VAR_10 | VAR_11,
        "da9210", VAR_19);
  if (VAR_24) {
   FUNC_2(&VAR_17->dev, "Failed to request IRQ%u: %d\n",
    VAR_17->irq, VAR_24);
   return VAR_24;
  }

  VAR_24 = FUNC_13(VAR_19->regmap, VAR_6,
      VAR_1 | VAR_0 |
      VAR_3 |
      VAR_2 | VAR_4, 0);
  if (VAR_24 < 0) {
   FUNC_2(&VAR_17->dev, "Failed to update mask reg: %d\n",
    VAR_24);
   return VAR_24;
  }
 } else {
  FUNC_4(&VAR_17->dev, "No IRQ configured\n");
 }

 FUNC_9(VAR_17, VAR_19);

 return 0;
}
