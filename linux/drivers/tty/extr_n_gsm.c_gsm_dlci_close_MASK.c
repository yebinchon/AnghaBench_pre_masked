
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gsm_dlci {scalar_t__ addr; TYPE_1__* gsm; int fifo; int port; int state; int t1; } ;
struct TYPE_2__ {int dead; int event; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct gsm_dlci *VAR_2)
{
 FUNC_0(&VAR_2->t1);
 if (VAR_1 & 8)
  FUNC_2("DLCI %d goes closed.\n", VAR_2->addr);
 VAR_2->state = VAR_0;
 if (VAR_2->addr != 0) {
  FUNC_3(&VAR_2->port, 0);
  FUNC_1(VAR_2->fifo);
 } else
  VAR_2->gsm->dead = 1;
 FUNC_4(&VAR_2->gsm->event);


}
