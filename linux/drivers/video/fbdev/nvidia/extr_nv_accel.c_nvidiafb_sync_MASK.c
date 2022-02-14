
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvidia_par {int lockup; } ;
struct fb_info {scalar_t__ state; struct nvidia_par* par; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct fb_info*) ;
 int FUNC_1 (struct fb_info*) ;

int FUNC_2(struct fb_info *VAR_1)
{
 struct nvidia_par *VAR_2 = VAR_1->par;

 if (VAR_1->state != VAR_0)
  return 0;

 if (!VAR_2->lockup)
  FUNC_0(VAR_1);

 if (!VAR_2->lockup)
  FUNC_1(VAR_1);

 return 0;
}
