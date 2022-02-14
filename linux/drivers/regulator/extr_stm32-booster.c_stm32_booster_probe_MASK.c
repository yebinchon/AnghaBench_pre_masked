
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct regulator_desc {int dummy; } ;
struct regulator_config {int init_data; struct device_node* of_node; struct device* dev; struct regulator_dev* regmap; } ;
typedef struct regulator_dev regmap ;
struct device {TYPE_1__* driver; struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;
struct TYPE_4__ {scalar_t__ data; } ;
struct TYPE_3__ {int of_match_table; } ;


 scalar_t__ FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct device*,char*,int) ;
 struct regulator_dev* FUNC_3 (struct device*,struct regulator_desc const*,struct regulator_config*) ;
 int FUNC_4 (struct device*,struct device_node*,struct regulator_desc const*) ;
 TYPE_2__* FUNC_5 (int ,struct device*) ;
 struct regulator_dev* FUNC_6 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_0)
{
 struct device *VAR_1 = &VAR_0->dev;
 struct device_node *VAR_2 = VAR_0->dev.of_node;
 struct regulator_config VAR_3 = { };
 const struct regulator_desc *VAR_4;
 struct regulator_dev *VAR_5;
 struct regmap *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_6(VAR_2, "st,syscfg");
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 VAR_4 = (const struct regulator_desc *)
  FUNC_5(VAR_1->driver->of_match_table, VAR_1)->data;

 VAR_3.regmap = VAR_6;
 VAR_3.dev = VAR_1;
 VAR_3.of_node = VAR_2;
 VAR_3.init_data = FUNC_4(VAR_1, VAR_2, VAR_4);

 VAR_5 = FUNC_3(VAR_1, VAR_4, &VAR_3);
 if (FUNC_0(VAR_5)) {
  VAR_7 = FUNC_1(VAR_5);
  FUNC_2(VAR_1, "register failed with error %d\n", VAR_7);
  return VAR_7;
 }

 return 0;
}
