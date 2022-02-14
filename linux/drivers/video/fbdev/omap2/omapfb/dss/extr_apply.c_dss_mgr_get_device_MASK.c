
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_overlay_manager {struct omap_dss_device* output; } ;
struct omap_dss_device {scalar_t__ driver; struct omap_dss_device* dst; } ;



__attribute__((used)) static struct omap_dss_device *FUNC_0(struct omap_overlay_manager *VAR_0)
{
 struct omap_dss_device *VAR_1;

 VAR_1 = VAR_0->output;
 if (VAR_1 == ((void*)0))
  return ((void*)0);

 while (VAR_1->dst)
  VAR_1 = VAR_1->dst;

 if (VAR_1->driver)
  return VAR_1;
 else
  return ((void*)0);
}
