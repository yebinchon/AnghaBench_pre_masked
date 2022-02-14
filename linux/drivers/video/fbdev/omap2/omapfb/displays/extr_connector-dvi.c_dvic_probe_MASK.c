
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_4__ {void* timings; } ;
struct omap_dss_device {TYPE_1__ panel; int owner; int type; TYPE_2__* dev; int * driver; } ;
struct panel_drv_data {int i2c_adapter; int in; struct omap_dss_device dssdev; void* timings; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 struct panel_drv_data* FUNC_1 (TYPE_2__*,int,int ) ;
 void* VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct omap_dss_device*) ;
 int FUNC_6 (struct platform_device*,struct panel_drv_data*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_7)
{
 struct panel_drv_data *VAR_8;
 struct omap_dss_device *VAR_9;
 int VAR_10;

 if (!VAR_7->dev.of_node)
  return -VAR_0;

 VAR_8 = FUNC_1(&VAR_7->dev, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 FUNC_6(VAR_7, VAR_8);

 VAR_10 = FUNC_2(VAR_7);
 if (VAR_10)
  return VAR_10;

 VAR_8->timings = VAR_5;

 VAR_9 = &VAR_8->dssdev;
 VAR_9->driver = &VAR_6;
 VAR_9->dev = &VAR_7->dev;
 VAR_9->type = VAR_3;
 VAR_9->owner = VAR_4;
 VAR_9->panel.timings = VAR_5;

 VAR_10 = FUNC_5(VAR_9);
 if (VAR_10) {
  FUNC_0(&VAR_7->dev, "Failed to register panel\n");
  goto err_reg;
 }

 return 0;

err_reg:
 FUNC_4(VAR_8->in);

 FUNC_3(VAR_8->i2c_adapter);

 return VAR_10;
}
