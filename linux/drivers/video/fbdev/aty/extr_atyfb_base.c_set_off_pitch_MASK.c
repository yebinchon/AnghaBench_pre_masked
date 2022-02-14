
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int xoffset; int yoffset; int bits_per_pixel; } ;
struct TYPE_5__ {int line_length; } ;
struct fb_info {TYPE_3__ var; TYPE_2__ fix; } ;
struct TYPE_4__ {int off_pitch; } ;
struct atyfb_par {TYPE_1__ crtc; } ;



__attribute__((used)) static void FUNC_0(struct atyfb_par *VAR_0, const struct fb_info *VAR_1)
{
 u32 VAR_2 = VAR_1->var.xoffset;
 u32 VAR_3 = VAR_1->var.yoffset;
 u32 VAR_4 = VAR_1->fix.line_length;
 u32 VAR_5 = VAR_1->var.bits_per_pixel;

 VAR_0->crtc.off_pitch =
  ((VAR_3 * VAR_4 + VAR_2 * VAR_5 / 8) / 8) |
  ((VAR_4 / VAR_5) << 22);
}
