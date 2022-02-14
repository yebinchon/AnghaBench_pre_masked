
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omapfb_info {int num_overlays; struct omap_overlay** overlays; } ;
struct omap_overlay {int (* wait_for_go ) (struct omap_overlay*) ;} ;
struct fb_info {int dummy; } ;


 struct omapfb_info* FUNC_0 (struct fb_info*) ;
 int FUNC_1 (struct omap_overlay*) ;

__attribute__((used)) static int FUNC_2(struct fb_info *VAR_0)
{
 struct omapfb_info *VAR_1 = FUNC_0(VAR_0);
 int VAR_2 = 0;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->num_overlays; ++VAR_3) {
  struct omap_overlay *VAR_4 = VAR_1->overlays[VAR_3];
  VAR_2 = VAR_4->wait_for_go(VAR_4);
  if (VAR_2)
   break;
 }

 return VAR_2;
}
