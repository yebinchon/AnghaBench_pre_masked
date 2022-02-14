
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hvfb_par {scalar_t__ synchronous_fb; } ;
struct fb_info {struct hvfb_par* par; } ;
struct fb_fillrect {int dummy; } ;


 int FUNC_0 (struct fb_info*,struct fb_fillrect const*) ;
 int FUNC_1 (struct fb_info*) ;

__attribute__((used)) static void FUNC_2(struct fb_info *VAR_0,
         const struct fb_fillrect *VAR_1)
{
 struct hvfb_par *VAR_2 = VAR_0->par;

 FUNC_0(VAR_0, VAR_1);
 if (VAR_2->synchronous_fb)
  FUNC_1(VAR_0);
}
