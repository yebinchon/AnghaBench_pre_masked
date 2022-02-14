
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct rk808_regulator_data {int dummy; } ;
struct rk808 {int variant; int regmap; struct i2c_client* i2c; } ;
struct regulator_dev {int dummy; } ;
struct regulator_desc {int dummy; } ;
struct regulator_config {int regmap; struct rk808_regulator_data* driver_data; int * dev; } ;
struct TYPE_4__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;

 int VAR_3 ;

 int VAR_4 ;

 int VAR_5 ;

 int VAR_6 ;

 int VAR_7 ;
 int FUNC_2 (int *,char*,int) ;
 struct rk808* FUNC_3 (int ) ;
 struct rk808_regulator_data* FUNC_4 (TYPE_1__*,int,int ) ;
 struct regulator_dev* FUNC_5 (TYPE_1__*,struct regulator_desc const*,struct regulator_config*) ;
 int FUNC_6 (struct platform_device*,struct rk808_regulator_data*) ;
 struct regulator_desc* VAR_8 ;
 struct regulator_desc* VAR_9 ;
 int FUNC_7 (TYPE_1__*,int *,int ,struct rk808_regulator_data*) ;
 struct regulator_desc* VAR_10 ;
 struct regulator_desc* VAR_11 ;
 struct regulator_desc* VAR_12 ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_13)
{
 struct rk808 *VAR_14 = FUNC_3(VAR_13->dev.parent);
 struct i2c_client *VAR_15 = VAR_14->i2c;
 struct regulator_config VAR_16 = {};
 struct regulator_dev *VAR_17;
 struct rk808_regulator_data *VAR_18;
 const struct regulator_desc *VAR_19;
 int VAR_20, VAR_21, VAR_22;

 VAR_18 = FUNC_4(&VAR_13->dev, sizeof(*VAR_18), VAR_2);
 if (!VAR_18)
  return -VAR_1;

 VAR_20 = FUNC_7(&VAR_13->dev, &VAR_15->dev,
          VAR_14->regmap, VAR_18);
 if (VAR_20 < 0)
  return VAR_20;

 FUNC_6(VAR_13, VAR_18);

 switch (VAR_14->variant) {
 case 132:
  VAR_19 = VAR_8;
  VAR_22 = VAR_3;
  break;
 case 131:
  VAR_19 = VAR_9;
  VAR_22 = VAR_4;
  break;
 case 130:
  VAR_19 = VAR_10;
  VAR_22 = VAR_5;
  break;
 case 129:
  VAR_19 = VAR_11;
  VAR_22 = VAR_6;
  break;
 case 128:
  VAR_19 = VAR_12;
  VAR_22 = VAR_7;
  break;
 default:
  FUNC_2(&VAR_15->dev, "unsupported RK8XX ID %lu\n",
   VAR_14->variant);
  return -VAR_0;
 }

 VAR_16.dev = &VAR_15->dev;
 VAR_16.driver_data = VAR_18;
 VAR_16.regmap = VAR_14->regmap;


 for (VAR_21 = 0; VAR_21 < VAR_22; VAR_21++) {
  VAR_17 = FUNC_5(&VAR_13->dev,
           &VAR_19[VAR_21], &VAR_16);
  if (FUNC_0(VAR_17)) {
   FUNC_2(&VAR_15->dev,
    "failed to register %d regulator\n", VAR_21);
   return FUNC_1(VAR_17);
  }
 }

 return 0;
}
