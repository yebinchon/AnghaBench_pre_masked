
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int of_node; } ;
struct spi_device {TYPE_4__ dev; } ;
struct TYPE_9__ {int data_lines; } ;
struct TYPE_10__ {TYPE_2__ dpi; } ;
struct TYPE_8__ {int timings; } ;
struct omap_dss_device {TYPE_3__ phy; TYPE_1__ panel; int owner; int type; int * driver; TYPE_4__* dev; } ;
struct panel_drv_data {int in; int data_lines; int videomode; struct omap_dss_device dssdev; int backlight_gpio; struct spi_device* spi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_4__*,char*) ;
 int FUNC_1 (TYPE_4__*,struct panel_drv_data*) ;
 int FUNC_2 (TYPE_4__*,int ,int ,char*) ;
 struct panel_drv_data* FUNC_3 (TYPE_4__*,int,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_6 ;
 int FUNC_5 (struct spi_device*) ;
 int VAR_7 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct omap_dss_device*) ;

__attribute__((used)) static int FUNC_8(struct spi_device *VAR_8)
{
 struct panel_drv_data *VAR_9;
 struct omap_dss_device *VAR_10;
 int VAR_11;

 if (!VAR_8->dev.of_node)
  return -VAR_0;

 VAR_9 = FUNC_3(&VAR_8->dev, sizeof(*VAR_9), VAR_2);
 if (VAR_9 == ((void*)0))
  return -VAR_1;

 FUNC_1(&VAR_8->dev, VAR_9);

 VAR_9->spi = VAR_8;

 VAR_11 = FUNC_5(VAR_8);
 if (VAR_11)
  return VAR_11;

 if (FUNC_4(VAR_9->backlight_gpio)) {
  VAR_11 = FUNC_2(&VAR_8->dev, VAR_9->backlight_gpio,
    VAR_3, "panel backlight");
  if (VAR_11)
   goto err_gpio;
 }

 VAR_9->videomode = VAR_7;

 VAR_10 = &VAR_9->dssdev;
 VAR_10->dev = &VAR_8->dev;
 VAR_10->driver = &VAR_6;
 VAR_10->type = VAR_4;
 VAR_10->owner = VAR_5;
 VAR_10->panel.timings = VAR_9->videomode;
 VAR_10->phy.dpi.data_lines = VAR_9->data_lines;

 VAR_11 = FUNC_7(VAR_10);
 if (VAR_11) {
  FUNC_0(&VAR_8->dev, "Failed to register panel\n");
  goto err_reg;
 }

 return 0;

err_reg:
err_gpio:
 FUNC_6(VAR_9->in);
 return VAR_11;
}
