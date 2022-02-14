
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcx_par {int lock; } ;
struct fb_info {scalar_t__ par; } ;


 int FUNC_0 (struct fb_info*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct fb_info *VAR_0)
{
 struct tcx_par *VAR_1 = (struct tcx_par *) VAR_0->par;
 unsigned long VAR_2;

 FUNC_1(&VAR_1->lock, VAR_2);
 FUNC_0(VAR_0);
 FUNC_2(&VAR_1->lock, VAR_2);
}
