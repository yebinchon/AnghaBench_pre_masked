
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcx_par {int dummy; } ;
struct platform_device {int dev; } ;
struct fb_info {int cmap; struct tcx_par* par; } ;


 struct fb_info* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct fb_info*) ;
 int FUNC_3 (struct platform_device*,struct fb_info*,struct tcx_par*) ;
 int FUNC_4 (struct fb_info*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct fb_info *VAR_1 = FUNC_0(&VAR_0->dev);
 struct tcx_par *VAR_2 = VAR_1->par;

 FUNC_4(VAR_1);
 FUNC_1(&VAR_1->cmap);

 FUNC_3(VAR_0, VAR_1, VAR_2);

 FUNC_2(VAR_1);

 return 0;
}
