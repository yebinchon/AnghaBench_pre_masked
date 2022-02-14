
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8505fb_info {scalar_t__ regbase; } ;
struct fb_var_screeninfo {int yoffset; int xoffset; } ;
struct fb_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct wm8505fb_info* FUNC_0 (struct fb_info*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct fb_var_screeninfo *VAR_2,
    struct fb_info *VAR_3)
{
 struct wm8505fb_info *VAR_4 = FUNC_0(VAR_3);

 FUNC_1(VAR_2->xoffset, VAR_4->regbase + VAR_0);
 FUNC_1(VAR_2->yoffset, VAR_4->regbase + VAR_1);
 return 0;
}
