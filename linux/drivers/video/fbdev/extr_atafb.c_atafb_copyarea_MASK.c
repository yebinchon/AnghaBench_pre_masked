
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int bits_per_pixel; int xres_virtual; int yres_virtual; } ;
struct fb_info {TYPE_1__ var; scalar_t__ par; } ;
struct fb_copyarea {int dx; int width; int dy; int height; int sx; int sy; } ;
struct atafb_par {int next_line; } ;


 int FUNC_0 (struct fb_info*,int ,int,int,int,int,int,int) ;
 int FUNC_1 (struct fb_info*,int ,int,int,int,int,int,int) ;
 int FUNC_2 (struct fb_info*,int ,int,int,int,int,int,int) ;
 int FUNC_3 (struct fb_info*,int ,int,int,int,int,int,int) ;
 int FUNC_4 (struct fb_info*,struct fb_copyarea const*) ;

__attribute__((used)) static void FUNC_5(struct fb_info *VAR_0, const struct fb_copyarea *VAR_1)
{
 struct atafb_par *VAR_2 = (struct atafb_par *)VAR_0->par;
 int VAR_3, VAR_4;
 u32 VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11 = 0;
 VAR_3 = VAR_1->dx + VAR_1->width;
 VAR_4 = VAR_1->dy + VAR_1->height;
 VAR_5 = VAR_1->dx > 0 ? VAR_1->dx : 0;
 VAR_6 = VAR_1->dy > 0 ? VAR_1->dy : 0;
 VAR_3 = VAR_3 < VAR_0->var.xres_virtual ? VAR_3 : VAR_0->var.xres_virtual;
 VAR_4 = VAR_4 < VAR_0->var.yres_virtual ? VAR_4 : VAR_0->var.yres_virtual;
 VAR_9 = VAR_3 - VAR_5;
 VAR_10 = VAR_4 - VAR_6;

 if (VAR_1->sx + VAR_5 < VAR_1->dx || VAR_1->sy + VAR_6 < VAR_1->dy)
  return;


 VAR_7 = VAR_1->sx + (VAR_5 - VAR_1->dx);
 VAR_8 = VAR_1->sy + (VAR_6 - VAR_1->dy);


 if (VAR_7 + VAR_9 > VAR_0->var.xres_virtual ||
   VAR_8 + VAR_10 > VAR_0->var.yres_virtual)
  return;

 if (VAR_6 > VAR_8 || (VAR_6 == VAR_8 && VAR_5 > VAR_7)) {
  VAR_6 += VAR_10;
  VAR_8 += VAR_10;
  VAR_11 = 1;
 }

 if (VAR_0->var.bits_per_pixel == 1)
  FUNC_3(VAR_0, VAR_2->next_line, VAR_8, VAR_7, VAR_6, VAR_5, VAR_10, VAR_9);
 else if (VAR_0->var.bits_per_pixel == 2)
  FUNC_0(VAR_0, VAR_2->next_line, VAR_8, VAR_7, VAR_6, VAR_5, VAR_10, VAR_9);
 else if (VAR_0->var.bits_per_pixel == 4)
  FUNC_1(VAR_0, VAR_2->next_line, VAR_8, VAR_7, VAR_6, VAR_5, VAR_10, VAR_9);
 else
  FUNC_2(VAR_0, VAR_2->next_line, VAR_8, VAR_7, VAR_6, VAR_5, VAR_10, VAR_9);

 return;
}
