
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_overlay_manager {int dummy; } ;
struct omap_dss_device {int dummy; } ;
struct TYPE_2__ {int (* connect ) (struct omap_overlay_manager*,struct omap_dss_device*) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct omap_overlay_manager*,struct omap_dss_device*) ;

int FUNC_1(struct omap_overlay_manager *VAR_1,
  struct omap_dss_device *VAR_2)
{
 return VAR_0->connect(VAR_1, VAR_2);
}
