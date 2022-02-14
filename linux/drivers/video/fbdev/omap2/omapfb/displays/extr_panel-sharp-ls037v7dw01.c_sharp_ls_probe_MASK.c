
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int of_node; } ;
struct platform_device {TYPE_4__ dev; } ;
struct TYPE_7__ {int data_lines; } ;
struct TYPE_8__ {TYPE_2__ dpi; } ;
struct TYPE_6__ {int timings; } ;
struct omap_dss_device {TYPE_3__ phy; TYPE_1__ panel; int owner; int type; int * driver; TYPE_4__* dev; } ;
struct panel_drv_data {int in; int data_lines; int videomode; struct omap_dss_device dssdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_4__*,char*) ;
 struct panel_drv_data* FUNC_1 (TYPE_4__*,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct omap_dss_device*) ;
 int FUNC_4 (struct platform_device*,struct panel_drv_data*) ;
 int VAR_5 ;
 int FUNC_5 (struct platform_device*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_7)
{
 struct panel_drv_data *VAR_8;
 struct omap_dss_device *VAR_9;
 int VAR_10;

 if (!VAR_7->dev.of_node)
  return -VAR_0;

 VAR_8 = FUNC_1(&VAR_7->dev, sizeof(*VAR_8), VAR_2);
 if (VAR_8 == ((void*)0))
  return -VAR_1;

 FUNC_4(VAR_7, VAR_8);

 VAR_10 = FUNC_5(VAR_7);
 if (VAR_10)
  return VAR_10;

 VAR_8->videomode = VAR_6;

 VAR_9 = &VAR_8->dssdev;
 VAR_9->dev = &VAR_7->dev;
 VAR_9->driver = &VAR_5;
 VAR_9->type = VAR_3;
 VAR_9->owner = VAR_4;
 VAR_9->panel.timings = VAR_8->videomode;
 VAR_9->phy.dpi.data_lines = VAR_8->data_lines;

 VAR_10 = FUNC_3(VAR_9);
 if (VAR_10) {
  FUNC_0(&VAR_7->dev, "Failed to register panel\n");
  goto err_reg;
 }

 return 0;

err_reg:
 FUNC_2(VAR_8->in);
 return VAR_10;
}
