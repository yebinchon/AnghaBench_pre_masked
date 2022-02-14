
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvidia_par {scalar_t__ lockup; } ;
struct TYPE_2__ {int bits_per_pixel; } ;
struct fb_info {scalar_t__ state; scalar_t__ pseudo_palette; TYPE_1__ var; struct nvidia_par* par; } ;
struct fb_fillrect {int color; scalar_t__ rop; int dx; int dy; int width; int height; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct nvidia_par*) ;
 int FUNC_1 (struct nvidia_par*,int) ;
 int FUNC_2 (struct fb_info*,struct nvidia_par*,int ,int) ;
 int FUNC_3 (struct fb_info*,scalar_t__,int ) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (struct fb_info*,struct fb_fillrect const*) ;

void FUNC_6(struct fb_info *VAR_3, const struct fb_fillrect *VAR_4)
{
 struct nvidia_par *VAR_5 = VAR_3->par;
 u32 VAR_6;

 if (VAR_3->state != VAR_0)
  return;

 if (VAR_5->lockup) {
  FUNC_5(VAR_3, VAR_4);
  return;
 }

 if (VAR_3->var.bits_per_pixel == 8)
  VAR_6 = VAR_4->color;
 else
  VAR_6 = ((u32 *) VAR_3->pseudo_palette)[VAR_4->color];

 if (VAR_4->rop != VAR_2)
  FUNC_3(VAR_3, VAR_4->rop, ~0);

 FUNC_2(VAR_3, VAR_5, VAR_1, 1);
 FUNC_1(VAR_5, VAR_6);

 FUNC_2(VAR_3, VAR_5, FUNC_4(0), 2);
 FUNC_1(VAR_5, (VAR_4->dx << 16) | VAR_4->dy);
 FUNC_1(VAR_5, (VAR_4->width << 16) | VAR_4->height);

 FUNC_0(VAR_5);

 if (VAR_4->rop != VAR_2)
  FUNC_3(VAR_3, VAR_2, ~0);
}
