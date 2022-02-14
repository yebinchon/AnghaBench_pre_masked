
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct savagefb_par {int (* SavageWaitIdle ) (struct savagefb_par*) ;} ;
struct fb_info {struct savagefb_par* par; } ;


 int FUNC_0 (struct savagefb_par*) ;

int FUNC_1(struct fb_info *VAR_0)
{
 struct savagefb_par *VAR_1 = VAR_0->par;

 VAR_1->SavageWaitIdle(VAR_1);
 return 0;
}
