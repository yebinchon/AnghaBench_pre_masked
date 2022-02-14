
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omapfb_info {int num_overlays; TYPE_1__** overlays; struct omapfb2_device* fbdev; } ;
struct omapfb_color_key {int dummy; } ;
struct omapfb2_device {int dummy; } ;
struct omap_overlay_manager {size_t id; } ;
struct fb_info {int dummy; } ;
struct TYPE_2__ {struct omap_overlay_manager* manager; } ;


 int VAR_0 ;
 struct omapfb_info* FUNC_0 (struct fb_info*) ;
 struct omapfb_color_key* VAR_1 ;
 int FUNC_1 (struct omapfb2_device*) ;
 int FUNC_2 (struct omapfb2_device*) ;

__attribute__((used)) static int FUNC_3(struct fb_info *VAR_2,
  struct omapfb_color_key *VAR_3)
{
 struct omapfb_info *VAR_4 = FUNC_0(VAR_2);
 struct omapfb2_device *VAR_5 = VAR_4->fbdev;
 struct omap_overlay_manager *VAR_6 = ((void*)0);
 int VAR_7 = 0;
 int VAR_8;

 FUNC_1(VAR_5);

 for (VAR_8 = 0; VAR_8 < VAR_4->num_overlays; VAR_8++) {
  if (VAR_4->overlays[VAR_8]->manager) {
   VAR_6 = VAR_4->overlays[VAR_8]->manager;
   break;
  }
 }

 if (!VAR_6) {
  VAR_7 = -VAR_0;
  goto err;
 }

 *VAR_3 = VAR_1[VAR_6->id];
err:
 FUNC_2(VAR_5);

 return VAR_7;
}
