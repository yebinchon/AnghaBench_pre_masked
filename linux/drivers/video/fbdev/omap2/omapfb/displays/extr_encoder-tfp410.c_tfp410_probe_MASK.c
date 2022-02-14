
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int of_node; } ;
struct platform_device {TYPE_4__ dev; } ;
struct TYPE_8__ {int data_lines; } ;
struct TYPE_9__ {TYPE_2__ dpi; } ;
struct TYPE_7__ {int * dvi; } ;
struct omap_dss_device {int port_num; TYPE_3__ phy; int owner; int output_type; int type; TYPE_4__* dev; TYPE_1__ ops; } ;
struct panel_drv_data {int in; int data_lines; struct omap_dss_device dssdev; int pd_gpio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_4__*,char*,...) ;
 int FUNC_1 (TYPE_4__*,int ,int ,char*) ;
 struct panel_drv_data* FUNC_2 (TYPE_4__*,int,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct omap_dss_device*) ;
 int FUNC_6 (struct platform_device*,struct panel_drv_data*) ;
 int VAR_7 ;
 int FUNC_7 (struct platform_device*) ;

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

 FUNC_6(VAR_8, VAR_9);

 VAR_11 = FUNC_7(VAR_8);
 if (VAR_11)
  return VAR_11;

 if (FUNC_3(VAR_9->pd_gpio)) {
  VAR_11 = FUNC_1(&VAR_8->dev, VAR_9->pd_gpio,
    VAR_3, "tfp410 PD");
  if (VAR_11) {
   FUNC_0(&VAR_8->dev, "Failed to request PD GPIO %d\n",
     VAR_9->pd_gpio);
   goto err_gpio;
  }
 }

 VAR_10 = &VAR_9->dssdev;
 VAR_10->ops.dvi = &VAR_7;
 VAR_10->dev = &VAR_8->dev;
 VAR_10->type = VAR_4;
 VAR_10->output_type = VAR_5;
 VAR_10->owner = VAR_6;
 VAR_10->phy.dpi.data_lines = VAR_9->data_lines;
 VAR_10->port_num = 1;

 VAR_11 = FUNC_5(VAR_10);
 if (VAR_11) {
  FUNC_0(&VAR_8->dev, "Failed to register output\n");
  goto err_reg;
 }

 return 0;
err_reg:
err_gpio:
 FUNC_4(VAR_9->in);
 return VAR_11;
}
