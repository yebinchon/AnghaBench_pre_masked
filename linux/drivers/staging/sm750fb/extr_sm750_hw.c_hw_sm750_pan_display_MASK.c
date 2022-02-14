
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct lynxfb_crtc {scalar_t__ channel; scalar_t__ oScreen; } ;
struct fb_var_screeninfo {int xoffset; scalar_t__ xres; scalar_t__ xres_virtual; int yoffset; scalar_t__ yres; scalar_t__ yres_virtual; int bits_per_pixel; } ;
struct TYPE_2__ {int line_length; } ;
struct fb_info {TYPE_1__ fix; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ VAR_5 ;

int FUNC_2(struct lynxfb_crtc *VAR_6,
    const struct fb_var_screeninfo *VAR_7,
    const struct fb_info *VAR_8)
{
 u32 VAR_9;

 if ((VAR_7->xoffset + VAR_7->xres > VAR_7->xres_virtual) ||
     (VAR_7->yoffset + VAR_7->yres > VAR_7->yres_virtual)) {
  return -VAR_2;
 }

 VAR_9 = VAR_7->yoffset * VAR_8->fix.line_length +
  ((VAR_7->xoffset * VAR_7->bits_per_pixel) >> 3);
 VAR_9 += VAR_6->oScreen;
 if (VAR_6->channel == VAR_5) {
  FUNC_1(VAR_3,
         FUNC_0(VAR_3) |
         (VAR_9 & VAR_4));
 } else {
  FUNC_1(VAR_0,
         FUNC_0(VAR_0) |
         (VAR_9 & VAR_1));
 }
 return 0;
}
