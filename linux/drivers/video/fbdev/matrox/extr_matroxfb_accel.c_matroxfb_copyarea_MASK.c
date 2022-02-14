
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int xres_virtual; } ;
struct TYPE_4__ {TYPE_1__ var; } ;
struct matrox_fb_info {TYPE_2__ fbcon; } ;
struct fb_info {int dummy; } ;
struct fb_copyarea {int width; int height; int dx; int dy; int sx; int sy; } ;


 struct matrox_fb_info* FUNC_0 (struct fb_info*) ;
 int FUNC_1 (struct matrox_fb_info*,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct fb_info* VAR_0, const struct fb_copyarea* VAR_1) {
 struct matrox_fb_info *VAR_2 = FUNC_0(VAR_0);

 FUNC_1(VAR_2, VAR_2->fbcon.var.xres_virtual, VAR_1->sy, VAR_1->sx, VAR_1->dy, VAR_1->dx, VAR_1->height, VAR_1->width);
}
