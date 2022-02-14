
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh7760fb_par {scalar_t__ fbdma; } ;
struct fb_info {scalar_t__ screen_size; int * screen_base; int dev; struct sh7760fb_par* par; } ;


 int FUNC_0 (int ,scalar_t__,int *,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct fb_info *VAR_0)
{
 struct sh7760fb_par *VAR_1 = VAR_0->par;

 if (!VAR_0->screen_base)
  return;

 FUNC_0(VAR_0->dev, VAR_0->screen_size,
     VAR_0->screen_base, VAR_1->fbdma);

 VAR_1->fbdma = 0;
 VAR_0->screen_base = ((void*)0);
 VAR_0->screen_size = 0;
}
