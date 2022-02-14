
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct panel_drv_data {int hmirror; } ;
struct omap_dss_device {int dev; } ;


 struct panel_drv_data* FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct omap_dss_device *VAR_0)
{
 struct panel_drv_data *VAR_1 = FUNC_0(VAR_0->dev);

 return VAR_1->hmirror;
}
