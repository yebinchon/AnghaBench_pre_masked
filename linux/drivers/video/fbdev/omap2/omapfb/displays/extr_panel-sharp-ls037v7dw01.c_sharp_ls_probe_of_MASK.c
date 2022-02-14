
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct panel_drv_data {struct omap_dss_device* in; int ud_gpio; int lr_gpio; int mo_gpio; int resb_gpio; int ini_gpio; struct omap_dss_device* vcc; } ;
struct omap_dss_device {int dummy; } ;
struct device_node {int dummy; } ;


 scalar_t__ FUNC_0 (struct omap_dss_device*) ;
 int FUNC_1 (struct omap_dss_device*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 struct omap_dss_device* FUNC_3 (TYPE_1__*,char*) ;
 struct omap_dss_device* FUNC_4 (struct device_node*) ;
 struct panel_drv_data* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (TYPE_1__*,int,int,char*,int *) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_0)
{
 struct panel_drv_data *VAR_1 = FUNC_5(VAR_0);
 struct device_node *VAR_2 = VAR_0->dev.of_node;
 struct omap_dss_device *VAR_3;
 int VAR_4;

 VAR_1->vcc = FUNC_3(&VAR_0->dev, "envdd");
 if (FUNC_0(VAR_1->vcc)) {
  FUNC_2(&VAR_0->dev, "failed to get regulator\n");
  return FUNC_1(VAR_1->vcc);
 }


 VAR_4 = FUNC_6(&VAR_0->dev, 0, 0, "enable", &VAR_1->ini_gpio);
 if (VAR_4)
  return VAR_4;


 VAR_4 = FUNC_6(&VAR_0->dev, 0, 0, "reset", &VAR_1->resb_gpio);
 if (VAR_4)
  return VAR_4;


 VAR_4 = FUNC_6(&VAR_0->dev, 0, 0, "mode", &VAR_1->mo_gpio);
 if (VAR_4)
  return VAR_4;


 VAR_4 = FUNC_6(&VAR_0->dev, 1, 1, "mode", &VAR_1->lr_gpio);
 if (VAR_4)
  return VAR_4;


 VAR_4 = FUNC_6(&VAR_0->dev, 2, 1, "mode", &VAR_1->ud_gpio);
 if (VAR_4)
  return VAR_4;

 VAR_3 = FUNC_4(VAR_2);
 if (FUNC_0(VAR_3)) {
  FUNC_2(&VAR_0->dev, "failed to find video source\n");
  return FUNC_1(VAR_3);
 }

 VAR_1->in = VAR_3;

 return 0;
}
