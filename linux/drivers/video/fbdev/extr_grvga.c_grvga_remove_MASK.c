
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int * resource; int dev; } ;
struct grvga_par {int fb_alloced; int regs; } ;
struct fb_info {scalar_t__ screen_base; int cmap; struct grvga_par* par; } ;


 struct fb_info* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct fb_info*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct fb_info*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_0)
{
 struct fb_info *VAR_1 = FUNC_0(&VAR_0->dev);
 struct grvga_par *VAR_2;

 if (VAR_1) {
  VAR_2 = VAR_1->par;
  FUNC_7(VAR_1);
  FUNC_1(&VAR_1->cmap);

  FUNC_5(&VAR_0->resource[0], VAR_2->regs,
      FUNC_6(&VAR_0->resource[0]));

  if (!VAR_2->fb_alloced)
   FUNC_3(VAR_1->screen_base);
  else
   FUNC_4((void *)VAR_1->screen_base);

  FUNC_2(VAR_1);
 }

 return 0;
}
