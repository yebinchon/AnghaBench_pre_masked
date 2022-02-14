
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct device* parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct pinctrl_dev {int dummy; } ;
struct pinctrl_desc {int dummy; } ;
struct device {int of_node; } ;
struct TYPE_4__ {struct pinctrl_dev** maps; } ;
struct aspeed_pinctrl_data {struct pinctrl_dev* scu; TYPE_1__ pinmux; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct pinctrl_dev*) ;
 int FUNC_1 (struct pinctrl_dev*) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 struct pinctrl_dev* FUNC_3 (struct pinctrl_desc*,TYPE_2__*,struct aspeed_pinctrl_data*) ;
 int FUNC_4 (struct platform_device*,struct aspeed_pinctrl_data*) ;
 struct pinctrl_dev* FUNC_5 (int ) ;

int FUNC_6(struct platform_device *VAR_2,
    struct pinctrl_desc *VAR_3,
    struct aspeed_pinctrl_data *VAR_4)
{
 struct device *VAR_5;
 struct pinctrl_dev *VAR_6;

 VAR_5 = VAR_2->dev.parent;
 if (!VAR_5) {
  FUNC_2(&VAR_2->dev, "No parent for syscon pincontroller\n");
  return -VAR_1;
 }

 VAR_4->scu = FUNC_5(VAR_5->of_node);
 if (FUNC_0(VAR_4->scu)) {
  FUNC_2(&VAR_2->dev, "No regmap for syscon pincontroller parent\n");
  return FUNC_1(VAR_4->scu);
 }

 VAR_4->pinmux.maps[VAR_0] = VAR_4->scu;

 VAR_6 = FUNC_3(VAR_3, &VAR_2->dev, VAR_4);

 if (FUNC_0(VAR_6)) {
  FUNC_2(&VAR_2->dev, "Failed to register pinctrl\n");
  return FUNC_1(VAR_6);
 }

 FUNC_4(VAR_2, VAR_4);

 return 0;
}
