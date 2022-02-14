
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int * resource; int dev; } ;
struct ffb_par {int dac; int fbc; } ;
struct ffb_fbc {int dummy; } ;
struct ffb_dac {int dummy; } ;
struct fb_info {int cmap; struct ffb_par* par; } ;


 struct fb_info* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct fb_info*) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (struct fb_info*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct fb_info *VAR_1 = FUNC_0(&VAR_0->dev);
 struct ffb_par *VAR_2 = VAR_1->par;

 FUNC_4(VAR_1);
 FUNC_1(&VAR_1->cmap);

 FUNC_3(&VAR_0->resource[2], VAR_2->fbc, sizeof(struct ffb_fbc));
 FUNC_3(&VAR_0->resource[1], VAR_2->dac, sizeof(struct ffb_dac));

 FUNC_2(VAR_1);

 return 0;
}
