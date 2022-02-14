
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct panel_drv_data {int invert_polarity; TYPE_3__* dev; int timings; struct omap_dss_device* in; } ;
struct TYPE_5__ {TYPE_1__* atv; } ;
struct omap_dss_device {int state; TYPE_2__ ops; } ;
struct TYPE_6__ {int of_node; } ;
struct TYPE_4__ {int (* enable ) (struct omap_dss_device*) ;int (* invert_vid_out_polarity ) (struct omap_dss_device*,int ) ;int (* set_type ) (struct omap_dss_device*,int ) ;int (* set_timings ) (struct omap_dss_device*,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,char*) ;
 int FUNC_1 (struct omap_dss_device*) ;
 scalar_t__ FUNC_2 (struct omap_dss_device*) ;
 int FUNC_3 (struct omap_dss_device*,int *) ;
 int FUNC_4 (struct omap_dss_device*,int ) ;
 int FUNC_5 (struct omap_dss_device*,int ) ;
 int FUNC_6 (struct omap_dss_device*) ;
 struct panel_drv_data* FUNC_7 (struct omap_dss_device*) ;

__attribute__((used)) static int FUNC_8(struct omap_dss_device *VAR_3)
{
 struct panel_drv_data *VAR_4 = FUNC_7(VAR_3);
 struct omap_dss_device *VAR_5 = VAR_4->in;
 int VAR_6;

 FUNC_0(VAR_4->dev, "enable\n");

 if (!FUNC_1(VAR_3))
  return -VAR_0;

 if (FUNC_2(VAR_3))
  return 0;

 VAR_5->ops.atv->set_timings(VAR_5, &VAR_4->timings);

 if (!VAR_4->dev->of_node) {
  VAR_5->ops.atv->set_type(VAR_5, VAR_2);

  VAR_5->ops.atv->invert_vid_out_polarity(VAR_5,
   VAR_4->invert_polarity);
 }

 VAR_6 = VAR_5->ops.atv->enable(VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_3->state = VAR_1;

 return VAR_6;
}
