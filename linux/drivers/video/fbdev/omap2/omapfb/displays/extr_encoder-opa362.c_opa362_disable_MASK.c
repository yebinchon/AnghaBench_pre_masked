
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct panel_drv_data {scalar_t__ enable_gpio; struct omap_dss_device* in; } ;
struct TYPE_4__ {TYPE_1__* atv; } ;
struct omap_dss_device {int state; TYPE_2__ ops; int dev; } ;
struct TYPE_3__ {int (* disable ) (struct omap_dss_device*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct omap_dss_device*) ;
 int FUNC_3 (struct omap_dss_device*) ;
 struct panel_drv_data* FUNC_4 (struct omap_dss_device*) ;

__attribute__((used)) static void FUNC_5(struct omap_dss_device *VAR_1)
{
 struct panel_drv_data *VAR_2 = FUNC_4(VAR_1);
 struct omap_dss_device *VAR_3 = VAR_2->in;

 FUNC_0(VAR_1->dev, "disable\n");

 if (!FUNC_2(VAR_1))
  return;

 if (VAR_2->enable_gpio)
  FUNC_1(VAR_2->enable_gpio, 0);

 VAR_3->ops.atv->disable(VAR_3);

 VAR_1->state = VAR_0;
}
