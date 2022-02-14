
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct fb_info {int cmap; struct cg6_par* par; } ;
struct cg6_par {int dummy; } ;


 int FUNC_0 (struct platform_device*,struct fb_info*,struct cg6_par*) ;
 struct fb_info* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct fb_info*) ;
 int FUNC_4 (struct fb_info*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct fb_info *VAR_1 = FUNC_1(&VAR_0->dev);
 struct cg6_par *VAR_2 = VAR_1->par;

 FUNC_4(VAR_1);
 FUNC_2(&VAR_1->cmap);

 FUNC_0(VAR_0, VAR_1, VAR_2);

 FUNC_3(VAR_1);

 return 0;
}
