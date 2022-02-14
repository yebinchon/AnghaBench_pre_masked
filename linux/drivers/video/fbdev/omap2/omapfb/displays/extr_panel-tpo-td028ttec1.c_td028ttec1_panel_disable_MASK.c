
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct panel_drv_data {struct omap_dss_device* in; } ;
struct TYPE_4__ {TYPE_1__* dpi; } ;
struct omap_dss_device {int state; TYPE_2__ ops; int dev; } ;
struct TYPE_3__ {int (* disable ) (struct omap_dss_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct panel_drv_data*,int ,int) ;
 int FUNC_2 (struct panel_drv_data*,int ,int) ;
 int FUNC_3 (struct panel_drv_data*,int ) ;
 int FUNC_4 (struct omap_dss_device*) ;
 int FUNC_5 (struct omap_dss_device*) ;
 struct panel_drv_data* FUNC_6 (struct omap_dss_device*) ;

__attribute__((used)) static void FUNC_7(struct omap_dss_device *VAR_5)
{
 struct panel_drv_data *VAR_6 = FUNC_6(VAR_5);
 struct omap_dss_device *VAR_7 = VAR_6->in;

 if (!FUNC_4(VAR_5))
  return;

 FUNC_0(VAR_5->dev, "td028ttec1_panel_disable()\n");

 FUNC_3(VAR_6, VAR_0);
 FUNC_2(VAR_6, VAR_1, 0x8002);
 FUNC_3(VAR_6, VAR_3);
 FUNC_1(VAR_6, VAR_2, 0x00);

 VAR_7->ops.dpi->disable(VAR_7);

 VAR_5->state = VAR_4;
}
