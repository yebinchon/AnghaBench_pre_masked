
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int t_checkpoint_io_list; int t_checkpoint_list; struct TYPE_4__* t_cpnext; struct TYPE_4__* t_cpprev; } ;
typedef TYPE_1__ transaction_t ;
struct TYPE_5__ {TYPE_1__* j_checkpoint_transactions; } ;
typedef TYPE_2__ journal_t ;


 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 () ;

void FUNC_2(journal_t *VAR_0, bool VAR_1)
{
 transaction_t *VAR_2, *VAR_3, *VAR_4;
 int VAR_5;

 VAR_2 = VAR_0->j_checkpoint_transactions;
 if (!VAR_2)
  return;

 VAR_3 = VAR_2->t_cpprev;
 VAR_4 = VAR_2;
 do {
  VAR_2 = VAR_4;
  VAR_4 = VAR_2->t_cpnext;
  VAR_5 = FUNC_0(VAR_2->t_checkpoint_list,
      VAR_1);





  if (FUNC_1())
   return;
  if (VAR_5)
   continue;





  VAR_5 = FUNC_0(VAR_2->
    t_checkpoint_io_list, VAR_1);
  if (FUNC_1())
   return;





  if (!VAR_5)
   return;
 } while (VAR_2 != VAR_3);
}
