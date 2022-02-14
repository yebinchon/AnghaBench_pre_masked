
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {int dummy; } ;
struct fb_copyarea {int height; int width; int dy; int dx; int sy; int sx; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct fb_info *VAR_1, const struct fb_copyarea *VAR_2)
{
 FUNC_0(VAR_2->sx, VAR_2->sy, VAR_2->dx, VAR_2->dy, VAR_2->width, VAR_2->height, VAR_0);
}
