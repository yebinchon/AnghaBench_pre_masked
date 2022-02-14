
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct panel_drv_data {int lock; TYPE_3__* pdev; struct omap_dss_device* in; } ;
struct TYPE_5__ {TYPE_1__* dsi; } ;
struct omap_dss_device {int state; TYPE_2__ ops; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_4__ {int (* bus_unlock ) (struct omap_dss_device*) ;int (* bus_lock ) (struct omap_dss_device*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct panel_drv_data*) ;
 int FUNC_2 (struct panel_drv_data*) ;
 int FUNC_3 (struct panel_drv_data*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct omap_dss_device*) ;
 int FUNC_7 (struct omap_dss_device*) ;
 int FUNC_8 (struct omap_dss_device*) ;
 struct panel_drv_data* FUNC_9 (struct omap_dss_device*) ;

__attribute__((used)) static void FUNC_10(struct omap_dss_device *VAR_1)
{
 struct panel_drv_data *VAR_2 = FUNC_9(VAR_1);
 struct omap_dss_device *VAR_3 = VAR_2->in;
 int VAR_4;

 FUNC_0(&VAR_2->pdev->dev, "disable\n");

 FUNC_4(&VAR_2->lock);

 FUNC_1(VAR_2);

 VAR_3->ops.dsi->bus_lock(VAR_3);

 if (FUNC_6(VAR_1)) {
  VAR_4 = FUNC_3(VAR_2);
  if (!VAR_4)
   FUNC_2(VAR_2);
 }

 VAR_3->ops.dsi->bus_unlock(VAR_3);

 VAR_1->state = VAR_0;

 FUNC_5(&VAR_2->lock);
}
