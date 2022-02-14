
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u32 ;
struct regulator_init_data {int dummy; } ;
struct regulator_desc {int n_voltages; int min_uV; int uV_step; int enable_val; int disable_val; int enable_time; int * ops; void* volt_table; int vsel_reg; } ;
struct regulator_config {int of_node; struct pfuze_chip* driver_data; struct regulator_init_data* init_data; TYPE_2__* dev; } ;
struct pfuze_regulator_platform_data {struct regulator_init_data** init_data; } ;
struct pfuze_chip {int chip_id; int flags; int * regulators; TYPE_4__* pfuze_regulators; TYPE_3__* regulator_descs; int regmap; TYPE_2__* dev; } ;
struct of_device_id {scalar_t__ data; } ;
struct i2c_device_id {int driver_data; } ;
struct TYPE_11__ {scalar_t__ of_node; } ;
struct i2c_client {TYPE_2__ dev; } ;
struct TYPE_10__ {int name; } ;
struct TYPE_13__ {TYPE_1__ desc; } ;
struct TYPE_12__ {scalar_t__ sw_reg; struct regulator_desc desc; } ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;

 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;

 int VAR_7 ;

 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,char*,...) ;
 struct pfuze_regulator_platform_data* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,char*,char*) ;
 struct pfuze_chip* FUNC_6 (TYPE_2__*,int,int ) ;
 int FUNC_7 (struct i2c_client*,int *) ;
 int FUNC_8 (TYPE_2__*,struct regulator_desc*,struct regulator_config*) ;
 int FUNC_9 (struct i2c_client*,struct pfuze_chip*) ;
 struct regulator_init_data* FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (TYPE_3__*,TYPE_4__*,int) ;
 struct of_device_id* FUNC_13 (int ,TYPE_2__*) ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (scalar_t__,char*) ;
 void* VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 int VAR_16 ;
 int FUNC_16 (struct pfuze_chip*) ;
 int FUNC_17 (struct pfuze_chip*) ;
 int FUNC_18 (struct pfuze_chip*) ;
 int VAR_17 ;
 int FUNC_19 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_20(struct i2c_client *VAR_18,
        const struct i2c_device_id *VAR_19)
{
 struct pfuze_chip *VAR_20;
 struct pfuze_regulator_platform_data *VAR_21 =
     FUNC_4(&VAR_18->dev);
 struct regulator_config VAR_22 = { };
 int VAR_23, VAR_24;
 const struct of_device_id *VAR_25;
 u32 VAR_26;
 u32 VAR_27, VAR_28, VAR_29 = 0x40;

 VAR_20 = FUNC_6(&VAR_18->dev, sizeof(*VAR_20),
   VAR_2);
 if (!VAR_20)
  return -VAR_1;

 if (VAR_18->dev.of_node) {
  VAR_25 = FUNC_13(FUNC_14(VAR_16),
    &VAR_18->dev);
  if (!VAR_25) {
   FUNC_3(&VAR_18->dev, "Error: No device match found\n");
   return -VAR_0;
  }
  VAR_20->chip_id = (int)(long)VAR_25->data;
 } else if (VAR_19) {
  VAR_20->chip_id = VAR_19->driver_data;
 } else {
  FUNC_3(&VAR_18->dev, "No dts match or id table match found\n");
  return -VAR_0;
 }

 FUNC_9(VAR_18, VAR_20);
 VAR_20->dev = &VAR_18->dev;

 VAR_20->regmap = FUNC_7(VAR_18, &VAR_17);
 if (FUNC_1(VAR_20->regmap)) {
  VAR_24 = FUNC_2(VAR_20->regmap);
  FUNC_3(&VAR_18->dev,
   "regmap allocation failed with err %d\n", VAR_24);
  return VAR_24;
 }

 VAR_24 = FUNC_16(VAR_20);
 if (VAR_24) {
  FUNC_3(&VAR_18->dev, "unrecognized pfuze chip ID!\n");
  return VAR_24;
 }


 switch (VAR_20->chip_id) {
 case 128:
  VAR_20->pfuze_regulators = VAR_15;
  VAR_26 = FUNC_0(VAR_15);
  VAR_27 = VAR_8;
  VAR_28 = VAR_8;
  VAR_29 = 1 << 3;
  break;
 case 129:
  VAR_20->pfuze_regulators = VAR_13;
  VAR_26 = FUNC_0(VAR_13);
  VAR_27 = VAR_7;
  VAR_28 = VAR_7;
  VAR_29 = 1 << 3;
  break;
 case 130:
  VAR_20->pfuze_regulators = VAR_12;
  VAR_26 = FUNC_0(VAR_12);
  VAR_27 = VAR_5;
  VAR_28 = VAR_6;
  break;
 case 131:
 default:
  VAR_20->pfuze_regulators = VAR_10;
  VAR_26 = FUNC_0(VAR_10);
  VAR_27 = VAR_3;
  VAR_28 = VAR_4;
  break;
 }
 FUNC_5(&VAR_18->dev, "pfuze%s found.\n",
  (VAR_20->chip_id == 131) ? "100" :
  (((VAR_20->chip_id == 130) ? "200" :
  ((VAR_20->chip_id == 129) ? "3000" : "3001"))));

 FUNC_12(VAR_20->regulator_descs, VAR_20->pfuze_regulators,
  sizeof(VAR_20->regulator_descs));

 VAR_24 = FUNC_17(VAR_20);
 if (VAR_24)
  return VAR_24;

 for (VAR_23 = 0; VAR_23 < VAR_26; VAR_23++) {
  struct regulator_init_data *VAR_30;
  struct regulator_desc *VAR_31;
  int VAR_32;

  VAR_31 = &VAR_20->regulator_descs[VAR_23].desc;

  if (VAR_21)
   VAR_30 = VAR_21->init_data[VAR_23];
  else
   VAR_30 = FUNC_10(VAR_23);


  if (VAR_23 >= VAR_27 && VAR_23 <= VAR_28) {
   VAR_24 = FUNC_19(VAR_20->regmap,
      VAR_31->vsel_reg, &VAR_32);
   if (VAR_24) {
    FUNC_3(&VAR_18->dev, "Fails to read from the register.\n");
    return VAR_24;
   }

   if (VAR_32 & VAR_29) {
    if (VAR_20->chip_id == 129 ||
     VAR_20->chip_id == 128) {
     VAR_31->volt_table = VAR_14;
     VAR_31->n_voltages = FUNC_0(VAR_14);
    } else {
     VAR_31->min_uV = 800000;
     VAR_31->uV_step = 50000;
     VAR_31->n_voltages = 51;
    }
   }
  }







  if (VAR_20->flags & VAR_9) {
   if (VAR_20->regulator_descs[VAR_23].sw_reg) {
    VAR_31->ops = &VAR_11;
    VAR_31->enable_val = 0x8;
    VAR_31->disable_val = 0x0;
    VAR_31->enable_time = 500;
   }
  }

  VAR_22.dev = &VAR_18->dev;
  VAR_22.init_data = VAR_30;
  VAR_22.driver_data = VAR_20;
  VAR_22.of_node = FUNC_11(VAR_23);

  VAR_20->regulators[VAR_23] =
   FUNC_8(&VAR_18->dev, VAR_31, &VAR_22);
  if (FUNC_1(VAR_20->regulators[VAR_23])) {
   FUNC_3(&VAR_18->dev, "register regulator%s failed\n",
    VAR_20->pfuze_regulators[VAR_23].desc.name);
   return FUNC_2(VAR_20->regulators[VAR_23]);
  }
 }

 if (FUNC_15(VAR_18->dev.of_node,
      "fsl,pmic-stby-poweroff"))
  return FUNC_18(VAR_20);

 return 0;
}
