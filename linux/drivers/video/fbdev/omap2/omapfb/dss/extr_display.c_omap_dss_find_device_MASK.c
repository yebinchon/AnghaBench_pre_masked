
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_dss_device {int dummy; } ;


 struct omap_dss_device* FUNC_0 (struct omap_dss_device*) ;

struct omap_dss_device *FUNC_1(void *VAR_0,
  int (*VAR_1)(struct omap_dss_device *VAR_2, void *VAR_3))
{
 struct omap_dss_device *VAR_4 = ((void*)0);

 while ((VAR_4 = FUNC_0(VAR_4)) != ((void*)0)) {
  if (VAR_1(VAR_4, VAR_0))
   return VAR_4;
 }

 return ((void*)0);
}
