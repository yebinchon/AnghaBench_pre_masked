
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct panel_drv_data {scalar_t__ ct_cp_hpd_gpio; struct omap_dss_device* in; } ;
struct TYPE_4__ {TYPE_1__* hdmi; } ;
struct omap_dss_device {struct omap_dss_device* dst; struct omap_dss_device* src; TYPE_2__ ops; } ;
struct TYPE_3__ {int (* connect ) (struct omap_dss_device*,struct omap_dss_device*) ;} ;


 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (struct omap_dss_device*,struct omap_dss_device*) ;
 struct panel_drv_data* FUNC_2 (struct omap_dss_device*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct omap_dss_device *VAR_0,
  struct omap_dss_device *VAR_1)
{
 struct panel_drv_data *VAR_2 = FUNC_2(VAR_0);
 struct omap_dss_device *VAR_3 = VAR_2->in;
 int VAR_4;

 VAR_4 = VAR_3->ops.hdmi->connect(VAR_3, VAR_0);
 if (VAR_4)
  return VAR_4;

 VAR_1->src = VAR_0;
 VAR_0->dst = VAR_1;

 if (VAR_2->ct_cp_hpd_gpio) {
  FUNC_0(VAR_2->ct_cp_hpd_gpio, 1);

  FUNC_3(300);
 }

 return 0;
}
