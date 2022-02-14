
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct neofb_par {TYPE_1__* neo2200; } ;
struct fb_info {struct neofb_par* par; } ;
struct TYPE_2__ {int bltStat; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline int FUNC_2(struct fb_info *VAR_0)
{
 struct neofb_par *VAR_1 = VAR_0->par;

 while (FUNC_1(&VAR_1->neo2200->bltStat) & 1)
  FUNC_0();
 return 0;
}
