
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int osd_x_pan; int osd_y_pan; int yuv_forced_update; } ;
struct ivtv {TYPE_4__* osd_info; TYPE_3__ yuv_info; } ;
struct fb_var_screeninfo {int yoffset; int xoffset; } ;
struct TYPE_6__ {scalar_t__ yres; scalar_t__ yres_virtual; scalar_t__ xres; scalar_t__ xres_virtual; int bits_per_pixel; } ;
struct TYPE_5__ {int line_length; } ;
struct fb_info {TYPE_2__ var; TYPE_1__ fix; scalar_t__ par; } ;
struct TYPE_8__ {int pan_cur; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(struct fb_var_screeninfo *VAR_1, struct fb_info *VAR_2)
{
 u32 VAR_3;
 struct ivtv *VAR_4 = (struct ivtv *) VAR_2->par;

 if (VAR_1->yoffset + VAR_2->var.yres > VAR_2->var.yres_virtual ||
     VAR_1->xoffset + VAR_2->var.xres > VAR_2->var.xres_virtual)
  return -VAR_0;

 VAR_3 = VAR_1->yoffset * VAR_2->fix.line_length
        + VAR_1->xoffset * VAR_2->var.bits_per_pixel / 8;
 FUNC_0(VAR_3, 0x02A0C);


 VAR_4->yuv_info.osd_x_pan = VAR_1->xoffset;
 VAR_4->yuv_info.osd_y_pan = VAR_1->yoffset;

 VAR_4->yuv_info.yuv_forced_update = 1;

 VAR_4->osd_info->pan_cur = VAR_3;
 return 0;
}
