
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_xusb_padctl {int dummy; } ;
struct platform_device {int dev; } ;
struct device_node {int dummy; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct tegra_xusb_padctl* FUNC_0 (int ) ;
 struct platform_device* FUNC_1 (struct device_node*) ;
 int FUNC_2 (struct device_node*) ;
 struct device_node* FUNC_3 (int ,char*,int ) ;
 struct tegra_xusb_padctl* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (int *) ;

struct tegra_xusb_padctl *FUNC_6(struct device *VAR_3)
{
 struct tegra_xusb_padctl *VAR_4;
 struct platform_device *VAR_5;
 struct device_node *VAR_6;

 VAR_6 = FUNC_3(VAR_3->of_node, "nvidia,xusb-padctl", 0);
 if (!VAR_6)
  return FUNC_0(-VAR_0);






 VAR_5 = FUNC_1(VAR_6);
 if (!VAR_5) {
  FUNC_2(VAR_6);
  return FUNC_0(-VAR_1);
 }

 FUNC_2(VAR_6);

 VAR_4 = FUNC_4(VAR_5);
 if (!VAR_4) {
  FUNC_5(&VAR_5->dev);
  return FUNC_0(-VAR_2);
 }

 return VAR_4;
}
