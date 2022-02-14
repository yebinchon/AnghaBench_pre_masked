
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef void* u16 ;
struct omapfb_info {int num_overlays; int* rotation; scalar_t__ rotation_type; int mirror; TYPE_1__* region; int id; struct omap_overlay** overlays; } ;
struct omap_overlay_info {int screen_width; int width; int height; int color_mode; scalar_t__ rotation_type; int rotation; int mirror; void* out_height; void* out_width; void* pos_y; void* pos_x; int paddr; } ;
struct omap_overlay {int (* set_overlay_info ) (struct omap_overlay*,struct omap_overlay_info*) ;int (* get_overlay_info ) (struct omap_overlay*,struct omap_overlay_info*) ;} ;
struct fb_var_screeninfo {int rotate; int yres; int xres; int nonstd; int bits_per_pixel; } ;
struct fb_fix_screeninfo {int line_length; } ;
struct fb_info {struct fb_fix_screeninfo fix; struct fb_var_screeninfo var; } ;
typedef enum omap_color_mode { ____Placeholder_omap_color_mode } omap_color_mode ;
struct TYPE_2__ {scalar_t__ size; int lock_count; } ;


 int FUNC_0 (char*,...) ;
 struct omapfb_info* FUNC_1 (struct fb_info*) ;
 int VAR_0 ;
 int VAR_1 ;


 scalar_t__ VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct fb_var_screeninfo*,int*) ;
 int FUNC_5 (struct omapfb_info*,struct fb_var_screeninfo*,struct fb_fix_screeninfo*,int,int *) ;
 int FUNC_6 (struct omap_overlay*,struct omap_overlay_info*) ;
 int FUNC_7 (struct omap_overlay*,struct omap_overlay_info*) ;

int FUNC_8(struct fb_info *VAR_3, struct omap_overlay *VAR_4,
  u16 VAR_5, u16 VAR_6, u16 VAR_7, u16 VAR_8)
{
 int VAR_9 = 0;
 struct omapfb_info *VAR_10 = FUNC_1(VAR_3);
 struct fb_var_screeninfo *VAR_11 = &VAR_3->var;
 struct fb_fix_screeninfo *VAR_12 = &VAR_3->fix;
 enum omap_color_mode VAR_13 = 0;
 u32 VAR_14 = 0;
 struct omap_overlay_info VAR_15;
 int VAR_16, VAR_17;
 int VAR_18;
 int VAR_19;
 int VAR_20 = VAR_11->rotate;
 int VAR_21;

 FUNC_2(!FUNC_3(&VAR_10->region->lock_count));

 for (VAR_21 = 0; VAR_21 < VAR_10->num_overlays; VAR_21++) {
  if (VAR_4 != VAR_10->overlays[VAR_21])
   continue;

  VAR_20 = (VAR_20 + VAR_10->rotation[VAR_21]) % 4;
  break;
 }

 FUNC_0("setup_overlay %d, posx %d, posy %d, outw %d, outh %d\n", VAR_10->id,
   VAR_5, VAR_6, VAR_7, VAR_8);

 if (VAR_20 == VAR_1 || VAR_20 == VAR_0) {
  VAR_16 = VAR_11->yres;
  VAR_17 = VAR_11->xres;
 } else {
  VAR_16 = VAR_11->xres;
  VAR_17 = VAR_11->yres;
 }

 if (VAR_10->region->size)
  FUNC_5(VAR_10, VAR_11, VAR_12, VAR_20, &VAR_14);

 VAR_9 = FUNC_4(VAR_11, &VAR_13);
 if (VAR_9) {
  FUNC_0("fb_mode_to_dss_mode failed");
  goto err;
 }

 switch (VAR_11->nonstd) {
 case 129:
 case 128:
  if (VAR_10->rotation_type == VAR_2) {
   VAR_18 = VAR_12->line_length
    / (VAR_11->bits_per_pixel >> 2);
   break;
  }

 default:
  VAR_18 = VAR_12->line_length / (VAR_11->bits_per_pixel >> 3);
  break;
 }

 VAR_4->get_overlay_info(VAR_4, &VAR_15);

 if (VAR_10->rotation_type == VAR_2)
  VAR_19 = 0;
 else
  VAR_19 = VAR_10->mirror;

 VAR_15.paddr = VAR_14;
 VAR_15.screen_width = VAR_18;
 VAR_15.width = VAR_16;
 VAR_15.height = VAR_17;
 VAR_15.color_mode = VAR_13;
 VAR_15.rotation_type = VAR_10->rotation_type;
 VAR_15.rotation = VAR_20;
 VAR_15.mirror = VAR_19;

 VAR_15.pos_x = VAR_5;
 VAR_15.pos_y = VAR_6;
 VAR_15.out_width = VAR_7;
 VAR_15.out_height = VAR_8;

 VAR_9 = VAR_4->set_overlay_info(VAR_4, &VAR_15);
 if (VAR_9) {
  FUNC_0("ovl->setup_overlay_info failed\n");
  goto err;
 }

 return 0;

err:
 FUNC_0("setup_overlay failed\n");
 return VAR_9;
}
