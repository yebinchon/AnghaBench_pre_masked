
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct journal_head {TYPE_2__* b_transaction; scalar_t__ b_modified; TYPE_2__* b_next_transaction; } ;
struct buffer_head {int dummy; } ;
struct TYPE_4__ {scalar_t__ t_state; TYPE_1__* t_journal; } ;
struct TYPE_3__ {int j_list_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct journal_head*,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct journal_head*,TYPE_2__*,int) ;
 int FUNC_2 (struct journal_head*) ;
 int FUNC_3 (struct journal_head*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct buffer_head*) ;
 struct buffer_head* FUNC_7 (struct journal_head*) ;
 int FUNC_8 (struct buffer_head*) ;
 int FUNC_9 (struct buffer_head*) ;

void FUNC_10(struct journal_head *VAR_4)
{
 int VAR_5, VAR_6;
 struct buffer_head *VAR_7 = FUNC_7(VAR_4);

 FUNC_0(VAR_4, FUNC_6(VAR_7));
 if (VAR_4->b_transaction)
  FUNC_4(&VAR_4->b_transaction->t_journal->j_list_lock);


 if (VAR_4->b_next_transaction == ((void*)0)) {
  FUNC_3(VAR_4);
  return;
 }






 VAR_5 = FUNC_9(VAR_7);
 FUNC_2(VAR_4);





 VAR_4->b_transaction = VAR_4->b_next_transaction;
 VAR_4->b_next_transaction = ((void*)0);
 if (FUNC_5(VAR_7))
  VAR_6 = VAR_0;
 else if (VAR_4->b_modified)
  VAR_6 = VAR_1;
 else
  VAR_6 = VAR_2;
 FUNC_1(VAR_4, VAR_4->b_transaction, VAR_6);
 FUNC_0(VAR_4, VAR_4->b_transaction->t_state == VAR_3);

 if (VAR_5)
  FUNC_8(VAR_7);
}
