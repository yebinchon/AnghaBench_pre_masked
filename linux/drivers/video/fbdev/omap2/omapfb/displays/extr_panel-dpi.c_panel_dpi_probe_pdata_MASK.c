
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videomode {int dummy; } ;
struct platform_device {int dev; } ;
struct omap_dss_device {int name; } ;
struct panel_drv_data {struct omap_dss_device* in; int backlight_gpio; int enable_gpio; struct omap_dss_device dssdev; int videomode; int data_lines; } ;
struct panel_dpi_platform_data {int backlight_gpio; int enable_gpio; int name; int display_timing; int data_lines; int source; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ) ;
 struct panel_dpi_platform_data* FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ,char*) ;
 int FUNC_3 (int ) ;
 struct omap_dss_device* FUNC_4 (int ) ;
 int FUNC_5 (struct omap_dss_device*) ;
 struct panel_drv_data* FUNC_6 (struct platform_device*) ;
 int FUNC_7 (int ,struct videomode*) ;
 int FUNC_8 (struct videomode*,int *) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_2)
{
 const struct panel_dpi_platform_data *VAR_3;
 struct panel_drv_data *VAR_4 = FUNC_6(VAR_2);
 struct omap_dss_device *VAR_5, *VAR_6;
 struct videomode VAR_7;
 int VAR_8;

 VAR_3 = FUNC_1(&VAR_2->dev);

 VAR_6 = FUNC_4(VAR_3->source);
 if (VAR_6 == ((void*)0)) {
  FUNC_0(&VAR_2->dev, "failed to find video source '%s'\n",
    VAR_3->source);
  return -VAR_0;
 }

 VAR_4->in = VAR_6;

 VAR_4->data_lines = VAR_3->data_lines;

 FUNC_7(VAR_3->display_timing, &VAR_7);
 FUNC_8(&VAR_7, &VAR_4->videomode);

 VAR_5 = &VAR_4->dssdev;
 VAR_5->name = VAR_3->name;

 VAR_8 = FUNC_2(&VAR_2->dev, VAR_3->enable_gpio,
     VAR_1, "panel enable");
 if (VAR_8)
  goto err_gpio;

 VAR_4->enable_gpio = FUNC_3(VAR_3->enable_gpio);

 VAR_4->backlight_gpio = VAR_3->backlight_gpio;

 return 0;

err_gpio:
 FUNC_5(VAR_4->in);
 return VAR_8;
}
