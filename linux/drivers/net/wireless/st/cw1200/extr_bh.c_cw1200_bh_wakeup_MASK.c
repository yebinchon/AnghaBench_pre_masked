
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cw1200_common {int bh_wq; int bh_tx; scalar_t__ bh_error; } ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct cw1200_common *VAR_0)
{
 FUNC_1("[BH] wakeup.\n");
 if (VAR_0->bh_error) {
  FUNC_2("[BH] wakeup failed (BH error)\n");
  return;
 }

 if (FUNC_0(1, &VAR_0->bh_tx) == 1)
  FUNC_3(&VAR_0->bh_wq);
}
