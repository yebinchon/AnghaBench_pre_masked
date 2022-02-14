
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct device_node* of_node; } ;
struct spi_device {TYPE_1__ dev; } ;
struct panel_drv_data {struct omap_dss_device* in; int backlight_gpio; struct omap_dss_device* enable_gpio; } ;
struct omap_dss_device {int dummy; } ;
typedef struct omap_dss_device gpio_desc ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct omap_dss_device*) ;
 int FUNC_1 (struct omap_dss_device*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 struct panel_drv_data* FUNC_3 (TYPE_1__*) ;
 struct omap_dss_device* FUNC_4 (TYPE_1__*,char*,int ) ;
 struct omap_dss_device* FUNC_5 (struct device_node*) ;

__attribute__((used)) static int FUNC_6(struct spi_device *VAR_2)
{
 struct device_node *VAR_3 = VAR_2->dev.of_node;
 struct panel_drv_data *VAR_4 = FUNC_3(&VAR_2->dev);
 struct omap_dss_device *VAR_5;
 struct gpio_desc *VAR_6;

 VAR_6 = FUNC_4(&VAR_2->dev, "enable", VAR_1);
 if (FUNC_0(VAR_6)) {
  FUNC_2(&VAR_2->dev, "failed to parse enable gpio\n");
  return FUNC_1(VAR_6);
 }

 VAR_4->enable_gpio = VAR_6;

 VAR_4->backlight_gpio = -VAR_0;

 VAR_5 = FUNC_5(VAR_3);
 if (FUNC_0(VAR_5)) {
  FUNC_2(&VAR_2->dev, "failed to find video source\n");
  return FUNC_1(VAR_5);
 }

 VAR_4->in = VAR_5;

 return 0;
}
