
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct panel_drv_data {struct i2c_adapter* i2c_adapter; struct omap_dss_device* in; } ;
struct omap_dss_device {int dummy; } ;
struct i2c_adapter {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct omap_dss_device*) ;
 int FUNC_1 (struct omap_dss_device*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 struct i2c_adapter* FUNC_3 (struct device_node*) ;
 struct device_node* FUNC_4 (struct device_node*,char*,int ) ;
 int FUNC_5 (struct omap_dss_device*) ;
 struct omap_dss_device* FUNC_6 (struct device_node*) ;
 struct panel_drv_data* FUNC_7 (struct platform_device*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_1)
{
 struct panel_drv_data *VAR_2 = FUNC_7(VAR_1);
 struct device_node *VAR_3 = VAR_1->dev.of_node;
 struct omap_dss_device *VAR_4;
 struct device_node *VAR_5;
 struct i2c_adapter *VAR_6;

 VAR_4 = FUNC_6(VAR_3);
 if (FUNC_0(VAR_4)) {
  FUNC_2(&VAR_1->dev, "failed to find video source\n");
  return FUNC_1(VAR_4);
 }

 VAR_2->in = VAR_4;

 VAR_5 = FUNC_4(VAR_3, "ddc-i2c-bus", 0);
 if (VAR_5) {
  VAR_6 = FUNC_3(VAR_5);
  if (VAR_6 == ((void*)0)) {
   FUNC_2(&VAR_1->dev, "failed to parse ddc-i2c-bus\n");
   FUNC_5(VAR_2->in);
   return -VAR_0;
  }

  VAR_2->i2c_adapter = VAR_6;
 }

 return 0;
}
