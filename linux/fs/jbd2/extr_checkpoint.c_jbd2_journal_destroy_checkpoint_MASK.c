
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int j_list_lock; int j_checkpoint_transactions; } ;
typedef TYPE_1__ journal_t ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(journal_t *VAR_0)
{




 while (1) {
  FUNC_2(&VAR_0->j_list_lock);
  if (!VAR_0->j_checkpoint_transactions) {
   FUNC_3(&VAR_0->j_list_lock);
   break;
  }
  FUNC_0(VAR_0, 1);
  FUNC_3(&VAR_0->j_list_lock);
  FUNC_1();
 }
}
