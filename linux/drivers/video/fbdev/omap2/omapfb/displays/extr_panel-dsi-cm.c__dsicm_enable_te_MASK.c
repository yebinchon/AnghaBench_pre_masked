
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct panel_drv_data {int ext_te_gpio; struct omap_dss_device* in; } ;
struct TYPE_4__ {TYPE_1__* dsi; } ;
struct omap_dss_device {TYPE_2__ ops; } ;
struct TYPE_3__ {int (* enable_te ) (struct omap_dss_device*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct panel_drv_data*,int ) ;
 int FUNC_1 (struct panel_drv_data*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct omap_dss_device*,int) ;

__attribute__((used)) static int FUNC_5(struct panel_drv_data *VAR_2, bool VAR_3)
{
 struct omap_dss_device *VAR_4 = VAR_2->in;
 int VAR_5;

 if (VAR_3)
  VAR_5 = FUNC_1(VAR_2, VAR_1, 0);
 else
  VAR_5 = FUNC_0(VAR_2, VAR_0);

 if (!FUNC_2(VAR_2->ext_te_gpio))
  VAR_4->ops.dsi->enable_te(VAR_4, VAR_3);


 FUNC_3(100);

 return VAR_5;
}
