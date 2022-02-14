
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvidia_par {int lockup; } ;
struct fb_info {scalar_t__ state; struct nvidia_par* par; } ;
struct fb_image {int depth; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct fb_info*,struct fb_image const*) ;
 int FUNC_1 (struct fb_info*,struct fb_image const*) ;

void FUNC_2(struct fb_info *VAR_1, const struct fb_image *VAR_2)
{
 struct nvidia_par *VAR_3 = VAR_1->par;

 if (VAR_1->state != VAR_0)
  return;

 if (VAR_2->depth == 1 && !VAR_3->lockup)
  FUNC_1(VAR_1, VAR_2);
 else
  FUNC_0(VAR_1, VAR_2);
}
