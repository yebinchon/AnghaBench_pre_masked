
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct property {int dummy; } ;
struct pinctrl_dev {TYPE_1__* dev; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {struct device_node* of_node; } ;


 struct property* FUNC_0 (struct device_node*,char*,int*) ;

bool FUNC_1(struct pinctrl_dev *VAR_0)
{
 struct device_node *VAR_1;
 struct property *VAR_2;
 int VAR_3;

 VAR_1 = VAR_0->dev->of_node;
 if (!VAR_1)
  return 0;

 VAR_2 = FUNC_0(VAR_1, "pinctrl-0", &VAR_3);

 return VAR_2 ? 1 : 0;
}
