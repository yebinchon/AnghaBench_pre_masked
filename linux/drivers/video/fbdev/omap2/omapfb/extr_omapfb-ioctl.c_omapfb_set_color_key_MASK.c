
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omapfb_info {int num_overlays; TYPE_1__** overlays; struct omapfb2_device* fbdev; } ;
struct omapfb_color_key {int dummy; } ;
struct omapfb2_device {int dummy; } ;
struct omap_overlay_manager {int dummy; } ;
struct fb_info {int dummy; } ;
struct TYPE_2__ {struct omap_overlay_manager* manager; } ;


 int VAR_0 ;
 struct omapfb_info* FUNC_0 (struct fb_info*) ;
 int FUNC_1 (struct omap_overlay_manager*,struct omapfb_color_key*) ;
 int FUNC_2 (struct omapfb2_device*) ;
 int FUNC_3 (struct omapfb2_device*) ;

__attribute__((used)) static int FUNC_4(struct fb_info *VAR_1,
  struct omapfb_color_key *VAR_2)
{
 struct omapfb_info *VAR_3 = FUNC_0(VAR_1);
 struct omapfb2_device *VAR_4 = VAR_3->fbdev;
 int VAR_5;
 int VAR_6;
 struct omap_overlay_manager *VAR_7 = ((void*)0);

 FUNC_2(VAR_4);

 for (VAR_6 = 0; VAR_6 < VAR_3->num_overlays; VAR_6++) {
  if (VAR_3->overlays[VAR_6]->manager) {
   VAR_7 = VAR_3->overlays[VAR_6]->manager;
   break;
  }
 }

 if (!VAR_7) {
  VAR_5 = -VAR_0;
  goto err;
 }

 VAR_5 = FUNC_1(VAR_7, VAR_2);
err:
 FUNC_3(VAR_4);

 return VAR_5;
}
