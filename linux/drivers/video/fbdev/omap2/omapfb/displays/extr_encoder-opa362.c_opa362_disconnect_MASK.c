
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct panel_drv_data {int dssdev; struct omap_dss_device* in; } ;
struct TYPE_4__ {TYPE_1__* atv; } ;
struct omap_dss_device {TYPE_2__ ops; struct omap_dss_device* dst; int * src; int dev; } ;
struct TYPE_3__ {int (* disconnect ) (struct omap_dss_device*,int *) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct omap_dss_device*) ;
 int FUNC_3 (struct omap_dss_device*,int *) ;
 struct panel_drv_data* FUNC_4 (struct omap_dss_device*) ;

__attribute__((used)) static void FUNC_5(struct omap_dss_device *VAR_0,
  struct omap_dss_device *VAR_1)
{
 struct panel_drv_data *VAR_2 = FUNC_4(VAR_0);
 struct omap_dss_device *VAR_3 = VAR_2->in;

 FUNC_1(VAR_0->dev, "disconnect\n");

 FUNC_0(!FUNC_2(VAR_0));
 if (!FUNC_2(VAR_0))
  return;

 FUNC_0(VAR_1 != VAR_0->dst);
 if (VAR_1 != VAR_0->dst)
  return;

 VAR_1->src = ((void*)0);
 VAR_0->dst = ((void*)0);

 VAR_3->ops.atv->disconnect(VAR_3, &VAR_2->dssdev);
}
