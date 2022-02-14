
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct fb_info {int cmap; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct fb_info*) ;
 struct fb_info* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct fb_info*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct fb_info *VAR_1 = FUNC_2(VAR_0);

 FUNC_3(VAR_1);
 FUNC_0(&VAR_1->cmap);
 FUNC_1(VAR_1);

 return 0;
}
