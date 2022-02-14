
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct fb_var_screeninfo {int xoffset; int yoffset; } ;
struct TYPE_7__ {int bits_per_pixel; int xres_virtual; int xres; } ;
struct fb_info {TYPE_3__ var; scalar_t__ par; } ;
struct TYPE_5__ {int xoffset; int line_offset; } ;
struct TYPE_6__ {TYPE_1__ falcon; } ;
struct atafb_par {scalar_t__ screen_base; TYPE_2__ hw; } ;
struct TYPE_8__ {int (* set_screen_base ) (scalar_t__) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 void* FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct fb_var_screeninfo *VAR_4,
         struct fb_info *VAR_5)
{
 struct atafb_par *VAR_6 = (struct atafb_par *)VAR_5->par;

 int VAR_7;
 int VAR_8 = VAR_5->var.bits_per_pixel;

 if (VAR_8 == 1)
  VAR_4->xoffset = FUNC_1(VAR_4->xoffset, 32);
 if (VAR_8 != 16)
  VAR_6->hw.falcon.xoffset = VAR_4->xoffset & 15;
 else {
  VAR_6->hw.falcon.xoffset = 0;
  VAR_4->xoffset = FUNC_1(VAR_4->xoffset, 2);
 }
 VAR_6->hw.falcon.line_offset = VAR_8 *
  (VAR_5->var.xres_virtual - VAR_5->var.xres) / 16;
 if (VAR_6->hw.falcon.xoffset)
  VAR_6->hw.falcon.line_offset -= VAR_8;
 VAR_7 = VAR_4->xoffset - VAR_6->hw.falcon.xoffset;

 VAR_6->screen_base = VAR_3 +
         (VAR_4->yoffset * VAR_5->var.xres_virtual + VAR_7) * VAR_8 / 8;
 if (VAR_2->set_screen_base)
  VAR_2->set_screen_base(VAR_6->screen_base);
 else
  return -VAR_0;
 VAR_1 = 1;
 return 0;
}
