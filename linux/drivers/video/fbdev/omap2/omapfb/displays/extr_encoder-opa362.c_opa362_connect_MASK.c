
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct panel_drv_data {struct omap_dss_device* in; } ;
struct TYPE_4__ {TYPE_1__* atv; } ;
struct omap_dss_device {struct omap_dss_device* dst; struct omap_dss_device* src; TYPE_2__ ops; int dev; } ;
struct TYPE_3__ {int (* connect ) (struct omap_dss_device*,struct omap_dss_device*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct omap_dss_device*) ;
 int FUNC_2 (struct omap_dss_device*,struct omap_dss_device*) ;
 struct panel_drv_data* FUNC_3 (struct omap_dss_device*) ;

__attribute__((used)) static int FUNC_4(struct omap_dss_device *VAR_1,
  struct omap_dss_device *VAR_2)
{
 struct panel_drv_data *VAR_3 = FUNC_3(VAR_1);
 struct omap_dss_device *VAR_4 = VAR_3->in;
 int VAR_5;

 FUNC_0(VAR_1->dev, "connect\n");

 if (FUNC_1(VAR_1))
  return -VAR_0;

 VAR_5 = VAR_4->ops.atv->connect(VAR_4, VAR_1);
 if (VAR_5)
  return VAR_5;

 VAR_2->src = VAR_1;
 VAR_1->dst = VAR_2;

 return 0;
}
