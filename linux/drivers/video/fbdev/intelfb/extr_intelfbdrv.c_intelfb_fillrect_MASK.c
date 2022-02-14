
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct intelfb_info {int depth; size_t* pseudo_palette; int pitch; } ;
struct TYPE_2__ {int bits_per_pixel; } ;
struct fb_info {TYPE_1__ var; } ;
struct fb_fillrect {scalar_t__ rop; size_t color; int height; int width; int dy; int dx; } ;


 int FUNC_0 (struct intelfb_info*,struct fb_info*) ;
 int FUNC_1 (char*) ;
 struct intelfb_info* FUNC_2 (struct fb_info*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (struct fb_info*,struct fb_fillrect const*) ;
 int FUNC_4 (struct intelfb_info*,int ,int ,int ,int ,size_t,int ,int ,size_t) ;

__attribute__((used)) static void FUNC_5 (struct fb_info *VAR_3,
         const struct fb_fillrect *VAR_4)
{
        struct intelfb_info *VAR_5 = FUNC_2(VAR_3);
 u32 VAR_6, VAR_7;





 if (!FUNC_0(VAR_5, VAR_3) || VAR_5->depth == 4) {
  FUNC_3(VAR_3, VAR_4);
  return;
 }

 if (VAR_4->rop == VAR_2)
  VAR_6 = VAR_0;
 else
  VAR_6 = VAR_1;

 if (VAR_5->depth != 8)
  VAR_7 = VAR_5->pseudo_palette[VAR_4->color];
 else
  VAR_7 = VAR_4->color;

 FUNC_4(VAR_5, VAR_4->dx, VAR_4->dy,
         VAR_4->width, VAR_4->height, VAR_7,
         VAR_5->pitch, VAR_3->var.bits_per_pixel,
         VAR_6);
}
