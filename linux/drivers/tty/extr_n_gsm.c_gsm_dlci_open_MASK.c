
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gsm_dlci {TYPE_1__* gsm; int addr; int state; int t1; } ;
struct TYPE_2__ {int event; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct gsm_dlci *VAR_2)
{


 FUNC_0(&VAR_2->t1);

 VAR_2->state = VAR_0;
 if (VAR_1 & 8)
  FUNC_1("DLCI %d goes open.\n", VAR_2->addr);
 FUNC_2(&VAR_2->gsm->event);
}
