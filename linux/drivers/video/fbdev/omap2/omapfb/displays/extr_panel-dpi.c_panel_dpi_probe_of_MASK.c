
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct videomode {int dummy; } ;
struct TYPE_3__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct panel_drv_data {struct omap_dss_device* in; int videomode; int backlight_gpio; struct omap_dss_device* enable_gpio; } ;
struct omap_dss_device {int dummy; } ;
typedef struct omap_dss_device gpio_desc ;
struct display_timing {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct omap_dss_device*) ;
 int FUNC_1 (struct omap_dss_device*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 struct omap_dss_device* FUNC_3 (TYPE_1__*,char*,int ) ;
 int FUNC_4 (struct device_node*,char*,struct display_timing*) ;
 struct omap_dss_device* FUNC_5 (struct device_node*) ;
 struct panel_drv_data* FUNC_6 (struct platform_device*) ;
 int FUNC_7 (struct display_timing*,struct videomode*) ;
 int FUNC_8 (struct videomode*,int *) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_2)
{
 struct panel_drv_data *VAR_3 = FUNC_6(VAR_2);
 struct device_node *VAR_4 = VAR_2->dev.of_node;
 struct omap_dss_device *VAR_5;
 int VAR_6;
 struct display_timing VAR_7;
 struct videomode VAR_8;
 struct gpio_desc *VAR_9;

 VAR_9 = FUNC_3(&VAR_2->dev, "enable", VAR_1);
 if (FUNC_0(VAR_9))
  return FUNC_1(VAR_9);

 VAR_3->enable_gpio = VAR_9;

 VAR_3->backlight_gpio = -VAR_0;

 VAR_6 = FUNC_4(VAR_4, "panel-timing", &VAR_7);
 if (VAR_6) {
  FUNC_2(&VAR_2->dev, "failed to get video timing\n");
  return VAR_6;
 }

 FUNC_7(&VAR_7, &VAR_8);
 FUNC_8(&VAR_8, &VAR_3->videomode);

 VAR_5 = FUNC_5(VAR_4);
 if (FUNC_0(VAR_5)) {
  FUNC_2(&VAR_2->dev, "failed to find video source\n");
  return FUNC_1(VAR_5);
 }

 VAR_3->in = VAR_5;

 return 0;
}
