
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeonfb_info {int dummy; } ;
struct TYPE_2__ {int xres_virtual; int yres_virtual; } ;
struct fb_info {scalar_t__ state; int flags; TYPE_1__ var; struct radeonfb_info* par; } ;
struct fb_fillrect {int width; int height; int dx; int dy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct fb_info*,struct fb_fillrect const*) ;
 int FUNC_1 (struct fb_fillrect*,struct fb_fillrect const*,int) ;
 int FUNC_2 (struct radeonfb_info*) ;
 int FUNC_3 (struct radeonfb_info*,struct fb_fillrect*) ;

void FUNC_4(struct fb_info *VAR_2, const struct fb_fillrect *VAR_3)
{
 struct radeonfb_info *VAR_4 = VAR_2->par;
 struct fb_fillrect VAR_5;
 int VAR_6, VAR_7;

 if (VAR_2->state != VAR_1)
  return;
 if (VAR_2->flags & VAR_0) {
  FUNC_0(VAR_2, VAR_3);
  return;
 }

 FUNC_2(VAR_4);

 VAR_6 = VAR_2->var.xres_virtual;
 VAR_7 = VAR_2->var.yres_virtual;

 FUNC_1(&VAR_5, VAR_3, sizeof(struct fb_fillrect));

 if(!VAR_5.width || !VAR_5.height ||
    VAR_5.dx >= VAR_6 || VAR_5.dy >= VAR_7)
  return;

 if(VAR_5.dx + VAR_5.width > VAR_6) VAR_5.width = VAR_6 - VAR_5.dx;
 if(VAR_5.dy + VAR_5.height > VAR_7) VAR_5.height = VAR_7 - VAR_5.dy;

 FUNC_3(VAR_4, &VAR_5);
}
