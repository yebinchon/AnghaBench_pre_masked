
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct journal_head* t_checkpoint_list; } ;
typedef TYPE_1__ transaction_t ;
struct journal_head {struct journal_head* b_cpprev; struct journal_head* b_cpnext; TYPE_1__* b_cp_transaction; } ;


 int FUNC_0 (struct journal_head*,char*) ;
 int FUNC_1 (struct journal_head*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct journal_head*) ;

void FUNC_6(struct journal_head *VAR_0,
          transaction_t *VAR_1)
{
 FUNC_0(VAR_0, "entry");
 FUNC_1(VAR_0, FUNC_2(FUNC_5(VAR_0)) || FUNC_3(FUNC_5(VAR_0)));
 FUNC_1(VAR_0, VAR_0->b_cp_transaction == ((void*)0));


 FUNC_4(FUNC_5(VAR_0));
 VAR_0->b_cp_transaction = VAR_1;

 if (!VAR_1->t_checkpoint_list) {
  VAR_0->b_cpnext = VAR_0->b_cpprev = VAR_0;
 } else {
  VAR_0->b_cpnext = VAR_1->t_checkpoint_list;
  VAR_0->b_cpprev = VAR_1->t_checkpoint_list->b_cpprev;
  VAR_0->b_cpprev->b_cpnext = VAR_0;
  VAR_0->b_cpnext->b_cpprev = VAR_0;
 }
 VAR_1->t_checkpoint_list = VAR_0;
}
