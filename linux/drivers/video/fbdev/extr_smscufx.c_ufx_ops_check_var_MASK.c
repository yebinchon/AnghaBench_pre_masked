
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fb_videomode {int dummy; } ;
struct fb_var_screeninfo {int xres; int yres; } ;
struct TYPE_2__ {int smem_len; } ;
struct fb_info {TYPE_1__ fix; } ;


 int VAR_0 ;
 int FUNC_0 (struct fb_videomode*,struct fb_var_screeninfo*) ;
 int FUNC_1 (struct fb_videomode*,struct fb_info*) ;
 int FUNC_2 (struct fb_var_screeninfo*) ;

__attribute__((used)) static int FUNC_3(struct fb_var_screeninfo *VAR_1,
    struct fb_info *VAR_2)
{
 struct fb_videomode VAR_3;


 if ((VAR_1->xres * VAR_1->yres * 2) > VAR_2->fix.smem_len)
  return -VAR_0;


 FUNC_2(VAR_1);

 FUNC_0(&VAR_3, VAR_1);

 if (!FUNC_1(&VAR_3, VAR_2))
  return -VAR_0;

 return 0;
}
