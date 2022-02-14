
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvidia_par {scalar_t__ lockup; } ;
struct fb_info {scalar_t__ state; struct nvidia_par* par; } ;
struct fb_copyarea {int sy; int sx; int dy; int dx; int height; int width; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct nvidia_par*) ;
 int FUNC_1 (struct nvidia_par*,int) ;
 int FUNC_2 (struct fb_info*,struct nvidia_par*,int ,int) ;
 int FUNC_3 (struct fb_info*,struct fb_copyarea const*) ;

void FUNC_4(struct fb_info *VAR_2, const struct fb_copyarea *VAR_3)
{
 struct nvidia_par *VAR_4 = VAR_2->par;

 if (VAR_2->state != VAR_1)
  return;

 if (VAR_4->lockup) {
  FUNC_3(VAR_2, VAR_3);
  return;
 }

 FUNC_2(VAR_2, VAR_4, VAR_0, 3);
 FUNC_1(VAR_4, (VAR_3->sy << 16) | VAR_3->sx);
 FUNC_1(VAR_4, (VAR_3->dy << 16) | VAR_3->dx);
 FUNC_1(VAR_4, (VAR_3->height << 16) | VAR_3->width);

 FUNC_0(VAR_4);
}
