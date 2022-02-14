
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct device_node* of_node; } ;
struct tegra_xusb_port {TYPE_1__ dev; } ;
struct tegra_xusb_usb2_port {int mode; int supply; int internal; struct tegra_xusb_port base; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,char*,char const*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (int ,int ,char const*) ;
 int VAR_2 ;
 int FUNC_5 (struct device_node*,char*) ;
 int FUNC_6 (struct device_node*,char*,char const**) ;

__attribute__((used)) static int FUNC_7(struct tegra_xusb_usb2_port *VAR_3)
{
 struct tegra_xusb_port *VAR_4 = &VAR_3->base;
 struct device_node *VAR_5 = VAR_4->dev.of_node;
 const char *VAR_6;

 VAR_3->internal = FUNC_5(VAR_5, "nvidia,internal");

 if (!FUNC_6(VAR_5, "mode", &VAR_6)) {
  int VAR_7 = FUNC_4(VAR_2, FUNC_0(VAR_2), VAR_6);
  if (VAR_7 < 0) {
   FUNC_2(&VAR_4->dev, "invalid value %s for \"mode\"\n",
    VAR_6);
   VAR_3->mode = VAR_1;
  } else {
   VAR_3->mode = VAR_7;
  }
 } else {
  VAR_3->mode = VAR_0;
 }

 VAR_3->supply = FUNC_3(&VAR_4->dev, "vbus");
 return FUNC_1(VAR_3->supply);
}
