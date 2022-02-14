
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ of_node; } ;
struct platform_device {TYPE_4__ dev; } ;
struct TYPE_9__ {int data_lines; } ;
struct TYPE_10__ {TYPE_2__ dpi; } ;
struct TYPE_8__ {int timings; } ;
struct omap_dss_device {TYPE_3__ phy; TYPE_1__ panel; int owner; int type; int * driver; TYPE_4__* dev; } ;
struct panel_drv_data {int in; int data_lines; int videomode; struct omap_dss_device dssdev; int backlight_gpio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_4__*,char*) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,int ,int ,char*) ;
 struct panel_drv_data* FUNC_3 (TYPE_4__*,int,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct omap_dss_device*) ;
 int VAR_6 ;
 int FUNC_7 (struct platform_device*) ;
 int FUNC_8 (struct platform_device*) ;
 int FUNC_9 (struct platform_device*,struct panel_drv_data*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_7)
{
 struct panel_drv_data *VAR_8;
 struct omap_dss_device *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_3(&VAR_7->dev, sizeof(*VAR_8), VAR_2);
 if (VAR_8 == ((void*)0))
  return -VAR_1;

 FUNC_9(VAR_7, VAR_8);

 if (FUNC_1(&VAR_7->dev)) {
  VAR_10 = FUNC_8(VAR_7);
  if (VAR_10)
   return VAR_10;
 } else if (VAR_7->dev.of_node) {
  VAR_10 = FUNC_7(VAR_7);
  if (VAR_10)
   return VAR_10;
 } else {
  return -VAR_0;
 }

 if (FUNC_4(VAR_8->backlight_gpio)) {
  VAR_10 = FUNC_2(&VAR_7->dev, VAR_8->backlight_gpio,
    VAR_3, "panel backlight");
  if (VAR_10)
   goto err_gpio;
 }

 VAR_9 = &VAR_8->dssdev;
 VAR_9->dev = &VAR_7->dev;
 VAR_9->driver = &VAR_6;
 VAR_9->type = VAR_4;
 VAR_9->owner = VAR_5;
 VAR_9->panel.timings = VAR_8->videomode;
 VAR_9->phy.dpi.data_lines = VAR_8->data_lines;

 VAR_10 = FUNC_6(VAR_9);
 if (VAR_10) {
  FUNC_0(&VAR_7->dev, "Failed to register panel\n");
  goto err_reg;
 }

 return 0;

err_reg:
err_gpio:
 FUNC_5(VAR_8->in);
 return VAR_10;
}
