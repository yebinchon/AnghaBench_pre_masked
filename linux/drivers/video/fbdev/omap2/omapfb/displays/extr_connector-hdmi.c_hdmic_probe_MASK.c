
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_5__ {void* timings; } ;
struct omap_dss_device {TYPE_1__ panel; int owner; int type; TYPE_2__* dev; int * driver; } ;
struct panel_drv_data {int in; struct omap_dss_device dssdev; void* timings; int hpd_gpio; TYPE_2__* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (TYPE_2__*,int ,int ,char*) ;
 struct panel_drv_data* FUNC_2 (TYPE_2__*,int,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 void* VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct platform_device*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct omap_dss_device*) ;
 int FUNC_7 (struct platform_device*,struct panel_drv_data*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_8)
{
 struct panel_drv_data *VAR_9;
 struct omap_dss_device *VAR_10;
 int VAR_11;

 if (!VAR_8->dev.of_node)
  return -VAR_0;

 VAR_9 = FUNC_2(&VAR_8->dev, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 FUNC_7(VAR_8, VAR_9);
 VAR_9->dev = &VAR_8->dev;

 VAR_11 = FUNC_4(VAR_8);
 if (VAR_11)
  return VAR_11;

 if (FUNC_3(VAR_9->hpd_gpio)) {
  VAR_11 = FUNC_1(&VAR_8->dev, VAR_9->hpd_gpio,
    VAR_3, "hdmi_hpd");
  if (VAR_11)
   goto err_reg;
 }

 VAR_9->timings = VAR_6;

 VAR_10 = &VAR_9->dssdev;
 VAR_10->driver = &VAR_7;
 VAR_10->dev = &VAR_8->dev;
 VAR_10->type = VAR_4;
 VAR_10->owner = VAR_5;
 VAR_10->panel.timings = VAR_6;

 VAR_11 = FUNC_6(VAR_10);
 if (VAR_11) {
  FUNC_0(&VAR_8->dev, "Failed to register panel\n");
  goto err_reg;
 }

 return 0;
err_reg:
 FUNC_5(VAR_9->in);
 return VAR_11;
}
