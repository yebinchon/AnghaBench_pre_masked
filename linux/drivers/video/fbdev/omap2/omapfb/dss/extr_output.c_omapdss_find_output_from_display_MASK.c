
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_dss_device {scalar_t__ id; struct omap_dss_device* src; } ;


 struct omap_dss_device* FUNC_0 (struct omap_dss_device*) ;

struct omap_dss_device *FUNC_1(struct omap_dss_device *VAR_0)
{
 while (VAR_0->src)
  VAR_0 = VAR_0->src;

 if (VAR_0->id != 0)
  return FUNC_0(VAR_0);

 return ((void*)0);
}
