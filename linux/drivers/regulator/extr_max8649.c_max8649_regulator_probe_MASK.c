
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct regulator_config {struct regulator_dev* regmap; struct max8649_regulator_info* driver_data; int init_data; int * dev; } ;
struct max8649_regulator_info {int mode; int extclk_freq; int ramp_timing; int * dev; struct regulator_dev* regmap; scalar_t__ ramp_down; scalar_t__ extclk; } ;
struct max8649_platform_data {int mode; int extclk_freq; int ramp_timing; int regulator; scalar_t__ ramp_down; scalar_t__ extclk; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;
struct TYPE_3__ {int name; int vsel_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct regulator_dev*) ;
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
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (struct regulator_dev*) ;
 TYPE_1__ VAR_15 ;
 int FUNC_2 (int *,char*,int) ;
 struct max8649_platform_data* FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,unsigned int) ;
 struct max8649_regulator_info* FUNC_5 (int *,int,int ) ;
 struct regulator_dev* FUNC_6 (struct i2c_client*,int *) ;
 struct regulator_dev* FUNC_7 (int *,TYPE_1__*,struct regulator_config*) ;
 int FUNC_8 (struct i2c_client*,struct max8649_regulator_info*) ;
 int VAR_16 ;
 int FUNC_9 (struct regulator_dev*,int ,unsigned int*) ;
 int FUNC_10 (struct regulator_dev*,int ,int,int) ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_17,
          const struct i2c_device_id *VAR_18)
{
 struct max8649_platform_data *VAR_19 = FUNC_3(&VAR_17->dev);
 struct max8649_regulator_info *VAR_20 = ((void*)0);
 struct regulator_dev *VAR_21;
 struct regulator_config VAR_22 = { };
 unsigned int VAR_23;
 unsigned char VAR_24;
 int VAR_25;

 VAR_20 = FUNC_5(&VAR_17->dev, sizeof(struct max8649_regulator_info),
       VAR_1);
 if (!VAR_20)
  return -VAR_0;

 VAR_20->regmap = FUNC_6(VAR_17, &VAR_16);
 if (FUNC_0(VAR_20->regmap)) {
  VAR_25 = FUNC_1(VAR_20->regmap);
  FUNC_2(&VAR_17->dev, "Failed to allocate register map: %d\n", VAR_25);
  return VAR_25;
 }

 VAR_20->dev = &VAR_17->dev;
 FUNC_8(VAR_17, VAR_20);

 VAR_20->mode = VAR_19->mode;
 switch (VAR_20->mode) {
 case 0:
  VAR_15.vsel_reg = VAR_5;
  break;
 case 1:
  VAR_15.vsel_reg = VAR_6;
  break;
 case 2:
  VAR_15.vsel_reg = VAR_7;
  break;
 case 3:
  VAR_15.vsel_reg = VAR_8;
  break;
 default:
  break;
 }

 VAR_25 = FUNC_9(VAR_20->regmap, VAR_2, &VAR_23);
 if (VAR_25 != 0) {
  FUNC_2(VAR_20->dev, "Failed to detect ID of MAX8649:%d\n",
   VAR_25);
  return VAR_25;
 }
 FUNC_4(VAR_20->dev, "Detected MAX8649 (ID:%x)\n", VAR_23);


 FUNC_10(VAR_20->regmap, VAR_3, VAR_14, 0);


 VAR_20->extclk = VAR_19->extclk;
 VAR_24 = (VAR_20->extclk) ? VAR_13 : 0;
 FUNC_10(VAR_20->regmap, VAR_15.vsel_reg,
      VAR_13, VAR_24);
 if (VAR_20->extclk) {

  VAR_20->extclk_freq = VAR_19->extclk_freq;
  FUNC_10(VAR_20->regmap, VAR_12, VAR_4,
       VAR_20->extclk_freq << 6);
 }

 if (VAR_19->ramp_timing) {
  VAR_20->ramp_timing = VAR_19->ramp_timing;
  FUNC_10(VAR_20->regmap, VAR_9, VAR_11,
       VAR_20->ramp_timing << 5);
 }

 VAR_20->ramp_down = VAR_19->ramp_down;
 if (VAR_20->ramp_down) {
  FUNC_10(VAR_20->regmap, VAR_9, VAR_10,
       VAR_10);
 }

 VAR_22.dev = &VAR_17->dev;
 VAR_22.init_data = VAR_19->regulator;
 VAR_22.driver_data = VAR_20;
 VAR_22.regmap = VAR_20->regmap;

 VAR_21 = FUNC_7(&VAR_17->dev, &VAR_15,
        &VAR_22);
 if (FUNC_0(VAR_21)) {
  FUNC_2(VAR_20->dev, "failed to register regulator %s\n",
   VAR_15.name);
  return FUNC_1(VAR_21);
 }

 return 0;
}
