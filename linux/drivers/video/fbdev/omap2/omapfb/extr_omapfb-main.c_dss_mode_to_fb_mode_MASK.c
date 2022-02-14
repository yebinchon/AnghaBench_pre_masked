
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omapfb_colormode {int dssmode; } ;
struct fb_var_screeninfo {int dummy; } ;
typedef enum omap_color_mode { ____Placeholder_omap_color_mode } omap_color_mode ;


 int FUNC_0 (struct omapfb_colormode*) ;
 int VAR_0 ;
 int FUNC_1 (struct fb_var_screeninfo*,struct omapfb_colormode*) ;
 struct omapfb_colormode* VAR_1 ;

int FUNC_2(enum omap_color_mode VAR_2,
   struct fb_var_screeninfo *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); ++VAR_4) {
  struct omapfb_colormode *VAR_5 = &VAR_1[VAR_4];
  if (VAR_2 == VAR_5->dssmode) {
   FUNC_1(VAR_3, VAR_5);
   return 0;
  }
 }
 return -VAR_0;
}
