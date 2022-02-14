
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mfb_info {scalar_t__ registered; } ;
struct fb_info {int cmap; struct mfb_info* par; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct fb_info*) ;
 int FUNC_2 (struct fb_info*) ;

__attribute__((used)) static void FUNC_3(struct fb_info *VAR_0)
{
 struct mfb_info *VAR_1 = VAR_0->par;

 if (!VAR_1->registered)
  return;

 FUNC_2(VAR_0);
 FUNC_1(VAR_0);
 FUNC_0(&VAR_0->cmap);

 VAR_1->registered = 0;
}
