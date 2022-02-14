
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lcd_device {int dev; } ;
struct imxfb_info {int dummy; } ;
struct fb_info {struct imxfb_info* par; } ;


 struct imxfb_info* FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct lcd_device *VAR_0, struct fb_info *VAR_1)
{
 struct imxfb_info *VAR_2 = FUNC_0(&VAR_0->dev);

 if (!VAR_1 || VAR_1->par == VAR_2)
  return 1;

 return 0;
}
