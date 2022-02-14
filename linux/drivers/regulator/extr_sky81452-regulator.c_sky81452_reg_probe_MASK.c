
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_init_data {int dummy; } ;
struct regulator_dev {int dummy; } ;
struct regulator_config {int regmap; int of_node; struct regulator_init_data const* init_data; int dev; } ;
struct device {int parent; int of_node; } ;
struct platform_device {struct device dev; } ;


 scalar_t__ FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (int ) ;
 struct regulator_init_data* FUNC_4 (struct device*) ;
 struct regulator_dev* FUNC_5 (struct device*,int *,struct regulator_config*) ;
 int FUNC_6 (struct platform_device*,struct regulator_dev*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_1)
{
 struct device *VAR_2 = &VAR_1->dev;
 const struct regulator_init_data *VAR_3 = FUNC_4(VAR_2);
 struct regulator_config VAR_4 = { };
 struct regulator_dev *VAR_5;

 VAR_4.dev = VAR_2->parent;
 VAR_4.init_data = VAR_3;
 VAR_4.of_node = VAR_2->of_node;
 VAR_4.regmap = FUNC_3(VAR_2->parent);

 VAR_5 = FUNC_5(VAR_2, &VAR_0, &VAR_4);
 if (FUNC_0(VAR_5)) {
  FUNC_2(VAR_2, "failed to register. err=%ld\n", FUNC_1(VAR_5));
  return FUNC_1(VAR_5);
 }

 FUNC_6(VAR_1, VAR_5);

 return 0;
}
