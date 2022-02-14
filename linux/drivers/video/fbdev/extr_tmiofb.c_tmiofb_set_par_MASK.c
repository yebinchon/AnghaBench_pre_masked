
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fb_videomode {int xres; } ;
struct fb_var_screeninfo {int bits_per_pixel; } ;
struct TYPE_2__ {int line_length; } ;
struct fb_info {int device; struct fb_videomode* mode; TYPE_1__ fix; struct fb_var_screeninfo var; } ;


 int VAR_0 ;
 int FUNC_0 (struct fb_info*) ;
 struct fb_videomode* FUNC_1 (struct fb_info*,struct fb_var_screeninfo*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct fb_info *VAR_1)
{
 struct fb_var_screeninfo *VAR_2 = &VAR_1->var;
 struct fb_videomode *VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (!VAR_3)
  return -VAR_0;

 VAR_1->mode = VAR_3;
 VAR_1->fix.line_length = VAR_1->mode->xres *
   VAR_2->bits_per_pixel / 8;

 FUNC_2(FUNC_3(VAR_1->device));
 FUNC_0(VAR_1);
 return 0;
}
