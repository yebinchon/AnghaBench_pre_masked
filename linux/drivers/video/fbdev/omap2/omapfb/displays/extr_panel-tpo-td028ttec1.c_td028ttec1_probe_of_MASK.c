
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct device_node* of_node; } ;
struct spi_device {TYPE_1__ dev; } ;
struct panel_drv_data {struct omap_dss_device* in; } ;
struct omap_dss_device {int dummy; } ;
struct device_node {int dummy; } ;


 scalar_t__ FUNC_0 (struct omap_dss_device*) ;
 int FUNC_1 (struct omap_dss_device*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 struct panel_drv_data* FUNC_3 (TYPE_1__*) ;
 struct omap_dss_device* FUNC_4 (struct device_node*) ;

__attribute__((used)) static int FUNC_5(struct spi_device *VAR_0)
{
 struct device_node *VAR_1 = VAR_0->dev.of_node;
 struct panel_drv_data *VAR_2 = FUNC_3(&VAR_0->dev);
 struct omap_dss_device *VAR_3;

 VAR_3 = FUNC_4(VAR_1);
 if (FUNC_0(VAR_3)) {
  FUNC_2(&VAR_0->dev, "failed to find video source\n");
  return FUNC_1(VAR_3);
 }

 VAR_2->in = VAR_3;

 return 0;
}
