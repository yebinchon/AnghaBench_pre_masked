
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_xusb_padctl {TYPE_1__* dev; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {struct device_node* of_node; } ;


 struct device_node* FUNC_0 (struct device_node*,char const*) ;
 int FUNC_1 (struct device_node*) ;

__attribute__((used)) static struct device_node *
FUNC_2(struct tegra_xusb_padctl *VAR_0, const char *VAR_1)
{
 struct device_node *VAR_2, *VAR_3;

 VAR_2 = FUNC_0(VAR_0->dev->of_node, "pads");
 if (!VAR_2)
  return ((void*)0);

 VAR_3 = FUNC_0(VAR_2, VAR_1);
 FUNC_1(VAR_2);

 return VAR_3;
}
