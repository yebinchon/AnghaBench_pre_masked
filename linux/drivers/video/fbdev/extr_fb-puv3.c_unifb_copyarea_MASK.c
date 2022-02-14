
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ xres_virtual; scalar_t__ yres_virtual; } ;
struct fb_info {int flags; TYPE_1__ var; } ;
struct fb_copyarea {scalar_t__ sx; scalar_t__ sy; scalar_t__ dx; scalar_t__ dy; scalar_t__ width; scalar_t__ height; } ;


 int VAR_0 ;
 int FUNC_0 (struct fb_info*,struct fb_copyarea const*) ;
 int FUNC_1 (struct fb_info*,struct fb_copyarea*) ;

__attribute__((used)) static void FUNC_2(struct fb_info *VAR_1, const struct fb_copyarea *VAR_2)
{
 struct fb_copyarea VAR_3;
 u32 VAR_4, VAR_5;
 VAR_3.sx = VAR_2->sx;
 VAR_3.sy = VAR_2->sy;
 VAR_3.dx = VAR_2->dx;
 VAR_3.dy = VAR_2->dy;
 VAR_3.width = VAR_2->width;
 VAR_3.height = VAR_2->height;

 if (VAR_1->flags & VAR_0) {
  FUNC_0(VAR_1, VAR_2);
  return;
 }

 VAR_4 = VAR_1->var.xres_virtual;
 VAR_5 = VAR_1->var.yres_virtual;

 if (!VAR_3.width || !VAR_3.height ||
     VAR_3.sx >= VAR_4 || VAR_3.sy >= VAR_5 ||
     VAR_3.dx >= VAR_4 || VAR_3.dy >= VAR_5)
  return;

 if (VAR_3.sx + VAR_3.width > VAR_4)
  VAR_3.width = VAR_4 - VAR_3.sx;
 if (VAR_3.dx + VAR_3.width > VAR_4)
  VAR_3.width = VAR_4 - VAR_3.dx;
 if (VAR_3.sy + VAR_3.height > VAR_5)
  VAR_3.height = VAR_5 - VAR_3.sy;
 if (VAR_3.dy + VAR_3.height > VAR_5)
  VAR_3.height = VAR_5 - VAR_3.dy;

 FUNC_1(VAR_1, &VAR_3);
}
