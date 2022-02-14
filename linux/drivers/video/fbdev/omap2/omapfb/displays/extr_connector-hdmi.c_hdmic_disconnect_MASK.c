
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct panel_drv_data {int dev; struct omap_dss_device* in; } ;
struct TYPE_4__ {TYPE_1__* hdmi; } ;
struct omap_dss_device {TYPE_2__ ops; } ;
struct TYPE_3__ {int (* disconnect ) (struct omap_dss_device*,struct omap_dss_device*) ;} ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct omap_dss_device*) ;
 int FUNC_2 (struct omap_dss_device*,struct omap_dss_device*) ;
 struct panel_drv_data* FUNC_3 (struct omap_dss_device*) ;

__attribute__((used)) static void FUNC_4(struct omap_dss_device *VAR_0)
{
 struct panel_drv_data *VAR_1 = FUNC_3(VAR_0);
 struct omap_dss_device *VAR_2 = VAR_1->in;

 FUNC_0(VAR_1->dev, "disconnect\n");

 if (!FUNC_1(VAR_0))
  return;

 VAR_2->ops.hdmi->disconnect(VAR_2, VAR_0);
}
