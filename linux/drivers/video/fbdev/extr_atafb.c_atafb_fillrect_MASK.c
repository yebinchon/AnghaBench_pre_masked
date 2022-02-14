
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int bits_per_pixel; int xres_virtual; int yres_virtual; } ;
struct fb_info {TYPE_1__ var; scalar_t__ par; } ;
struct fb_fillrect {int width; int height; int dx; int dy; int color; } ;
struct atafb_par {int next_line; } ;


 int FUNC_0 (struct fb_info*,int ,int ,int,int,int,int) ;
 int FUNC_1 (struct fb_info*,int ,int ,int,int,int,int) ;
 int FUNC_2 (struct fb_info*,int ,int ,int,int,int,int) ;
 int FUNC_3 (struct fb_info*,int ,int ,int,int,int,int) ;
 int FUNC_4 (struct fb_info*,struct fb_fillrect const*) ;

__attribute__((used)) static void FUNC_5(struct fb_info *VAR_0, const struct fb_fillrect *VAR_1)
{
 struct atafb_par *VAR_2 = (struct atafb_par *)VAR_0->par;
 int VAR_3, VAR_4;
 u32 VAR_5, VAR_6;

 if (!VAR_1->width || !VAR_1->height)
  return;
 VAR_3 = VAR_1->dx + VAR_1->width;
 VAR_4 = VAR_1->dy + VAR_1->height;
 VAR_3 = VAR_3 < VAR_0->var.xres_virtual ? VAR_3 : VAR_0->var.xres_virtual;
 VAR_4 = VAR_4 < VAR_0->var.yres_virtual ? VAR_4 : VAR_0->var.yres_virtual;
 VAR_5 = VAR_3 - VAR_1->dx;
 VAR_6 = VAR_4 - VAR_1->dy;

 if (VAR_0->var.bits_per_pixel == 1)
  FUNC_3(VAR_0, VAR_2->next_line, VAR_1->color,
       VAR_1->dy, VAR_1->dx, VAR_6, VAR_5);
 else if (VAR_0->var.bits_per_pixel == 2)
  FUNC_0(VAR_0, VAR_2->next_line, VAR_1->color,
     VAR_1->dy, VAR_1->dx, VAR_6, VAR_5);
 else if (VAR_0->var.bits_per_pixel == 4)
  FUNC_1(VAR_0, VAR_2->next_line, VAR_1->color,
     VAR_1->dy, VAR_1->dx, VAR_6, VAR_5);
 else
  FUNC_2(VAR_0, VAR_2->next_line, VAR_1->color,
     VAR_1->dy, VAR_1->dx, VAR_6, VAR_5);

 return;
}
