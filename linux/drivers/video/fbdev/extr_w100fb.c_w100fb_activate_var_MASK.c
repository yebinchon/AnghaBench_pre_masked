
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct w100fb_par {int blanked; TYPE_1__* mach; } ;
struct w100_tg_info {int (* change ) (struct w100fb_par*) ;} ;
struct TYPE_2__ {struct w100_tg_info* tg; } ;


 int FUNC_0 (struct w100fb_par*) ;
 int FUNC_1 (struct w100fb_par*) ;
 int FUNC_2 (struct w100fb_par*) ;
 int FUNC_3 (struct w100fb_par*) ;
 int FUNC_4 (struct w100fb_par*) ;
 int FUNC_5 (struct w100fb_par*) ;
 int FUNC_6 (struct w100fb_par*) ;
 int FUNC_7 (struct w100fb_par*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (struct w100fb_par*) ;

__attribute__((used)) static void FUNC_12(struct w100fb_par *VAR_0)
{
 struct w100_tg_info *VAR_1 = VAR_0->mach->tg;

 FUNC_5(VAR_0);
 FUNC_7(VAR_0);
 FUNC_2(VAR_0);
 FUNC_11(VAR_0);
 FUNC_10();

 FUNC_8();
 FUNC_4(VAR_0);
 FUNC_6(VAR_0);
 FUNC_9();
 FUNC_3(VAR_0);

 FUNC_0(VAR_0);

 if (!VAR_0->blanked && VAR_1 && VAR_1->change)
  VAR_1->change(VAR_0);
}
