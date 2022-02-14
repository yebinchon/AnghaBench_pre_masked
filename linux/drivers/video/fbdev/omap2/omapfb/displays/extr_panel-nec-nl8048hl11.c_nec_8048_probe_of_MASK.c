
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct device_node* of_node; } ;
struct spi_device {TYPE_1__ dev; } ;
struct panel_drv_data {int res_gpio; struct omap_dss_device* in; int qvga_gpio; } ;
struct omap_dss_device {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct omap_dss_device*) ;
 int FUNC_1 (struct omap_dss_device*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 struct panel_drv_data* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct device_node*,char*,int ) ;
 struct omap_dss_device* FUNC_6 (struct device_node*) ;

__attribute__((used)) static int FUNC_7(struct spi_device *VAR_1)
{
 struct device_node *VAR_2 = VAR_1->dev.of_node;
 struct panel_drv_data *VAR_3 = FUNC_3(&VAR_1->dev);
 struct omap_dss_device *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_5(VAR_2, "reset-gpios", 0);
 if (!FUNC_4(VAR_5)) {
  FUNC_2(&VAR_1->dev, "failed to parse enable gpio\n");
  return VAR_5;
 }
 VAR_3->res_gpio = VAR_5;


 VAR_3->qvga_gpio = -VAR_0;

 VAR_4 = FUNC_6(VAR_2);
 if (FUNC_0(VAR_4)) {
  FUNC_2(&VAR_1->dev, "failed to find video source\n");
  return FUNC_1(VAR_4);
 }

 VAR_3->in = VAR_4;

 return 0;
}
