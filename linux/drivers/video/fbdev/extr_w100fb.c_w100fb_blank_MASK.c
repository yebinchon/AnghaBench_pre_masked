
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct w100fb_par {int blanked; TYPE_1__* mach; } ;
struct w100_tg_info {int (* resume ) (struct w100fb_par*) ;int (* suspend ) (struct w100fb_par*) ;} ;
struct fb_info {struct w100fb_par* par; } ;
struct TYPE_2__ {struct w100_tg_info* tg; } ;







 int FUNC_0 (struct w100fb_par*) ;
 int FUNC_1 (struct w100fb_par*) ;

__attribute__((used)) static int FUNC_2(int VAR_0, struct fb_info *VAR_1)
{
 struct w100fb_par *VAR_2 = VAR_1->par;
 struct w100_tg_info *VAR_3 = VAR_2->mach->tg;

 switch(VAR_0) {

  case 131:
 case 128:
 case 132:
  case 130:
    if (VAR_2->blanked == 0) {
   if(VAR_3 && VAR_3->suspend)
    VAR_3->suspend(VAR_2);
   VAR_2->blanked = 1;
    }
    break;

  case 129:
    if (VAR_2->blanked != 0) {
   if(VAR_3 && VAR_3->resume)
    VAR_3->resume(VAR_2);
   VAR_2->blanked = 0;
    }
    break;
  }
 return 0;
}
