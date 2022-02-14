
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {scalar_t__ par; } ;
struct atyfb_par {scalar_t__ blitter_may_be_busy; } ;


 int FUNC_0 (struct atyfb_par*) ;

__attribute__((used)) static int FUNC_1(struct fb_info *VAR_0)
{
 struct atyfb_par *VAR_1 = (struct atyfb_par *) VAR_0->par;

 if (VAR_1->blitter_may_be_busy)
  FUNC_0(VAR_1);
 return 0;
}
