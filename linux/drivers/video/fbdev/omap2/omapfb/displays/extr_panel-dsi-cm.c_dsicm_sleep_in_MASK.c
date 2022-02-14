
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct panel_drv_data {int channel; struct omap_dss_device* in; } ;
struct TYPE_4__ {TYPE_1__* dsi; } ;
struct omap_dss_device {TYPE_2__ ops; } ;
struct TYPE_3__ {int (* dcs_write_nosync ) (struct omap_dss_device*,int ,int *,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct panel_drv_data*,int) ;
 int FUNC_1 (struct panel_drv_data*) ;
 int FUNC_2 (struct omap_dss_device*,int ,int *,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct panel_drv_data *VAR_1)

{
 struct omap_dss_device *VAR_2 = VAR_1->in;
 u8 VAR_3;
 int VAR_4;

 FUNC_1(VAR_1);

 VAR_3 = VAR_0;
 VAR_4 = VAR_2->ops.dsi->dcs_write_nosync(VAR_2, VAR_1->channel, &VAR_3, 1);
 if (VAR_4)
  return VAR_4;

 FUNC_0(VAR_1, 120);

 FUNC_3(5000, 10000);

 return 0;
}
