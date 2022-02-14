
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * par; int adapter; } ;
struct savagefb_par {TYPE_1__ chan; } ;
struct fb_info {struct savagefb_par* par; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct fb_info *VAR_0)
{
 struct savagefb_par *VAR_1 = VAR_0->par;

 if (VAR_1->chan.par)
  FUNC_0(&VAR_1->chan.adapter);

 VAR_1->chan.par = ((void*)0);
}
