
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int xres_virtual; int yres_virtual; } ;
struct fb_info {int flags; TYPE_1__ var; } ;
struct fb_fillrect {int width; int height; int dx; int dy; } ;


 int VAR_0 ;
 int FUNC_0 (struct fb_fillrect*,struct fb_fillrect const*,int) ;
 int FUNC_1 (struct fb_info*,struct fb_fillrect const*) ;
 int FUNC_2 (struct fb_info*,struct fb_fillrect*) ;

__attribute__((used)) static void FUNC_3(struct fb_info *VAR_1,
  const struct fb_fillrect *VAR_2)
{
 struct fb_fillrect VAR_3;
 int VAR_4, VAR_5;

 if (VAR_1->flags & VAR_0) {
  FUNC_1(VAR_1, VAR_2);
  return;
 }

 VAR_4 = VAR_1->var.xres_virtual;
 VAR_5 = VAR_1->var.yres_virtual;

 FUNC_0(&VAR_3, VAR_2, sizeof(struct fb_fillrect));

 if (!VAR_3.width || !VAR_3.height ||
     VAR_3.dx >= VAR_4 || VAR_3.dy >= VAR_5)
  return;

 if (VAR_3.dx + VAR_3.width > VAR_4)
  VAR_3.width = VAR_4 - VAR_3.dx;
 if (VAR_3.dy + VAR_3.height > VAR_5)
  VAR_3.height = VAR_5 - VAR_3.dy;

 FUNC_2(VAR_1, &VAR_3);
}
