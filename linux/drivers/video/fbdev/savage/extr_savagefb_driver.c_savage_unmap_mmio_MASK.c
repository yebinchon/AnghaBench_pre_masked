
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * vbase; } ;
struct savagefb_par {TYPE_1__ mmio; } ;
struct fb_info {struct savagefb_par* par; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct savagefb_par*) ;

__attribute__((used)) static void FUNC_3(struct fb_info *VAR_0)
{
 struct savagefb_par *VAR_1 = VAR_0->par;
 FUNC_0("savage_unmap_mmio");

 FUNC_2(VAR_1);

 if (VAR_1->mmio.vbase) {
  FUNC_1(VAR_1->mmio.vbase);
  VAR_1->mmio.vbase = ((void*)0);
 }
}
