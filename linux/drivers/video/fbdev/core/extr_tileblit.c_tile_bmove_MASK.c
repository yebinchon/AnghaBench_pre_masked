
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vc_data {int dummy; } ;
struct fb_tilearea {int sx; int sy; int dx; int dy; int height; int width; } ;
struct fb_info {TYPE_1__* tileops; } ;
struct TYPE_2__ {int (* fb_tilecopy ) (struct fb_info*,struct fb_tilearea*) ;} ;


 int FUNC_0 (struct fb_info*,struct fb_tilearea*) ;

__attribute__((used)) static void FUNC_1(struct vc_data *VAR_0, struct fb_info *VAR_1, int VAR_2,
         int VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 struct fb_tilearea VAR_8;

 VAR_8.sx = VAR_3;
 VAR_8.sy = VAR_2;
 VAR_8.dx = VAR_5;
 VAR_8.dy = VAR_4;
 VAR_8.height = VAR_6;
 VAR_8.width = VAR_7;

 VAR_1->tileops->fb_tilecopy(VAR_1, &VAR_8);
}
