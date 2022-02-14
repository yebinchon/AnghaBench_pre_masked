
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct hdmi_wp_data {int dummy; } ;
struct hdmi_pll_data {int base; struct hdmi_wp_data* wp; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,struct resource*) ;
 int FUNC_4 (struct platform_device*,struct hdmi_pll_data*) ;
 struct resource* FUNC_5 (struct platform_device*,int ,char*) ;

int FUNC_6(struct platform_device *VAR_2, struct hdmi_pll_data *VAR_3,
 struct hdmi_wp_data *VAR_4)
{
 int VAR_5;
 struct resource *VAR_6;

 VAR_3->wp = VAR_4;

 VAR_6 = FUNC_5(VAR_2, VAR_1, "pll");
 if (!VAR_6) {
  FUNC_0("can't get PLL mem resource\n");
  return -VAR_0;
 }

 VAR_3->base = FUNC_3(&VAR_2->dev, VAR_6);
 if (FUNC_1(VAR_3->base)) {
  FUNC_0("can't ioremap PLLCTRL\n");
  return FUNC_2(VAR_3->base);
 }

 VAR_5 = FUNC_4(VAR_2, VAR_3);
 if (VAR_5) {
  FUNC_0("failed to init HDMI PLL\n");
  return VAR_5;
 }

 return 0;
}
