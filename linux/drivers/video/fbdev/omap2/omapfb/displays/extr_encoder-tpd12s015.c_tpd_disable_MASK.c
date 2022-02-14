
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct panel_drv_data {struct omap_dss_device* in; } ;
struct TYPE_4__ {TYPE_1__* hdmi; } ;
struct omap_dss_device {scalar_t__ state; TYPE_2__ ops; } ;
struct TYPE_3__ {int (* disable ) (struct omap_dss_device*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct omap_dss_device*) ;
 struct panel_drv_data* FUNC_1 (struct omap_dss_device*) ;

__attribute__((used)) static void FUNC_2(struct omap_dss_device *VAR_2)
{
 struct panel_drv_data *VAR_3 = FUNC_1(VAR_2);
 struct omap_dss_device *VAR_4 = VAR_3->in;

 if (VAR_2->state != VAR_0)
  return;

 VAR_4->ops.hdmi->disable(VAR_4);

 VAR_2->state = VAR_1;
}
