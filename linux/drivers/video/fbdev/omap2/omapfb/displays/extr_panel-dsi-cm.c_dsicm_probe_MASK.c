
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct device {int kobj; int of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_4__ {int x_res; int y_res; int pixelclock; } ;
struct TYPE_5__ {int dsi_pix_fmt; TYPE_1__ timings; } ;
struct omap_dss_device {int caps; TYPE_2__ panel; int owner; int type; int * driver; struct device* dev; } ;
struct panel_drv_data {struct backlight_device* bldev; scalar_t__ use_dsi_backlight; int ulps_work; int te_timeout_work; int ext_te_gpio; int reset_gpio; int do_update; int lock; TYPE_1__ timings; struct omap_dss_device dssdev; struct platform_device* pdev; } ;
struct backlight_properties {int max_brightness; int type; } ;
struct TYPE_6__ {int brightness; void* power; void* fb_blank; } ;
struct backlight_device {TYPE_3__ props; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (struct backlight_device*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct backlight_device*) ;
 int VAR_12 ;
 int FUNC_4 (int *,int ) ;
 struct backlight_device* FUNC_5 (int ,struct device*,struct panel_drv_data*,int *,struct backlight_properties*) ;
 int FUNC_6 (struct backlight_device*) ;
 int FUNC_7 (struct device*,char*) ;
 int FUNC_8 (struct device*,char*) ;
 int FUNC_9 (struct device*) ;
 int FUNC_10 (struct device*,int ,int ,char*) ;
 struct panel_drv_data* FUNC_11 (struct device*,int,int ) ;
 int FUNC_12 (struct device*,int ,int ,int ,char*,struct panel_drv_data*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_13 (struct backlight_device*) ;
 int FUNC_14 (struct panel_drv_data*) ;
 int VAR_15 ;
 int FUNC_15 (struct platform_device*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (struct backlight_properties*,int ,int) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (struct omap_dss_device*) ;
 int FUNC_21 (struct platform_device*,struct panel_drv_data*) ;
 int FUNC_22 (int *,int *) ;

__attribute__((used)) static int FUNC_23(struct platform_device *VAR_19)
{
 struct backlight_properties VAR_20;
 struct panel_drv_data *VAR_21;
 struct backlight_device *VAR_22 = ((void*)0);
 struct device *VAR_23 = &VAR_19->dev;
 struct omap_dss_device *VAR_24;
 int VAR_25;

 FUNC_7(VAR_23, "probe\n");

 if (!VAR_19->dev.of_node)
  return -VAR_1;

 VAR_21 = FUNC_11(VAR_23, sizeof(*VAR_21), VAR_4);
 if (!VAR_21)
  return -VAR_2;

 FUNC_21(VAR_19, VAR_21);
 VAR_21->pdev = VAR_19;

 VAR_25 = FUNC_15(VAR_19);
 if (VAR_25)
  return VAR_25;

 VAR_21->timings.x_res = 864;
 VAR_21->timings.y_res = 480;
 VAR_21->timings.pixelclock = 864 * 480 * 60;

 VAR_24 = &VAR_21->dssdev;
 VAR_24->dev = VAR_23;
 VAR_24->driver = &VAR_15;
 VAR_24->panel.timings = VAR_21->timings;
 VAR_24->type = VAR_8;
 VAR_24->owner = VAR_12;

 VAR_24->panel.dsi_pix_fmt = VAR_11;
 VAR_24->caps = VAR_9 |
  VAR_10;

 VAR_25 = FUNC_20(VAR_24);
 if (VAR_25) {
  FUNC_8(VAR_23, "Failed to register panel\n");
  goto err_reg;
 }

 FUNC_19(&VAR_21->lock);

 FUNC_4(&VAR_21->do_update, 0);

 if (FUNC_16(VAR_21->reset_gpio)) {
  VAR_25 = FUNC_10(VAR_23, VAR_21->reset_gpio,
    VAR_6, "taal rst");
  if (VAR_25) {
   FUNC_8(VAR_23, "failed to request reset gpio\n");
   return VAR_25;
  }
 }

 if (FUNC_16(VAR_21->ext_te_gpio)) {
  VAR_25 = FUNC_10(VAR_23, VAR_21->ext_te_gpio,
    VAR_5, "taal irq");
  if (VAR_25) {
   FUNC_8(VAR_23, "GPIO request failed\n");
   return VAR_25;
  }

  VAR_25 = FUNC_12(VAR_23, FUNC_17(VAR_21->ext_te_gpio),
    VAR_16,
    VAR_7,
    "taal vsync", VAR_21);

  if (VAR_25) {
   FUNC_8(VAR_23, "IRQ request failed\n");
   return VAR_25;
  }

  FUNC_0(&VAR_21->te_timeout_work,
     VAR_17);

  FUNC_7(VAR_23, "Using GPIO TE\n");
 }

 FUNC_1(&VAR_21->ulps_work, VAR_18);

 FUNC_14(VAR_21);

 if (VAR_21->use_dsi_backlight) {
  FUNC_18(&VAR_20, 0, sizeof(struct backlight_properties));
  VAR_20.max_brightness = 255;

  VAR_20.type = VAR_0;
  VAR_22 = FUNC_5(FUNC_9(VAR_23),
    VAR_23, VAR_21, &VAR_14, &VAR_20);
  if (FUNC_2(VAR_22)) {
   VAR_25 = FUNC_3(VAR_22);
   goto err_reg;
  }

  VAR_21->bldev = VAR_22;

  VAR_22->props.fb_blank = VAR_3;
  VAR_22->props.power = VAR_3;
  VAR_22->props.brightness = 255;

  FUNC_13(VAR_22);
 }

 VAR_25 = FUNC_22(&VAR_23->kobj, &VAR_13);
 if (VAR_25) {
  FUNC_8(VAR_23, "failed to create sysfs files\n");
  goto err_sysfs_create;
 }

 return 0;

err_sysfs_create:
 if (VAR_22 != ((void*)0))
  FUNC_6(VAR_22);
err_reg:
 return VAR_25;
}
