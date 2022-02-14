
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intelfb_info {int depth; int pitch; } ;
struct TYPE_2__ {int bits_per_pixel; } ;
struct fb_info {TYPE_1__ var; } ;
struct fb_copyarea {int height; int width; int dy; int dx; int sy; int sx; } ;


 int FUNC_0 (struct intelfb_info*,struct fb_info*) ;
 int FUNC_1 (char*) ;
 struct intelfb_info* FUNC_2 (struct fb_info*) ;
 int FUNC_3 (struct fb_info*,struct fb_copyarea const*) ;
 int FUNC_4 (struct intelfb_info*,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct fb_info *VAR_0,
        const struct fb_copyarea *VAR_1)
{
        struct intelfb_info *VAR_2 = FUNC_2(VAR_0);





 if (!FUNC_0(VAR_2, VAR_0) || VAR_2->depth == 4) {
  FUNC_3(VAR_0, VAR_1);
  return;
 }

 FUNC_4(VAR_2, VAR_1->sx, VAR_1->sy, VAR_1->dx,
       VAR_1->dy, VAR_1->width, VAR_1->height,
       VAR_2->pitch, VAR_0->var.bits_per_pixel);
}
