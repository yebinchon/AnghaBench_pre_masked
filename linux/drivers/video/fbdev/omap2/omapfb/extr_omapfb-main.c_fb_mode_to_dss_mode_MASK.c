
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omapfb_colormode {scalar_t__ nonstd; int dssmode; } ;
struct fb_var_screeninfo {scalar_t__ nonstd; int bits_per_pixel; } ;
typedef enum omap_color_mode { ____Placeholder_omap_color_mode } omap_color_mode ;


 int FUNC_0 (struct omapfb_colormode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct fb_var_screeninfo*,struct omapfb_colormode*) ;
 scalar_t__ FUNC_2 (struct fb_var_screeninfo*,struct omapfb_colormode*) ;
 struct omapfb_colormode* VAR_9 ;

__attribute__((used)) static int FUNC_3(struct fb_var_screeninfo *VAR_10,
  enum omap_color_mode *VAR_11)
{
 enum omap_color_mode VAR_12;
 int VAR_13;


 if (VAR_10->nonstd) {
  for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_9); ++VAR_13) {
   struct omapfb_colormode *VAR_14 = &VAR_9[VAR_13];
   if (VAR_10->nonstd == VAR_14->nonstd) {
    FUNC_1(VAR_10, VAR_14);
    *VAR_11 = VAR_14->dssmode;
    return 0;
   }
  }

  return -VAR_0;
 }


 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_9); ++VAR_13) {
  struct omapfb_colormode *VAR_15 = &VAR_9[VAR_13];
  if (FUNC_2(VAR_10, VAR_15)) {
   FUNC_1(VAR_10, VAR_15);
   *VAR_11 = VAR_15->dssmode;
   return 0;
  }
 }



 switch (VAR_10->bits_per_pixel) {
 case 1:
  VAR_12 = VAR_1;
  break;
 case 2:
  VAR_12 = VAR_2;
  break;
 case 4:
  VAR_12 = VAR_3;
  break;
 case 8:
  VAR_12 = VAR_4;
  break;
 case 12:
  VAR_12 = VAR_5;
  break;
 case 16:
  VAR_12 = VAR_6;
  break;
 case 24:
  VAR_12 = VAR_7;
  break;
 case 32:
  VAR_12 = VAR_8;
  break;
 default:
  return -VAR_0;
 }

 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_9); ++VAR_13) {
  struct omapfb_colormode *VAR_16 = &VAR_9[VAR_13];
  if (VAR_12 == VAR_16->dssmode) {
   FUNC_1(VAR_10, VAR_16);
   *VAR_11 = VAR_16->dssmode;
   return 0;
  }
 }

 return -VAR_0;
}
