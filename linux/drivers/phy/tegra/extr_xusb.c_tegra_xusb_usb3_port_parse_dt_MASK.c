
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {struct device_node* of_node; } ;
struct tegra_xusb_port {TYPE_1__ dev; } ;
struct tegra_xusb_usb3_port {int supply; int internal; int port; struct tegra_xusb_port base; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,char*,int) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (struct device_node*,char*) ;
 int FUNC_4 (struct device_node*,char*,int *) ;

__attribute__((used)) static int FUNC_5(struct tegra_xusb_usb3_port *VAR_0)
{
 struct tegra_xusb_port *VAR_1 = &VAR_0->base;
 struct device_node *VAR_2 = VAR_1->dev.of_node;
 u32 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_4(VAR_2, "nvidia,usb2-companion", &VAR_3);
 if (VAR_4 < 0) {
  FUNC_1(&VAR_1->dev, "failed to read port: %d\n", VAR_4);
  return VAR_4;
 }

 VAR_0->port = VAR_3;

 VAR_0->internal = FUNC_3(VAR_2, "nvidia,internal");

 VAR_0->supply = FUNC_2(&VAR_1->dev, "vbus");
 return FUNC_0(VAR_0->supply);
}
