
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int pan_offset; int pan_display; } ;
struct TYPE_5__ {int offset; } ;
struct intelfb_info {int pitch; TYPE_3__ vsync; TYPE_2__ fb; } ;
struct fb_var_screeninfo {int yoffset; int activate; int xoffset; } ;
struct TYPE_4__ {scalar_t__ xres; scalar_t__ xres_virtual; scalar_t__ yres; scalar_t__ yres_virtual; int bits_per_pixel; } ;
struct fb_info {TYPE_1__ var; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct intelfb_info* FUNC_1 (struct fb_info*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct intelfb_info*) ;

int FUNC_5(struct fb_var_screeninfo *VAR_3, struct fb_info *VAR_4)
{
 struct intelfb_info *VAR_5 = FUNC_1(VAR_4);
 u32 VAR_6, VAR_7, VAR_8;





 VAR_7 = FUNC_3(VAR_3->xoffset, 8);
 VAR_8 = VAR_3->yoffset;

 if ((VAR_7 + VAR_4->var.xres > VAR_4->var.xres_virtual) ||
     (VAR_8 + VAR_4->var.yres > VAR_4->var.yres_virtual))
  return -VAR_1;

 VAR_6 = (VAR_8 * VAR_5->pitch) +
   (VAR_7 * VAR_4->var.bits_per_pixel) / 8;

 VAR_6 += VAR_5->fb.offset << 12;

 VAR_5->vsync.pan_offset = VAR_6;
 if ((VAR_3->activate & VAR_2) &&
     !FUNC_4(VAR_5))
  VAR_5->vsync.pan_display = 1;
 else {
  VAR_5->vsync.pan_display = 0;
  FUNC_2(VAR_0, VAR_6);
 }

 return 0;
}
