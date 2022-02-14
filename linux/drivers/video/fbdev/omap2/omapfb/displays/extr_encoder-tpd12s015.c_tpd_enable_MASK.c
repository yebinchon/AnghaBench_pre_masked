
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct panel_drv_data {int timings; struct omap_dss_device* in; } ;
struct TYPE_3__ {TYPE_2__* hdmi; } ;
struct omap_dss_device {scalar_t__ state; TYPE_1__ ops; } ;
struct TYPE_4__ {int (* enable ) (struct omap_dss_device*) ;int (* set_timings ) (struct omap_dss_device*,int *) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct omap_dss_device*,int *) ;
 int FUNC_1 (struct omap_dss_device*) ;
 struct panel_drv_data* FUNC_2 (struct omap_dss_device*) ;

__attribute__((used)) static int FUNC_3(struct omap_dss_device *VAR_1)
{
 struct panel_drv_data *VAR_2 = FUNC_2(VAR_1);
 struct omap_dss_device *VAR_3 = VAR_2->in;
 int VAR_4;

 if (VAR_1->state == VAR_0)
  return 0;

 VAR_3->ops.hdmi->set_timings(VAR_3, &VAR_2->timings);

 VAR_4 = VAR_3->ops.hdmi->enable(VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_1->state = VAR_0;

 return VAR_4;
}
