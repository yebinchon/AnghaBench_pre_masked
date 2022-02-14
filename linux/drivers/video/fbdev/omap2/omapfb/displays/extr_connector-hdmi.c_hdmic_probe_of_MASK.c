
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct panel_drv_data {int hpd_gpio; struct omap_dss_device* in; } ;
struct omap_dss_device {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct omap_dss_device*) ;
 int FUNC_1 (struct omap_dss_device*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct device_node*,char*,int ) ;
 struct omap_dss_device* FUNC_5 (struct device_node*) ;
 struct panel_drv_data* FUNC_6 (struct platform_device*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_1)
{
 struct panel_drv_data *VAR_2 = FUNC_6(VAR_1);
 struct device_node *VAR_3 = VAR_1->dev.of_node;
 struct omap_dss_device *VAR_4;
 int VAR_5;


 VAR_5 = FUNC_4(VAR_3, "hpd-gpios", 0);
 if (FUNC_3(VAR_5))
  VAR_2->hpd_gpio = VAR_5;
 else
  VAR_2->hpd_gpio = -VAR_0;

 VAR_4 = FUNC_5(VAR_3);
 if (FUNC_0(VAR_4)) {
  FUNC_2(&VAR_1->dev, "failed to find video source\n");
  return FUNC_1(VAR_4);
 }

 VAR_2->in = VAR_4;

 return 0;
}
