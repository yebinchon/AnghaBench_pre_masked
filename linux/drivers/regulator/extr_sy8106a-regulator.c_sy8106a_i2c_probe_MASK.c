
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct regulator_dev {int dummy; } ;
struct regulator_config {int init_data; int of_node; struct regulator_dev* regmap; struct device* dev; } ;
typedef struct regulator_dev regmap ;
struct i2c_device_id {int dummy; } ;
struct device {int of_node; } ;
struct i2c_client {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct device*,char*,int) ;
 struct regulator_dev* FUNC_3 (struct i2c_client*,int *) ;
 struct regulator_dev* FUNC_4 (struct device*,int *,struct regulator_config*) ;
 int FUNC_5 (struct device*,int ,int *) ;
 int FUNC_6 (int ,char*,int*) ;
 int FUNC_7 (struct regulator_dev*,int ,unsigned int*) ;
 int FUNC_8 (struct regulator_dev*,int ,unsigned int) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_9,
       const struct i2c_device_id *VAR_10)
{
 struct device *VAR_11 = &VAR_9->dev;
 struct regulator_dev *VAR_12;
 struct regulator_config VAR_13 = { };
 struct regmap *VAR_14;
 unsigned int VAR_15, VAR_16;
 u32 VAR_17;
 int VAR_18;

 VAR_18 = FUNC_6(VAR_11->of_node, "silergy,fixed-microvolt",
         &VAR_17);
 if (VAR_18)
  return VAR_18;

 if (VAR_17 < VAR_4 * 1000 ||
     VAR_17 > VAR_3 * 1000)
  return -VAR_0;

 VAR_14 = FUNC_3(VAR_9, &VAR_8);
 if (FUNC_0(VAR_14)) {
  VAR_18 = FUNC_1(VAR_14);
  FUNC_2(VAR_11, "Failed to allocate register map: %d\n", VAR_18);
  return VAR_18;
 }

 VAR_13.dev = &VAR_9->dev;
 VAR_13.regmap = VAR_14;

 VAR_13.of_node = VAR_11->of_node;
 VAR_13.init_data = FUNC_5(VAR_11, VAR_11->of_node,
            &VAR_7);

 if (!VAR_13.init_data)
  return -VAR_1;


 VAR_18 = FUNC_7(VAR_14, VAR_5, &VAR_15);
 if (VAR_18)
  return VAR_18;

 if (!(VAR_15 & VAR_2)) {
  VAR_16 = (VAR_17 / 1000 - VAR_4) /
         VAR_6;

  VAR_18 = FUNC_8(VAR_14, VAR_5,
         VAR_16 | VAR_2);
  if (VAR_18)
   return VAR_18;
 }


 VAR_12 = FUNC_4(&VAR_9->dev, &VAR_7, &VAR_13);
 if (FUNC_0(VAR_12)) {
  VAR_18 = FUNC_1(VAR_12);
  FUNC_2(&VAR_9->dev, "Failed to register SY8106A regulator: %d\n", VAR_18);
  return VAR_18;
 }

 return 0;
}
