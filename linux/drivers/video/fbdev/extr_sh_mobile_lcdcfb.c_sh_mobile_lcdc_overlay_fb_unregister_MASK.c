
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_mobile_lcdc_overlay {struct fb_info* info; } ;
struct fb_info {int * dev; } ;


 int FUNC_0 (struct fb_info*) ;

__attribute__((used)) static void
FUNC_1(struct sh_mobile_lcdc_overlay *VAR_0)
{
 struct fb_info *VAR_1 = VAR_0->info;

 if (VAR_1 == ((void*)0) || VAR_1->dev == ((void*)0))
  return;

 FUNC_0(VAR_0->info);
}
