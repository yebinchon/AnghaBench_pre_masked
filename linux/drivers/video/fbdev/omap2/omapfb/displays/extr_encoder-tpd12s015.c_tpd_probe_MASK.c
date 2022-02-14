
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_6__ {int * hdmi; } ;
struct omap_dss_device {int port_num; int owner; void* output_type; void* type; TYPE_2__* dev; TYPE_1__ ops; } ;
struct panel_drv_data {int in; struct omap_dss_device dssdev; struct gpio_desc* hpd_gpio; struct gpio_desc* ls_oe_gpio; struct gpio_desc* ct_cp_hpd_gpio; } ;
struct gpio_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct gpio_desc*) ;
 void* VAR_5 ;
 int FUNC_1 (struct gpio_desc*) ;
 int VAR_6 ;
 int FUNC_2 (TYPE_2__*,char*) ;
 struct gpio_desc* FUNC_3 (TYPE_2__*,int *,int,int ) ;
 struct gpio_desc* FUNC_4 (TYPE_2__*,int *,int,int ) ;
 struct panel_drv_data* FUNC_5 (TYPE_2__*,int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct omap_dss_device*) ;
 int FUNC_8 (struct platform_device*,struct panel_drv_data*) ;
 int VAR_7 ;
 int FUNC_9 (struct platform_device*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_8)
{
 struct omap_dss_device *VAR_9;
 struct panel_drv_data *VAR_10;
 int VAR_11;
 struct gpio_desc *VAR_12;

 VAR_10 = FUNC_5(&VAR_8->dev, sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 FUNC_8(VAR_8, VAR_10);

 if (VAR_8->dev.of_node) {
  VAR_11 = FUNC_9(VAR_8);
  if (VAR_11)
   return VAR_11;
 } else {
  return -VAR_0;
 }

 VAR_12 = FUNC_4(&VAR_8->dev, ((void*)0), 0,
  VAR_4);
 if (FUNC_0(VAR_12)) {
  VAR_11 = FUNC_1(VAR_12);
  goto err_gpio;
 }

 VAR_10->ct_cp_hpd_gpio = VAR_12;

 VAR_12 = FUNC_4(&VAR_8->dev, ((void*)0), 1,
  VAR_4);
 if (FUNC_0(VAR_12)) {
  VAR_11 = FUNC_1(VAR_12);
  goto err_gpio;
 }

 VAR_10->ls_oe_gpio = VAR_12;

 VAR_12 = FUNC_3(&VAR_8->dev, ((void*)0), 2,
  VAR_3);
 if (FUNC_0(VAR_12)) {
  VAR_11 = FUNC_1(VAR_12);
  goto err_gpio;
 }

 VAR_10->hpd_gpio = VAR_12;

 VAR_9 = &VAR_10->dssdev;
 VAR_9->ops.hdmi = &VAR_7;
 VAR_9->dev = &VAR_8->dev;
 VAR_9->type = VAR_5;
 VAR_9->output_type = VAR_5;
 VAR_9->owner = VAR_6;
 VAR_9->port_num = 1;

 VAR_11 = FUNC_7(VAR_9);
 if (VAR_11) {
  FUNC_2(&VAR_8->dev, "Failed to register output\n");
  goto err_reg;
 }

 return 0;
err_reg:
err_gpio:
 FUNC_6(VAR_10->in);
 return VAR_11;
}
