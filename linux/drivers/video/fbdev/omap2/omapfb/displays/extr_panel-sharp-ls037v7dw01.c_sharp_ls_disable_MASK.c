
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct panel_drv_data {scalar_t__ vcc; scalar_t__ resb_gpio; scalar_t__ ini_gpio; struct omap_dss_device* in; } ;
struct TYPE_4__ {TYPE_1__* dpi; } ;
struct omap_dss_device {int state; TYPE_2__ ops; } ;
struct TYPE_3__ {int (* disable ) (struct omap_dss_device*) ;} ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct omap_dss_device*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct omap_dss_device*) ;
 struct panel_drv_data* FUNC_5 (struct omap_dss_device*) ;

__attribute__((used)) static void FUNC_6(struct omap_dss_device *VAR_1)
{
 struct panel_drv_data *VAR_2 = FUNC_5(VAR_1);
 struct omap_dss_device *VAR_3 = VAR_2->in;

 if (!FUNC_2(VAR_1))
  return;

 if (VAR_2->ini_gpio)
  FUNC_0(VAR_2->ini_gpio, 0);

 if (VAR_2->resb_gpio)
  FUNC_0(VAR_2->resb_gpio, 0);



 FUNC_1(100);

 VAR_3->ops.dpi->disable(VAR_3);

 if (VAR_2->vcc)
  FUNC_3(VAR_2->vcc);

 VAR_1->state = VAR_0;
}
