
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_6__ {int * atv; } ;
struct omap_dss_device {int owner; void* output_type; void* type; TYPE_2__* dev; TYPE_1__ ops; } ;
struct panel_drv_data {struct omap_dss_device* in; struct omap_dss_device dssdev; struct omap_dss_device* enable_gpio; } ;
struct gpio_desc {int owner; void* output_type; void* type; TYPE_2__* dev; TYPE_1__ ops; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct omap_dss_device*) ;
 void* VAR_4 ;
 int FUNC_1 (struct omap_dss_device*) ;
 int VAR_5 ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 struct omap_dss_device* FUNC_4 (TYPE_2__*,char*,int ) ;
 struct panel_drv_data* FUNC_5 (TYPE_2__*,int,int ) ;
 int FUNC_6 (struct omap_dss_device*) ;
 struct omap_dss_device* FUNC_7 (struct device_node*) ;
 int FUNC_8 (struct omap_dss_device*) ;
 int VAR_6 ;
 int FUNC_9 (struct platform_device*,struct panel_drv_data*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_7)
{
 struct device_node *VAR_8 = VAR_7->dev.of_node;
 struct panel_drv_data *VAR_9;
 struct omap_dss_device *VAR_10, *VAR_11;
 struct gpio_desc *VAR_12;
 int VAR_13;

 FUNC_2(&VAR_7->dev, "probe\n");

 if (VAR_8 == ((void*)0)) {
  FUNC_3(&VAR_7->dev, "Unable to find device tree\n");
  return -VAR_0;
 }

 VAR_9 = FUNC_5(&VAR_7->dev, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 FUNC_9(VAR_7, VAR_9);

 VAR_12 = FUNC_4(&VAR_7->dev, "enable", VAR_3);
 if (FUNC_0(VAR_12))
  return FUNC_1(VAR_12);

 VAR_9->enable_gpio = VAR_12;

 VAR_11 = FUNC_7(VAR_8);
 if (FUNC_0(VAR_11)) {
  FUNC_3(&VAR_7->dev, "failed to find video source\n");
  return FUNC_1(VAR_11);
 }

 VAR_9->in = VAR_11;

 VAR_10 = &VAR_9->dssdev;
 VAR_10->ops.atv = &VAR_6;
 VAR_10->dev = &VAR_7->dev;
 VAR_10->type = VAR_4;
 VAR_10->output_type = VAR_4;
 VAR_10->owner = VAR_5;

 VAR_13 = FUNC_8(VAR_10);
 if (VAR_13) {
  FUNC_3(&VAR_7->dev, "Failed to register output\n");
  goto err_reg;
 }

 return 0;
err_reg:
 FUNC_6(VAR_9->in);
 return VAR_13;
}
