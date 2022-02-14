
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8505fb_info {scalar_t__ regbase; } ;
struct fb_info {int dummy; } ;



 scalar_t__ VAR_0 ;
 struct wm8505fb_info* FUNC_0 (struct fb_info*) ;
 int FUNC_1 (struct fb_info*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(int VAR_1, struct fb_info *VAR_2)
{
 struct wm8505fb_info *VAR_3 = FUNC_0(VAR_2);

 switch (VAR_1) {
 case 128:
  FUNC_1(VAR_2);
  break;
 default:
  FUNC_2(0, VAR_3->regbase + VAR_0);
  break;
 }

 return 0;
}
