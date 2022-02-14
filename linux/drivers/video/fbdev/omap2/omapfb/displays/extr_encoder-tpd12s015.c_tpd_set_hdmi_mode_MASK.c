
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct panel_drv_data {struct omap_dss_device* in; } ;
struct TYPE_4__ {TYPE_1__* hdmi; } ;
struct omap_dss_device {TYPE_2__ ops; } ;
struct TYPE_3__ {int (* set_hdmi_mode ) (struct omap_dss_device*,int) ;} ;


 int FUNC_0 (struct omap_dss_device*,int) ;
 struct panel_drv_data* FUNC_1 (struct omap_dss_device*) ;

__attribute__((used)) static int FUNC_2(struct omap_dss_device *VAR_0,
  bool VAR_1)
{
 struct panel_drv_data *VAR_2 = FUNC_1(VAR_0);
 struct omap_dss_device *VAR_3 = VAR_2->in;

 return VAR_3->ops.hdmi->set_hdmi_mode(VAR_3, VAR_1);
}
