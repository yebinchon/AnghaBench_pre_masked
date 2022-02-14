
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct samsung_pinctrl_of_match_data {int num_ctrl; struct samsung_pin_ctrl const* ctrl; } ;
struct samsung_pin_ctrl {int dummy; } ;
struct TYPE_3__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (TYPE_1__*,char*,...) ;
 int FUNC_1 (struct device_node*,char*) ;
 struct samsung_pinctrl_of_match_data* FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static const struct samsung_pin_ctrl *
FUNC_3(struct platform_device *VAR_0)
{
 struct device_node *VAR_1 = VAR_0->dev.of_node;
 const struct samsung_pinctrl_of_match_data *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, "pinctrl");
 if (VAR_3 < 0) {
  FUNC_0(&VAR_0->dev, "failed to get alias id\n");
  return ((void*)0);
 }

 VAR_2 = FUNC_2(&VAR_0->dev);
 if (VAR_3 >= VAR_2->num_ctrl) {
  FUNC_0(&VAR_0->dev, "invalid alias id %d\n", VAR_3);
  return ((void*)0);
 }

 return &(VAR_2->ctrl[VAR_3]);
}
