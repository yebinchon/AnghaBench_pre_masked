
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int supported_modes ;
struct omapfb_ovl_colormode {int overlay_idx; int mode_idx; int transp; int blue; int green; int red; int nonstd; int bits_per_pixel; } ;
struct omapfb2_device {int num_overlays; struct omap_overlay** overlays; } ;
struct omap_overlay {int supported_modes; } ;
struct fb_var_screeninfo {int transp; int blue; int green; int red; int nonstd; int bits_per_pixel; } ;
typedef enum omap_color_mode { ____Placeholder_omap_color_mode } omap_color_mode ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,struct fb_var_screeninfo*) ;

__attribute__((used)) static int FUNC_1(struct omapfb2_device *VAR_2,
        struct omapfb_ovl_colormode *VAR_3)
{
 int VAR_4 = VAR_3->overlay_idx;
 int VAR_5 = VAR_3->mode_idx;
 struct omap_overlay *VAR_6;
 enum omap_color_mode VAR_7;
 struct fb_var_screeninfo VAR_8;
 int VAR_9;

 if (VAR_4 >= VAR_2->num_overlays)
  return -VAR_0;
 VAR_6 = VAR_2->overlays[VAR_4];
 VAR_7 = VAR_6->supported_modes;

 VAR_5 = VAR_3->mode_idx;

 for (VAR_9 = 0; VAR_9 < sizeof(VAR_7) * 8; VAR_9++) {
  if (!(VAR_7 & (1 << VAR_9)))
   continue;





  if (FUNC_0(1 << VAR_9, &VAR_8) < 0)
   continue;

  VAR_5--;
  if (VAR_5 < 0)
   break;
 }

 if (VAR_9 == sizeof(VAR_7) * 8)
  return -VAR_1;

 VAR_3->bits_per_pixel = VAR_8.bits_per_pixel;
 VAR_3->nonstd = VAR_8.nonstd;
 VAR_3->red = VAR_8.red;
 VAR_3->green = VAR_8.green;
 VAR_3->blue = VAR_8.blue;
 VAR_3->transp = VAR_8.transp;

 return 0;
}
