
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct regulator_desc {int name; } ;
struct regulator_config {struct lochnagar* driver_data; int regmap; struct device* dev; } ;
struct device {int parent; } ;
struct platform_device {struct device dev; } ;
struct of_device_id {struct regulator_desc* data; } ;
struct lochnagar {int regmap; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct device*,char*,int ,int) ;
 struct lochnagar* FUNC_3 (int ) ;
 struct regulator_dev* FUNC_4 (struct device*,struct regulator_desc const*,struct regulator_config*) ;
 int VAR_1 ;
 struct of_device_id* FUNC_5 (int ,struct device*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_2)
{
 struct device *VAR_3 = &VAR_2->dev;
 struct lochnagar *VAR_4 = FUNC_3(VAR_3->parent);
 struct regulator_config VAR_5 = { };
 const struct of_device_id *VAR_6;
 const struct regulator_desc *VAR_7;
 struct regulator_dev *VAR_8;
 int VAR_9;

 VAR_5.dev = VAR_3;
 VAR_5.regmap = VAR_4->regmap;
 VAR_5.driver_data = VAR_4;

 VAR_6 = FUNC_5(VAR_1, VAR_3);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = VAR_6->data;

 VAR_8 = FUNC_4(VAR_3, VAR_7, &VAR_5);
 if (FUNC_0(VAR_8)) {
  VAR_9 = FUNC_1(VAR_8);
  FUNC_2(VAR_3, "Failed to register %s regulator: %d\n",
   VAR_7->name, VAR_9);
  return VAR_9;
 }

 return 0;
}
