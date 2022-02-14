
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device_node* of_node; } ;
struct tegra_xusb_port {TYPE_1__ dev; } ;
struct tegra_xusb_ulpi_port {int internal; struct tegra_xusb_port base; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_1(struct tegra_xusb_ulpi_port *VAR_0)
{
 struct tegra_xusb_port *VAR_1 = &VAR_0->base;
 struct device_node *VAR_2 = VAR_1->dev.of_node;

 VAR_0->internal = FUNC_0(VAR_2, "nvidia,internal");

 return 0;
}
