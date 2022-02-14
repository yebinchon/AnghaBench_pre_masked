
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_mobile_lcdc_overlay {int enabled; } ;
struct fb_info {struct sh_mobile_lcdc_overlay* par; } ;


 int FUNC_0 (struct sh_mobile_lcdc_overlay*) ;

__attribute__((used)) static int FUNC_1(int VAR_0, struct fb_info *VAR_1)
{
 struct sh_mobile_lcdc_overlay *VAR_2 = VAR_1->par;

 VAR_2->enabled = !VAR_0;
 FUNC_0(VAR_2);




 return 1;
}
