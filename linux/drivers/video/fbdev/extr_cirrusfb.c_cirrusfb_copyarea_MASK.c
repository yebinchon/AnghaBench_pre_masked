
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {int line_length; } ;
struct TYPE_3__ {int bits_per_pixel; scalar_t__ xres_virtual; scalar_t__ yres_virtual; } ;
struct fb_info {scalar_t__ state; int flags; TYPE_2__ fix; TYPE_1__ var; struct cirrusfb_info* par; } ;
struct fb_copyarea {scalar_t__ width; scalar_t__ height; scalar_t__ sx; scalar_t__ sy; scalar_t__ dx; scalar_t__ dy; } ;
struct cirrusfb_info {int regbase; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct fb_info*,struct fb_copyarea const*) ;
 int FUNC_1 (int ,int,int,scalar_t__,int,scalar_t__,int,scalar_t__,int ) ;
 int FUNC_2 (struct fb_copyarea*,struct fb_copyarea const*,int) ;

__attribute__((used)) static void FUNC_3(struct fb_info *VAR_2,
         const struct fb_copyarea *VAR_3)
{
 struct fb_copyarea VAR_4;
 u32 VAR_5, VAR_6;
 struct cirrusfb_info *VAR_7 = VAR_2->par;
 int VAR_8 = VAR_2->var.bits_per_pixel;

 if (VAR_2->state != VAR_1)
  return;
 if (VAR_2->flags & VAR_0) {
  FUNC_0(VAR_2, VAR_3);
  return;
 }

 VAR_5 = VAR_2->var.xres_virtual;
 VAR_6 = VAR_2->var.yres_virtual;
 FUNC_2(&VAR_4, VAR_3, sizeof(struct fb_copyarea));

 if (!VAR_4.width || !VAR_4.height ||
    VAR_4.sx >= VAR_5 || VAR_4.sy >= VAR_6 ||
    VAR_4.dx >= VAR_5 || VAR_4.dy >= VAR_6)
  return;

 if (VAR_4.sx + VAR_4.width > VAR_5)
  VAR_4.width = VAR_5 - VAR_4.sx;
 if (VAR_4.dx + VAR_4.width > VAR_5)
  VAR_4.width = VAR_5 - VAR_4.dx;
 if (VAR_4.sy + VAR_4.height > VAR_6)
  VAR_4.height = VAR_6 - VAR_4.sy;
 if (VAR_4.dy + VAR_4.height > VAR_6)
  VAR_4.height = VAR_6 - VAR_4.dy;

 FUNC_1(VAR_7->regbase, VAR_2->var.bits_per_pixel,
   (VAR_3->sx * VAR_8) / 8, VAR_3->sy,
   (VAR_3->dx * VAR_8) / 8, VAR_3->dy,
   (VAR_3->width * VAR_8) / 8, VAR_3->height,
   VAR_2->fix.line_length);

}
