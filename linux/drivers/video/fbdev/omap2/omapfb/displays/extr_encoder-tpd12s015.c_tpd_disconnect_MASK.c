
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct panel_drv_data {int dssdev; int ct_cp_hpd_gpio; struct omap_dss_device* in; } ;
struct TYPE_4__ {TYPE_1__* hdmi; } ;
struct omap_dss_device {TYPE_2__ ops; struct omap_dss_device* dst; int * src; } ;
struct TYPE_3__ {int (* disconnect ) (struct omap_dss_device*,int *) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct omap_dss_device*,int *) ;
 struct panel_drv_data* FUNC_3 (struct omap_dss_device*) ;

__attribute__((used)) static void FUNC_4(struct omap_dss_device *VAR_0,
  struct omap_dss_device *VAR_1)
{
 struct panel_drv_data *VAR_2 = FUNC_3(VAR_0);
 struct omap_dss_device *VAR_3 = VAR_2->in;

 FUNC_0(VAR_1 != VAR_0->dst);

 if (VAR_1 != VAR_0->dst)
  return;

 FUNC_1(VAR_2->ct_cp_hpd_gpio, 0);

 VAR_1->src = ((void*)0);
 VAR_0->dst = ((void*)0);

 VAR_3->ops.hdmi->disconnect(VAR_3, &VAR_2->dssdev);
}
