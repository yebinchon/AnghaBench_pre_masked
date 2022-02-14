
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct metronomefb_par {int dummy; } ;
struct fb_info {struct metronomefb_par* par; } ;
struct fb_copyarea {int dummy; } ;


 int FUNC_0 (struct metronomefb_par*) ;
 int FUNC_1 (struct fb_info*,struct fb_copyarea const*) ;

__attribute__((used)) static void FUNC_2(struct fb_info *VAR_0,
       const struct fb_copyarea *VAR_1)
{
 struct metronomefb_par *VAR_2 = VAR_0->par;

 FUNC_1(VAR_0, VAR_1);
 FUNC_0(VAR_2);
}
