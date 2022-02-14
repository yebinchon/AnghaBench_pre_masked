
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
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct panel_drv_data*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct omap_dss_device*) ;
 scalar_t__ FUNC_5 (struct omap_dss_device*) ;
 int FUNC_6 (struct omap_dss_device*) ;
 int FUNC_7 (struct omap_dss_device*) ;
 struct panel_drv_data* FUNC_8 (struct omap_dss_device*) ;

__attribute__((used)) static int FUNC_9(struct omap_dss_device *VAR_2)
{
 struct panel_drv_data *VAR_3 = FUNC_8(VAR_2);
 struct omap_dss_device *VAR_4 = VAR_3->in;
 int VAR_5;

 FUNC_0(&VAR_3->pdev->dev, "enable\n");

 FUNC_2(&VAR_3->lock);

 if (!FUNC_4(VAR_2)) {
  VAR_5 = -VAR_0;
  goto err;
 }

 if (FUNC_5(VAR_2)) {
  VAR_5 = 0;
  goto err;
 }

 VAR_4->ops.dsi->bus_lock(VAR_4);

 VAR_5 = FUNC_1(VAR_3);

 VAR_4->ops.dsi->bus_unlock(VAR_4);

 if (VAR_5)
  goto err;

 VAR_2->state = VAR_1;

 FUNC_3(&VAR_3->lock);

 return 0;
err:
 FUNC_0(&VAR_3->pdev->dev, "enable failed\n");
 FUNC_3(&VAR_3->lock);
 return VAR_5;
}
