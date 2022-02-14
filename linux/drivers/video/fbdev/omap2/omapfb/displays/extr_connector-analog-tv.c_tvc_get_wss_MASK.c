
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct panel_drv_data {struct omap_dss_device* in; } ;
struct TYPE_4__ {TYPE_1__* atv; } ;
struct omap_dss_device {TYPE_2__ ops; } ;
struct TYPE_3__ {int (* get_wss ) (struct omap_dss_device*) ;} ;


 int FUNC_0 (struct omap_dss_device*) ;
 struct panel_drv_data* FUNC_1 (struct omap_dss_device*) ;

__attribute__((used)) static u32 FUNC_2(struct omap_dss_device *VAR_0)
{
 struct panel_drv_data *VAR_1 = FUNC_1(VAR_0);
 struct omap_dss_device *VAR_2 = VAR_1->in;

 return VAR_2->ops.atv->get_wss(VAR_2);
}
