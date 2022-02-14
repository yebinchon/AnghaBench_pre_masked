
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct tps51632_regulator_platform_data {scalar_t__ base_voltage_uV; scalar_t__ max_voltage_uV; int reg_init_data; scalar_t__ enable_pwm_dvfs; } ;
struct TYPE_10__ {int vsel_mask; int vsel_reg; int owner; int type; int * ops; scalar_t__ n_voltages; int linear_min_sel; int uV_step; scalar_t__ min_uV; int ramp_delay; scalar_t__ id; int name; } ;
struct tps51632_chip {struct regulator_dev* rdev; TYPE_1__* dev; TYPE_3__ desc; struct regulator_dev* regmap; } ;
struct regulator_dev {int dummy; } ;
struct regulator_config {scalar_t__ of_node; struct regulator_dev* regmap; struct tps51632_chip* driver_data; int init_data; TYPE_1__* dev; } ;
struct of_device_id {int dummy; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_9__ {scalar_t__ of_node; } ;
struct i2c_client {TYPE_1__ dev; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (TYPE_1__*,char*,...) ;
 struct tps51632_regulator_platform_data* FUNC_3 (TYPE_1__*) ;
 struct tps51632_chip* FUNC_4 (TYPE_1__*,int,int ) ;
 struct regulator_dev* FUNC_5 (struct i2c_client*,int *) ;
 struct regulator_dev* FUNC_6 (TYPE_1__*,TYPE_3__*,struct regulator_config*) ;
 int FUNC_7 (struct i2c_client*,struct tps51632_chip*) ;
 struct tps51632_regulator_platform_data* FUNC_8 (TYPE_1__*,TYPE_3__*) ;
 struct of_device_id* FUNC_9 (int ,TYPE_1__*) ;
 int FUNC_10 (int ) ;
 int VAR_15 ;
 int FUNC_11 (struct tps51632_chip*,struct tps51632_regulator_platform_data*) ;
 int VAR_16 ;
 int VAR_17 ;

__attribute__((used)) static int FUNC_12(struct i2c_client *VAR_18,
    const struct i2c_device_id *VAR_19)
{
 struct tps51632_regulator_platform_data *VAR_20;
 struct regulator_dev *VAR_21;
 struct tps51632_chip *VAR_22;
 int VAR_23;
 struct regulator_config VAR_24 = { };

 if (VAR_18->dev.of_node) {
  const struct of_device_id *VAR_25;
  VAR_25 = FUNC_9(FUNC_10(VAR_16),
    &VAR_18->dev);
  if (!VAR_25) {
   FUNC_2(&VAR_18->dev, "Error: No device match found\n");
   return -VAR_1;
  }
 }

 VAR_22 = FUNC_4(&VAR_18->dev, sizeof(*VAR_22), VAR_3);
 if (!VAR_22)
  return -VAR_2;

 VAR_22->dev = &VAR_18->dev;
 VAR_22->desc.name = VAR_18->name;
 VAR_22->desc.id = 0;
 VAR_22->desc.ramp_delay = VAR_6;
 VAR_22->desc.min_uV = VAR_9;
 VAR_22->desc.uV_step = VAR_13;
 VAR_22->desc.linear_min_sel = VAR_10;
 VAR_22->desc.n_voltages = VAR_8 + 1;
 VAR_22->desc.ops = &VAR_15;
 VAR_22->desc.type = VAR_4;
 VAR_22->desc.owner = VAR_5;

 VAR_20 = FUNC_3(&VAR_18->dev);
 if (!VAR_20 && VAR_18->dev.of_node)
  VAR_20 = FUNC_8(&VAR_18->dev, &VAR_22->desc);
 if (!VAR_20) {
  FUNC_2(&VAR_18->dev, "No Platform data\n");
  return -VAR_0;
 }

 if (VAR_20->enable_pwm_dvfs) {
  if ((VAR_20->base_voltage_uV < VAR_9) ||
      (VAR_20->base_voltage_uV > VAR_7)) {
   FUNC_2(&VAR_18->dev, "Invalid base_voltage_uV setting\n");
   return -VAR_0;
  }

  if ((VAR_20->max_voltage_uV) &&
      ((VAR_20->max_voltage_uV < VAR_9) ||
       (VAR_20->max_voltage_uV > VAR_7))) {
   FUNC_2(&VAR_18->dev, "Invalid max_voltage_uV setting\n");
   return -VAR_0;
  }
 }

 if (VAR_20->enable_pwm_dvfs)
  VAR_22->desc.vsel_reg = VAR_11;
 else
  VAR_22->desc.vsel_reg = VAR_12;
 VAR_22->desc.vsel_mask = VAR_14;

 VAR_22->regmap = FUNC_5(VAR_18, &VAR_17);
 if (FUNC_0(VAR_22->regmap)) {
  VAR_23 = FUNC_1(VAR_22->regmap);
  FUNC_2(&VAR_18->dev, "regmap init failed, err %d\n", VAR_23);
  return VAR_23;
 }
 FUNC_7(VAR_18, VAR_22);

 VAR_23 = FUNC_11(VAR_22, VAR_20);
 if (VAR_23 < 0) {
  FUNC_2(VAR_22->dev, "Init failed, err = %d\n", VAR_23);
  return VAR_23;
 }


 VAR_24.dev = &VAR_18->dev;
 VAR_24.init_data = VAR_20->reg_init_data;
 VAR_24.driver_data = VAR_22;
 VAR_24.regmap = VAR_22->regmap;
 VAR_24.of_node = VAR_18->dev.of_node;

 VAR_21 = FUNC_6(&VAR_18->dev, &VAR_22->desc, &VAR_24);
 if (FUNC_0(VAR_21)) {
  FUNC_2(VAR_22->dev, "regulator register failed\n");
  return FUNC_1(VAR_21);
 }

 VAR_22->rdev = VAR_21;
 return 0;
}
