
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct panel_drv_data {int timings; struct omap_dss_device* in; } ;
struct TYPE_3__ {TYPE_2__* dvi; } ;
struct omap_dss_device {int state; TYPE_1__ ops; } ;
struct TYPE_4__ {int (* enable ) (struct omap_dss_device*) ;int (* set_timings ) (struct omap_dss_device*,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct omap_dss_device*) ;
 scalar_t__ FUNC_1 (struct omap_dss_device*) ;
 int FUNC_2 (struct omap_dss_device*,int *) ;
 int FUNC_3 (struct omap_dss_device*) ;
 struct panel_drv_data* FUNC_4 (struct omap_dss_device*) ;

__attribute__((used)) static int FUNC_5(struct omap_dss_device *VAR_2)
{
 struct panel_drv_data *VAR_3 = FUNC_4(VAR_2);
 struct omap_dss_device *VAR_4 = VAR_3->in;
 int VAR_5;

 if (!FUNC_0(VAR_2))
  return -VAR_0;

 if (FUNC_1(VAR_2))
  return 0;

 VAR_4->ops.dvi->set_timings(VAR_4, &VAR_3->timings);

 VAR_5 = VAR_4->ops.dvi->enable(VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_2->state = VAR_1;

 return 0;
}
