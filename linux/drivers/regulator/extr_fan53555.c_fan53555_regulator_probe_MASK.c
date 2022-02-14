
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct regulator_config {struct device_node* of_node; struct fan53555_device_info* driver_data; struct regmap* regmap; TYPE_2__* init_data; TYPE_3__* dev; } ;
struct regmap {int dummy; } ;
struct i2c_device_id {unsigned long driver_data; } ;
struct TYPE_11__ {struct device_node* of_node; } ;
struct i2c_client {TYPE_3__ dev; } ;
struct fan53555_platform_data {size_t slew_rate; TYPE_2__* regulator; } ;
struct fan53555_device_info {unsigned long vendor; unsigned int chip_id; unsigned int chip_rev; TYPE_2__* regulator; TYPE_3__* dev; int desc; } ;
struct device_node {int dummy; } ;
struct TYPE_9__ {scalar_t__ ramp_delay; } ;
struct TYPE_10__ {TYPE_1__ constraints; } ;


 size_t FUNC_0 (scalar_t__*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct regmap*) ;
 int FUNC_2 (struct regmap*) ;
 int FUNC_3 (TYPE_3__*,char*) ;
 struct fan53555_platform_data* FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,char*,unsigned int,unsigned int) ;
 struct fan53555_device_info* FUNC_6 (TYPE_3__*,int,int ) ;
 struct regmap* FUNC_7 (struct i2c_client*,int *) ;
 int FUNC_8 (struct fan53555_device_info*,struct fan53555_platform_data*) ;
 struct fan53555_platform_data* FUNC_9 (TYPE_3__*,struct device_node*,int *) ;
 int VAR_8 ;
 int FUNC_10 (struct fan53555_device_info*,struct regulator_config*) ;
 int FUNC_11 (struct i2c_client*,struct fan53555_device_info*) ;
 scalar_t__ FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (struct regmap*,int ,unsigned int*) ;
 scalar_t__* VAR_9 ;

__attribute__((used)) static int FUNC_14(struct i2c_client *VAR_10,
    const struct i2c_device_id *VAR_11)
{
 struct device_node *VAR_12 = VAR_10->dev.of_node;
 struct fan53555_device_info *VAR_13;
 struct fan53555_platform_data *VAR_14;
 struct regulator_config VAR_15 = { };
 struct regmap *VAR_16;
 unsigned int VAR_17;
 int VAR_18;

 VAR_13 = FUNC_6(&VAR_10->dev, sizeof(struct fan53555_device_info),
     VAR_7);
 if (!VAR_13)
  return -VAR_4;

 VAR_14 = FUNC_4(&VAR_10->dev);
 if (!VAR_14)
  VAR_14 = FUNC_9(&VAR_10->dev, VAR_12, &VAR_13->desc);

 if (!VAR_14 || !VAR_14->regulator) {
  FUNC_3(&VAR_10->dev, "Platform data not found!\n");
  return -VAR_3;
 }

 VAR_13->regulator = VAR_14->regulator;
 if (VAR_10->dev.of_node) {
  VAR_13->vendor =
   (unsigned long)FUNC_12(&VAR_10->dev);
 } else {

  if (!VAR_13->regulator->constraints.ramp_delay) {
   if (VAR_14->slew_rate >= FUNC_0(VAR_9)) {
    FUNC_3(&VAR_10->dev, "Invalid slew_rate\n");
    return -VAR_2;
   }

   VAR_13->regulator->constraints.ramp_delay
     = VAR_9[VAR_14->slew_rate];
  }

  VAR_13->vendor = VAR_11->driver_data;
 }

 VAR_16 = FUNC_7(VAR_10, &VAR_8);
 if (FUNC_1(VAR_16)) {
  FUNC_3(&VAR_10->dev, "Failed to allocate regmap!\n");
  return FUNC_2(VAR_16);
 }
 VAR_13->dev = &VAR_10->dev;
 FUNC_11(VAR_10, VAR_13);

 VAR_18 = FUNC_13(VAR_16, VAR_5, &VAR_17);
 if (VAR_18 < 0) {
  FUNC_3(&VAR_10->dev, "Failed to get chip ID!\n");
  return VAR_18;
 }
 VAR_13->chip_id = VAR_17 & VAR_0;

 VAR_18 = FUNC_13(VAR_16, VAR_6, &VAR_17);
 if (VAR_18 < 0) {
  FUNC_3(&VAR_10->dev, "Failed to get chip Rev!\n");
  return VAR_18;
 }
 VAR_13->chip_rev = VAR_17 & VAR_1;
 FUNC_5(&VAR_10->dev, "FAN53555 Option[%d] Rev[%d] Detected!\n",
    VAR_13->chip_id, VAR_13->chip_rev);

 VAR_18 = FUNC_8(VAR_13, VAR_14);
 if (VAR_18 < 0) {
  FUNC_3(&VAR_10->dev, "Failed to setup device!\n");
  return VAR_18;
 }

 VAR_15.dev = VAR_13->dev;
 VAR_15.init_data = VAR_13->regulator;
 VAR_15.regmap = VAR_16;
 VAR_15.driver_data = VAR_13;
 VAR_15.of_node = VAR_12;

 VAR_18 = FUNC_10(VAR_13, &VAR_15);
 if (VAR_18 < 0)
  FUNC_3(&VAR_10->dev, "Failed to register regulator!\n");
 return VAR_18;

}
