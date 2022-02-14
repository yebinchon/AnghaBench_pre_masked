
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct panel_drv_data {struct omap_dss_device* in; } ;
struct TYPE_4__ {TYPE_1__* hdmi; } ;
struct omap_dss_device {TYPE_2__ ops; } ;
struct TYPE_3__ {int (* read_edid ) (struct omap_dss_device*,int *,int) ;} ;


 int FUNC_0 (struct omap_dss_device*,int *,int) ;
 struct panel_drv_data* FUNC_1 (struct omap_dss_device*) ;

__attribute__((used)) static int FUNC_2(struct omap_dss_device *VAR_0,
  u8 *VAR_1, int VAR_2)
{
 struct panel_drv_data *VAR_3 = FUNC_1(VAR_0);
 struct omap_dss_device *VAR_4 = VAR_3->in;

 return VAR_4->ops.hdmi->read_edid(VAR_4, VAR_1, VAR_2);
}
