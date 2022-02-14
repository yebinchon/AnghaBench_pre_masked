
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_host {int caps; int wq; int lock; TYPE_1__* claimer; scalar_t__ claimed; scalar_t__ claim_cnt; } ;
struct TYPE_2__ {int * task; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct mmc_host *VAR_1)
{
 unsigned long VAR_2;

 FUNC_0(!VAR_1->claimed);

 FUNC_5(&VAR_1->lock, VAR_2);
 if (--VAR_1->claim_cnt) {

  FUNC_6(&VAR_1->lock, VAR_2);
 } else {
  VAR_1->claimed = 0;
  VAR_1->claimer->task = ((void*)0);
  VAR_1->claimer = ((void*)0);
  FUNC_6(&VAR_1->lock, VAR_2);
  FUNC_7(&VAR_1->wq);
  FUNC_2(FUNC_1(VAR_1));
  if (VAR_1->caps & VAR_0)
   FUNC_4(FUNC_1(VAR_1));
  else
   FUNC_3(FUNC_1(VAR_1));
 }
}
