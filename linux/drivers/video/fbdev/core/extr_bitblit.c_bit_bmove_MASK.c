
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int width; int height; } ;
struct vc_data {TYPE_1__ vc_font; } ;
struct fb_info {TYPE_2__* fbops; } ;
struct fb_copyarea {int sx; int sy; int dx; int dy; int height; int width; } ;
struct TYPE_4__ {int (* fb_copyarea ) (struct fb_info*,struct fb_copyarea*) ;} ;


 int FUNC_0 (struct fb_info*,struct fb_copyarea*) ;

__attribute__((used)) static void FUNC_1(struct vc_data *VAR_0, struct fb_info *VAR_1, int VAR_2,
        int VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 struct fb_copyarea VAR_8;

 VAR_8.sx = VAR_3 * VAR_0->vc_font.width;
 VAR_8.sy = VAR_2 * VAR_0->vc_font.height;
 VAR_8.dx = VAR_5 * VAR_0->vc_font.width;
 VAR_8.dy = VAR_4 * VAR_0->vc_font.height;
 VAR_8.height = VAR_6 * VAR_0->vc_font.height;
 VAR_8.width = VAR_7 * VAR_0->vc_font.width;

 VAR_1->fbops->fb_copyarea(VAR_1, &VAR_8);
}
