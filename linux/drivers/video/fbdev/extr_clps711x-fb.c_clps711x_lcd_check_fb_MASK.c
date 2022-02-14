
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lcd_device {int dev; } ;
struct fb_info {struct clps711x_fb_info* par; } ;
struct clps711x_fb_info {int dummy; } ;


 struct clps711x_fb_info* FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct lcd_device *VAR_0, struct fb_info *VAR_1)
{
 struct clps711x_fb_info *VAR_2 = FUNC_0(&VAR_0->dev);

 return (!VAR_1 || VAR_1->par == VAR_2) ? 1 : 0;
}
