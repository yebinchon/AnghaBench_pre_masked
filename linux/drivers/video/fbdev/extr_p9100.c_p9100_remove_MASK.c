
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int * resource; int dev; } ;
struct p9100_regs {int dummy; } ;
struct p9100_par {int regs; } ;
struct TYPE_2__ {int smem_len; } ;
struct fb_info {TYPE_1__ fix; int screen_base; int cmap; struct p9100_par* par; } ;


 struct fb_info* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct fb_info*) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (struct fb_info*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct fb_info *VAR_1 = FUNC_0(&VAR_0->dev);
 struct p9100_par *VAR_2 = VAR_1->par;

 FUNC_4(VAR_1);
 FUNC_1(&VAR_1->cmap);

 FUNC_3(&VAR_0->resource[0], VAR_2->regs, sizeof(struct p9100_regs));
 FUNC_3(&VAR_0->resource[2], VAR_1->screen_base, VAR_1->fix.smem_len);

 FUNC_2(VAR_1);

 return 0;
}
