
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct omapfb_info {int num_overlays; int* rotation; TYPE_1__* region; int id; struct omap_overlay** overlays; } ;
struct omap_overlay_info {scalar_t__ pos_y; scalar_t__ pos_x; scalar_t__ out_height; scalar_t__ out_width; } ;
struct omap_overlay {int caps; TYPE_2__* manager; int (* get_overlay_info ) (struct omap_overlay*,struct omap_overlay_info*) ;int id; } ;
struct fb_var_screeninfo {int rotate; scalar_t__ yres; scalar_t__ xres; } ;
struct fb_info {struct fb_var_screeninfo var; } ;
struct TYPE_5__ {int (* apply ) (TYPE_2__*) ;} ;
struct TYPE_4__ {scalar_t__ size; int lock_count; } ;


 int FUNC_0 (char*,...) ;
 struct omapfb_info* FUNC_1 (struct fb_info*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct fb_info*) ;
 int FUNC_5 (struct omap_overlay*,int ) ;
 int FUNC_6 (struct fb_info*,struct omap_overlay*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (struct omap_overlay*,struct omap_overlay_info*) ;
 int FUNC_9 (struct omap_overlay*,struct omap_overlay_info*) ;
 int FUNC_10 (TYPE_2__*) ;

int FUNC_11(struct fb_info *VAR_4, int VAR_5)
{
 int VAR_6 = 0;
 struct omapfb_info *VAR_7 = FUNC_1(VAR_4);
 struct fb_var_screeninfo *VAR_8 = &VAR_4->var;
 struct omap_overlay *VAR_9;
 u16 VAR_10, VAR_11;
 u16 VAR_12, VAR_13;
 int VAR_14;






 FUNC_2(!FUNC_3(&VAR_7->region->lock_count));

 for (VAR_14 = 0; VAR_14 < VAR_7->num_overlays; VAR_14++) {
  VAR_9 = VAR_7->overlays[VAR_14];

  FUNC_0("apply_changes, fb %d, ovl %d\n", VAR_7->id, VAR_9->id);

  if (VAR_7->region->size == 0) {

   FUNC_5(VAR_9, 0);
   if (!VAR_5 && VAR_9->manager)
    VAR_9->manager->apply(VAR_9->manager);
   continue;
  }

  if (VAR_5 || (VAR_9->caps & VAR_2) == 0) {
   int VAR_15 = (VAR_8->rotate + VAR_7->rotation[VAR_14]) % 4;
   if (VAR_15 == VAR_1 ||
     VAR_15 == VAR_0) {
    VAR_12 = VAR_8->yres;
    VAR_13 = VAR_8->xres;
   } else {
    VAR_12 = VAR_8->xres;
    VAR_13 = VAR_8->yres;
   }
  } else {
   struct omap_overlay_info VAR_16;
   VAR_9->get_overlay_info(VAR_9, &VAR_16);
   VAR_12 = VAR_16.out_width;
   VAR_13 = VAR_16.out_height;
  }

  if (VAR_5) {
   VAR_10 = 0;
   VAR_11 = 0;
  } else {
   struct omap_overlay_info VAR_17;
   VAR_9->get_overlay_info(VAR_9, &VAR_17);
   VAR_10 = VAR_17.pos_x;
   VAR_11 = VAR_17.pos_y;
  }

  VAR_6 = FUNC_6(VAR_4, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13);
  if (VAR_6)
   goto err;

  if (!VAR_5 && VAR_9->manager)
   VAR_9->manager->apply(VAR_9->manager);
 }
 return 0;
err:
 FUNC_0("apply_changes failed\n");
 return VAR_6;
}
