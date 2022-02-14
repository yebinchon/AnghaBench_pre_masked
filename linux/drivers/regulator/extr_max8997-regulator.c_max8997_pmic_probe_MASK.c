
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u8 ;
struct voltage_map_desc {int max; int min; int step; } ;
struct regulator_dev {int dummy; } ;
struct regulator_config {int of_node; struct max8997_data* driver_data; int init_data; TYPE_5__* dev; } ;
struct TYPE_15__ {int parent; } ;
struct platform_device {TYPE_5__ dev; } ;
struct max8997_platform_data {int num_regulators; int buck125_default_idx; TYPE_1__* regulators; scalar_t__ buck5_gpiodvs; scalar_t__ buck2_gpiodvs; scalar_t__ buck1_gpiodvs; int * buck125_gpios; scalar_t__* buck5_voltage; scalar_t__* buck2_voltage; scalar_t__* buck1_voltage; int ignore_gpiodvs_side_effect; } ;
struct max8997_dev {struct i2c_client* i2c; TYPE_2__* dev; struct max8997_platform_data* pdata; } ;
struct max8997_data {int num_regulators; int buck125_gpioindex; int* buck1_vol; int* buck2_vol; int* buck5_vol; int ramp_delay; TYPE_5__* dev; int ignore_gpiodvs_side_effect; int buck125_gpios; scalar_t__ buck5_gpiodvs; scalar_t__ buck2_gpiodvs; scalar_t__ buck1_gpiodvs; struct max8997_dev* iodev; } ;
struct i2c_client {int dummy; } ;
struct TYPE_14__ {scalar_t__ step; } ;
struct TYPE_13__ {int n_voltages; int volt_table; } ;
struct TYPE_12__ {scalar_t__ of_node; } ;
struct TYPE_11__ {int id; int reg_node; int initdata; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct regulator_dev*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct regulator_dev*) ;
 TYPE_4__ VAR_14 ;
 int FUNC_3 (TYPE_5__*,char*,...) ;
 struct max8997_dev* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_5__*,int ,char*) ;
 struct max8997_data* FUNC_6 (TYPE_5__*,int,int ) ;
 struct regulator_dev* FUNC_7 (TYPE_5__*,TYPE_3__*,struct regulator_config*) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_4__*,scalar_t__,scalar_t__) ;
 int FUNC_11 (struct platform_device*,struct max8997_platform_data*) ;
 int FUNC_12 (struct i2c_client*,scalar_t__,int,int) ;
 int FUNC_13 (struct i2c_client*,int ,int) ;
 int FUNC_14 (int ,int *,int) ;
 int FUNC_15 (struct platform_device*,struct max8997_data*) ;
 struct voltage_map_desc** VAR_15 ;
 TYPE_3__* VAR_16 ;
 int VAR_17 ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_18)
{
 struct max8997_dev *VAR_19 = FUNC_4(VAR_18->dev.parent);
 struct max8997_platform_data *VAR_20 = VAR_19->pdata;
 struct regulator_config VAR_21 = { };
 struct regulator_dev *VAR_22;
 struct max8997_data *VAR_23;
 struct i2c_client *VAR_24;
 int VAR_25, VAR_26, VAR_27;
 u8 VAR_28 = 0, VAR_29 = 0, VAR_30 = 0;

 if (!VAR_20) {
  FUNC_3(&VAR_18->dev, "No platform init data supplied.\n");
  return -VAR_1;
 }

 if (VAR_19->dev->of_node) {
  VAR_26 = FUNC_11(VAR_18, VAR_20);
  if (VAR_26)
   return VAR_26;
 }

 VAR_23 = FUNC_6(&VAR_18->dev, sizeof(struct max8997_data),
          VAR_3);
 if (!VAR_23)
  return -VAR_2;

 VAR_23->dev = &VAR_18->dev;
 VAR_23->iodev = VAR_19;
 VAR_23->num_regulators = VAR_20->num_regulators;
 FUNC_15(VAR_18, VAR_23);
 VAR_24 = VAR_23->iodev->i2c;

 VAR_23->buck125_gpioindex = VAR_20->buck125_default_idx;
 VAR_23->buck1_gpiodvs = VAR_20->buck1_gpiodvs;
 VAR_23->buck2_gpiodvs = VAR_20->buck2_gpiodvs;
 VAR_23->buck5_gpiodvs = VAR_20->buck5_gpiodvs;
 FUNC_14(VAR_23->buck125_gpios, VAR_20->buck125_gpios, sizeof(int) * 3);
 VAR_23->ignore_gpiodvs_side_effect = VAR_20->ignore_gpiodvs_side_effect;

 VAR_27 = (VAR_20->buck1_gpiodvs || VAR_20->buck2_gpiodvs ||
   VAR_20->buck5_gpiodvs) ? 8 : 1;

 for (VAR_25 = 0; VAR_25 < VAR_27; VAR_25++) {
  VAR_23->buck1_vol[VAR_25] = VAR_26 =
   FUNC_10(
     &VAR_14,
     VAR_20->buck1_voltage[VAR_25],
     VAR_20->buck1_voltage[VAR_25] +
     VAR_14.step);
  if (VAR_26 < 0)
   return VAR_26;

  VAR_23->buck2_vol[VAR_25] = VAR_26 =
   FUNC_10(
     &VAR_14,
     VAR_20->buck2_voltage[VAR_25],
     VAR_20->buck2_voltage[VAR_25] +
     VAR_14.step);
  if (VAR_26 < 0)
   return VAR_26;

  VAR_23->buck5_vol[VAR_25] = VAR_26 =
   FUNC_10(
     &VAR_14,
     VAR_20->buck5_voltage[VAR_25],
     VAR_20->buck5_voltage[VAR_25] +
     VAR_14.step);
  if (VAR_26 < 0)
   return VAR_26;

  if (VAR_28 < VAR_23->buck1_vol[VAR_25])
   VAR_28 = VAR_23->buck1_vol[VAR_25];
  if (VAR_29 < VAR_23->buck2_vol[VAR_25])
   VAR_29 = VAR_23->buck2_vol[VAR_25];
  if (VAR_30 < VAR_23->buck5_vol[VAR_25])
   VAR_30 = VAR_23->buck5_vol[VAR_25];
 }


 for (VAR_25 = 0; VAR_25 < 8; VAR_25++) {
  FUNC_12(VAR_24, VAR_8 + VAR_25,
    VAR_28, 0x3f);
  FUNC_12(VAR_24, VAR_10 + VAR_25,
    VAR_29, 0x3f);
  FUNC_12(VAR_24, VAR_12 + VAR_25,
    VAR_30, 0x3f);
 }


 for (VAR_25 = 0; VAR_25 < VAR_27; VAR_25++) {
  FUNC_12(VAR_24, VAR_8 + VAR_25,
    VAR_23->buck1_vol[VAR_25],
    0x3f);
  FUNC_12(VAR_24, VAR_10 + VAR_25,
    VAR_23->buck2_vol[VAR_25],
    0x3f);
  FUNC_12(VAR_24, VAR_12 + VAR_25,
    VAR_23->buck5_vol[VAR_25],
    0x3f);
 }





 if (VAR_20->buck1_gpiodvs || VAR_20->buck2_gpiodvs ||
   VAR_20->buck5_gpiodvs) {

  if (!FUNC_9(VAR_20->buck125_gpios[0]) ||
    !FUNC_9(VAR_20->buck125_gpios[1]) ||
    !FUNC_9(VAR_20->buck125_gpios[2])) {
   FUNC_3(&VAR_18->dev, "GPIO NOT VALID\n");
   return -VAR_0;
  }

  VAR_26 = FUNC_5(&VAR_18->dev, VAR_20->buck125_gpios[0],
     "MAX8997 SET1");
  if (VAR_26)
   return VAR_26;

  VAR_26 = FUNC_5(&VAR_18->dev, VAR_20->buck125_gpios[1],
     "MAX8997 SET2");
  if (VAR_26)
   return VAR_26;

  VAR_26 = FUNC_5(&VAR_18->dev, VAR_20->buck125_gpios[2],
    "MAX8997 SET3");
  if (VAR_26)
   return VAR_26;

  FUNC_8(VAR_20->buck125_gpios[0],
    (VAR_23->buck125_gpioindex >> 2)
    & 0x1);
  FUNC_8(VAR_20->buck125_gpios[1],
    (VAR_23->buck125_gpioindex >> 1)
    & 0x1);
  FUNC_8(VAR_20->buck125_gpios[2],
    (VAR_23->buck125_gpioindex >> 0)
    & 0x1);
 }


 FUNC_12(VAR_24, VAR_7, (VAR_20->buck1_gpiodvs) ?
   (1 << 1) : (0 << 1), 1 << 1);
 FUNC_12(VAR_24, VAR_9, (VAR_20->buck2_gpiodvs) ?
   (1 << 1) : (0 << 1), 1 << 1);
 FUNC_12(VAR_24, VAR_11, (VAR_20->buck5_gpiodvs) ?
   (1 << 1) : (0 << 1), 1 << 1);


 VAR_23->ramp_delay = 10;
 FUNC_13(VAR_24, VAR_13, (0xf << 4) | 0x9);

 for (VAR_25 = 0; VAR_25 < VAR_20->num_regulators; VAR_25++) {
  const struct voltage_map_desc *VAR_31;
  int VAR_32 = VAR_20->regulators[VAR_25].id;

  VAR_31 = VAR_15[VAR_32];
  if (VAR_31) {
   VAR_16[VAR_32].n_voltages =
    (VAR_31->max - VAR_31->min) / VAR_31->step + 1;
  } else if (VAR_32 == VAR_5 || VAR_32 == VAR_6) {
   VAR_16[VAR_32].volt_table = VAR_17;
   VAR_16[VAR_32].n_voltages = FUNC_0(VAR_17);
  } else if (VAR_32 == VAR_4) {
   VAR_16[VAR_32].n_voltages = 16;
  }

  VAR_21.dev = VAR_23->dev;
  VAR_21.init_data = VAR_20->regulators[VAR_25].initdata;
  VAR_21.driver_data = VAR_23;
  VAR_21.of_node = VAR_20->regulators[VAR_25].reg_node;

  VAR_22 = FUNC_7(&VAR_18->dev, &VAR_16[VAR_32],
            &VAR_21);
  if (FUNC_1(VAR_22)) {
   FUNC_3(VAR_23->dev, "regulator init failed for %d\n",
     VAR_32);
   return FUNC_2(VAR_22);
  }
 }

 return 0;
}
