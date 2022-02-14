
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bits_per_pixel; } ;
struct fb_info {TYPE_1__ var; } ;
struct fb_copyarea {int height; int width; int dy; int dx; int sy; int sx; } ;


 int FUNC_0 (int,int ,int ,int ,int ,int ,int ,int,int ) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct fb_info *VAR_0, const struct fb_copyarea *VAR_1)
{
 FUNC_1();
 FUNC_0(VAR_0->var.bits_per_pixel == 16, VAR_1->sx, VAR_1->sy,
      VAR_1->dx, VAR_1->dy, VAR_1->width, VAR_1->height,
      0x00cc, 0);
}
