
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omapvideo_info {int num_overlays; struct omap_overlay** overlays; } ;
struct omap_vout_device {struct omapvideo_info vid_info; } ;
struct omap_overlay {TYPE_1__* manager; struct omap_dss_device* (* get_device ) (struct omap_overlay*) ;} ;
struct omap_dss_device {int dummy; } ;
struct TYPE_2__ {int (* apply ) (TYPE_1__*) ;} ;


 int VAR_0 ;
 struct omap_dss_device* FUNC_0 (struct omap_overlay*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(struct omap_vout_device *VAR_1)
{
 int VAR_2;
 struct omap_overlay *VAR_3;
 struct omapvideo_info *VAR_4 = &VAR_1->vid_info;

 for (VAR_2 = 0; VAR_2 < VAR_4->num_overlays; VAR_2++) {
  struct omap_dss_device *VAR_5;

  VAR_3 = VAR_4->overlays[VAR_2];
  VAR_5 = VAR_3->get_device(VAR_3);
  if (!VAR_5)
   return -VAR_0;
  VAR_3->manager->apply(VAR_3->manager);
 }

 return 0;
}
