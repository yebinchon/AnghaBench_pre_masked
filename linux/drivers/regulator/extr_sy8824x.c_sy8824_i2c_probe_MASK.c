
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sy8824_device_info {scalar_t__ regulator; struct device* dev; int cfg; int desc; } ;
struct regulator_config {struct device_node* of_node; struct sy8824_device_info* driver_data; struct regmap* regmap; scalar_t__ init_data; struct device* dev; } ;
struct regmap {int dummy; } ;
struct i2c_device_id {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct i2c_client {struct device dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int FUNC_2 (struct device*,char*) ;
 struct sy8824_device_info* FUNC_3 (struct device*,int,int ) ;
 struct regmap* FUNC_4 (struct i2c_client*,int *) ;
 int FUNC_5 (struct i2c_client*,struct sy8824_device_info*) ;
 int FUNC_6 (struct device*) ;
 scalar_t__ FUNC_7 (struct device*,struct device_node*,int *) ;
 int VAR_3 ;
 int FUNC_8 (struct sy8824_device_info*,struct regulator_config*) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_4,
       const struct i2c_device_id *VAR_5)
{
 struct device *VAR_6 = &VAR_4->dev;
 struct device_node *VAR_7 = VAR_6->of_node;
 struct sy8824_device_info *VAR_8;
 struct regulator_config VAR_9 = { };
 struct regmap *VAR_10;
 int VAR_11;

 VAR_8 = FUNC_3(VAR_6, sizeof(struct sy8824_device_info), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->regulator = FUNC_7(VAR_6, VAR_7, &VAR_8->desc);
 if (!VAR_8->regulator) {
  FUNC_2(VAR_6, "Platform data not found!\n");
  return -VAR_0;
 }

 VAR_8->dev = VAR_6;
 VAR_8->cfg = FUNC_6(VAR_6);

 VAR_10 = FUNC_4(VAR_4, &VAR_3);
 if (FUNC_0(VAR_10)) {
  FUNC_2(VAR_6, "Failed to allocate regmap!\n");
  return FUNC_1(VAR_10);
 }
 FUNC_5(VAR_4, VAR_8);

 VAR_9.dev = VAR_8->dev;
 VAR_9.init_data = VAR_8->regulator;
 VAR_9.regmap = VAR_10;
 VAR_9.driver_data = VAR_8;
 VAR_9.of_node = VAR_7;

 VAR_11 = FUNC_8(VAR_8, &VAR_9);
 if (VAR_11 < 0)
  FUNC_2(VAR_6, "Failed to register regulator!\n");
 return VAR_11;
}
