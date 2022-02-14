
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {struct broadsheetfb_par* par; } ;
struct fb_fillrect {int dummy; } ;
struct broadsheetfb_par {int dummy; } ;


 int FUNC_0 (struct broadsheetfb_par*) ;
 int FUNC_1 (struct fb_info*,struct fb_fillrect const*) ;

__attribute__((used)) static void FUNC_2(struct fb_info *VAR_0,
       const struct fb_fillrect *VAR_1)
{
 struct broadsheetfb_par *VAR_2 = VAR_0->par;

 FUNC_1(VAR_0, VAR_1);

 FUNC_0(VAR_2);
}
