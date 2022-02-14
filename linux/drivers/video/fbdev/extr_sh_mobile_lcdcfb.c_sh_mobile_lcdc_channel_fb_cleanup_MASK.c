
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_mobile_lcdc_chan {int sglist; struct fb_info* info; } ;
struct fb_info {int cmap; int device; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct fb_info*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct sh_mobile_lcdc_chan *VAR_0)
{
 struct fb_info *VAR_1 = VAR_0->info;

 if (!VAR_1 || !VAR_1->device)
  return;

 FUNC_2(VAR_0->sglist);

 FUNC_0(&VAR_1->cmap);
 FUNC_1(VAR_1);
}
