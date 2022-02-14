
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omapfb_info {scalar_t__ num_overlays; struct omap_overlay** overlays; } ;
struct omap_overlay {struct omap_dss_device* (* get_device ) (struct omap_overlay*) ;} ;
struct omap_dss_device {int dummy; } ;
struct fb_info {int dummy; } ;


 struct omapfb_info* FUNC_0 (struct fb_info*) ;
 struct omap_dss_device* FUNC_1 (struct omap_overlay*) ;

__attribute__((used)) static inline struct omap_dss_device *FUNC_2(struct fb_info *VAR_0)
{
 struct omapfb_info *VAR_1 = FUNC_0(VAR_0);
 struct omap_overlay *VAR_2;



 if (VAR_1->num_overlays == 0)
  return ((void*)0);

 VAR_2 = VAR_1->overlays[0];

 return VAR_2->get_device(VAR_2);
}
