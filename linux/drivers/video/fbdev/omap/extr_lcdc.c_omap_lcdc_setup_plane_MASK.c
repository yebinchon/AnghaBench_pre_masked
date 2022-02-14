
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct lcd_panel {int x_res; int y_res; } ;
struct fb_var_screeninfo {scalar_t__ rotate; } ;
struct TYPE_6__ {unsigned long frame_offset; int xres; int yres; int screen_width; int color_mode; int bpp; int palette_code; int palette_size; scalar_t__ update_mode; scalar_t__ ext_mode; TYPE_2__* fbdev; } ;
struct TYPE_5__ {int dev; struct lcd_panel* panel; TYPE_1__** fb_info; } ;
struct TYPE_4__ {struct fb_var_screeninfo var; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;





 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 TYPE_3__ VAR_2 ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(int VAR_3, int VAR_4,
     unsigned long VAR_5, int VAR_6,
     int VAR_7, int VAR_8, int VAR_9, int VAR_10,
     int VAR_11)
{
 struct fb_var_screeninfo *VAR_12 = &VAR_2.fbdev->fb_info[0]->var;
 struct lcd_panel *VAR_13 = VAR_2.fbdev->panel;
 int VAR_14, VAR_15;

 if (VAR_12->rotate == 0) {
  VAR_14 = VAR_13->x_res;
  VAR_15 = VAR_13->y_res;
 } else {
  VAR_14 = VAR_13->y_res;
  VAR_15 = VAR_13->x_res;
 }
 if (VAR_3 != 0 || VAR_4 != 0 || VAR_7 != 0 || VAR_8 != 0 ||
     VAR_9 > VAR_14 || VAR_10 > VAR_15) {





  return -VAR_0;
 }

 VAR_2.frame_offset = VAR_5;
 VAR_2.xres = VAR_9;
 VAR_2.yres = VAR_10;
 VAR_2.screen_width = VAR_6;
 VAR_2.color_mode = VAR_11;

 switch (VAR_11) {
 case 132:
  VAR_2.bpp = 8;
  VAR_2.palette_code = 0x3000;
  VAR_2.palette_size = 512;
  break;
 case 130:
  VAR_2.bpp = 16;
  VAR_2.palette_code = 0x4000;
  VAR_2.palette_size = 32;
  break;
 case 131:
  VAR_2.bpp = 16;
  VAR_2.palette_code = 0x4000;
  VAR_2.palette_size = 32;
  break;
 case 129:
  if (VAR_2.ext_mode) {
   VAR_2.bpp = 12;
   break;
  }

 case 128:
  if (VAR_2.ext_mode) {
   VAR_2.bpp = 16;
   break;
  }

 default:






  FUNC_1(VAR_2.fbdev->dev, "invalid color mode %d\n", VAR_11);
  FUNC_0();
  return -1;
 }

 if (VAR_2.ext_mode) {
  FUNC_5();
  return 0;
 }

 if (VAR_2.update_mode == VAR_1) {
  FUNC_2();
  FUNC_4();
  FUNC_5();
  FUNC_3();
 }

 return 0;
}
