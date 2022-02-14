
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;
struct berlin_pinctrl_desc {int dummy; } ;


 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int FUNC_2 (struct platform_device*,struct berlin_pinctrl_desc const*,struct regmap*) ;
 struct device_node* FUNC_3 (int ) ;
 int FUNC_4 (struct device_node*) ;
 struct regmap* FUNC_5 (struct device_node*) ;

int FUNC_6(struct platform_device *VAR_0,
    const struct berlin_pinctrl_desc *VAR_1)
{
 struct device *VAR_2 = &VAR_0->dev;
 struct device_node *VAR_3 = FUNC_3(VAR_2->of_node);
 struct regmap *VAR_4 = FUNC_5(VAR_3);

 FUNC_4(VAR_3);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 return FUNC_2(VAR_0, VAR_1, VAR_4);
}
