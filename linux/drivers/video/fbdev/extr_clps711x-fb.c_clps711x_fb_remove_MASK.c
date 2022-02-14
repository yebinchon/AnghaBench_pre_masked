
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct fb_info {int cmap; struct clps711x_fb_info* par; } ;
struct clps711x_fb_info {int syscon; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct fb_info*) ;
 struct fb_info* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (struct fb_info*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_2)
{
 struct fb_info *VAR_3 = FUNC_2(VAR_2);
 struct clps711x_fb_info *VAR_4 = VAR_3->par;

 FUNC_3(VAR_4->syscon, VAR_1, VAR_0, 0);

 FUNC_4(VAR_3);
 FUNC_0(&VAR_3->cmap);
 FUNC_1(VAR_3);

 return 0;
}
