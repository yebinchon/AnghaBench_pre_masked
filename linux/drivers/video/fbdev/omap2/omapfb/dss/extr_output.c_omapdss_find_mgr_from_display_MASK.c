
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_overlay_manager {int dummy; } ;
struct omap_dss_device {struct omap_overlay_manager* manager; } ;


 int FUNC_0 (struct omap_dss_device*) ;
 struct omap_dss_device* FUNC_1 (struct omap_dss_device*) ;

struct omap_overlay_manager *FUNC_2(struct omap_dss_device *VAR_0)
{
 struct omap_dss_device *VAR_1;
 struct omap_overlay_manager *VAR_2;

 VAR_1 = FUNC_1(VAR_0);

 if (VAR_1 == ((void*)0))
  return ((void*)0);

 VAR_2 = VAR_1->manager;

 FUNC_0(VAR_1);

 return VAR_2;
}
