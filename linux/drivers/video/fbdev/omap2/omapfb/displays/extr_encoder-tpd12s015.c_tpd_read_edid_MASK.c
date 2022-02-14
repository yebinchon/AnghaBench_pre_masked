
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct panel_drv_data {int ls_oe_gpio; int hpd_gpio; struct omap_dss_device* in; } ;
struct TYPE_4__ {TYPE_1__* hdmi; } ;
struct omap_dss_device {TYPE_2__ ops; } ;
struct TYPE_3__ {int (* read_edid ) (struct omap_dss_device*,int *,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct omap_dss_device*,int *,int) ;
 struct panel_drv_data* FUNC_3 (struct omap_dss_device*) ;

__attribute__((used)) static int FUNC_4(struct omap_dss_device *VAR_1,
  u8 *VAR_2, int VAR_3)
{
 struct panel_drv_data *VAR_4 = FUNC_3(VAR_1);
 struct omap_dss_device *VAR_5 = VAR_4->in;
 int VAR_6;

 if (!FUNC_0(VAR_4->hpd_gpio))
  return -VAR_0;

 FUNC_1(VAR_4->ls_oe_gpio, 1);

 VAR_6 = VAR_5->ops.hdmi->read_edid(VAR_5, VAR_2, VAR_3);

 FUNC_1(VAR_4->ls_oe_gpio, 0);

 return VAR_6;
}
