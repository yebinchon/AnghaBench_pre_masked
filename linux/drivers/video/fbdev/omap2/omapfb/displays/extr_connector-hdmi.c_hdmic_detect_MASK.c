
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct panel_drv_data {int hpd_gpio; struct omap_dss_device* in; } ;
struct TYPE_4__ {TYPE_1__* hdmi; } ;
struct omap_dss_device {TYPE_2__ ops; } ;
struct TYPE_3__ {int (* detect ) (struct omap_dss_device*) ;} ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct omap_dss_device*) ;
 struct panel_drv_data* FUNC_3 (struct omap_dss_device*) ;

__attribute__((used)) static bool FUNC_4(struct omap_dss_device *VAR_0)
{
 struct panel_drv_data *VAR_1 = FUNC_3(VAR_0);
 struct omap_dss_device *VAR_2 = VAR_1->in;

 if (FUNC_1(VAR_1->hpd_gpio))
  return FUNC_0(VAR_1->hpd_gpio);
 else
  return VAR_2->ops.hdmi->detect(VAR_2);
}
