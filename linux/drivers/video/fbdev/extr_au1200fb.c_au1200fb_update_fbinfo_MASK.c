
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int bits_per_pixel; int xres_virtual; int yres_virtual; } ;
struct TYPE_3__ {int line_length; int visual; } ;
struct fb_info {int screen_size; TYPE_2__ var; TYPE_1__ fix; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static void FUNC_2(struct fb_info *VAR_4)
{



 if (FUNC_0(VAR_3)) {
  if (VAR_4->var.bits_per_pixel <= 8) {

   VAR_4->fix.visual = VAR_1;
   VAR_4->fix.line_length = VAR_4->var.xres_virtual /
    (8/VAR_4->var.bits_per_pixel);
  } else {

   VAR_4->fix.visual = VAR_2;
   VAR_4->fix.line_length = VAR_4->var.xres_virtual * (VAR_4->var.bits_per_pixel / 8);
  }
 } else {

  VAR_4->fix.visual = VAR_0;
  VAR_4->fix.line_length = VAR_4->var.xres_virtual / 8;
 }

 VAR_4->screen_size = VAR_4->fix.line_length * VAR_4->var.yres_virtual;
 FUNC_1("line length: %d\n", VAR_4->fix.line_length);
 FUNC_1("bits_per_pixel: %d\n", VAR_4->var.bits_per_pixel);
}
