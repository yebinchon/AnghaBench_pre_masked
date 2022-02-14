
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* t_journal; struct journal_head* t_reserved_list; struct journal_head* t_shadow_list; struct journal_head* t_forget; struct journal_head* t_buffers; int t_nr_buffers; } ;
typedef TYPE_1__ transaction_t ;
struct journal_head {int b_jlist; TYPE_1__* b_transaction; } ;
struct buffer_head {int dummy; } ;
struct TYPE_4__ {int j_list_lock; } ;







 int VAR_0 ;
 int FUNC_0 (struct journal_head*,int) ;
 int FUNC_1 (struct journal_head**,struct journal_head*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct buffer_head*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct buffer_head*) ;
 struct buffer_head* FUNC_6 (struct journal_head*) ;
 int FUNC_7 (struct buffer_head*) ;
 scalar_t__ FUNC_8 (struct buffer_head*) ;

__attribute__((used)) static void FUNC_9(struct journal_head *VAR_1)
{
 struct journal_head **VAR_2 = ((void*)0);
 transaction_t *VAR_3;
 struct buffer_head *VAR_4 = FUNC_6(VAR_1);

 FUNC_0(VAR_1, FUNC_5(VAR_4));
 VAR_3 = VAR_1->b_transaction;
 if (VAR_3)
  FUNC_2(&VAR_3->t_journal->j_list_lock);

 FUNC_0(VAR_1, VAR_1->b_jlist < VAR_0);
 if (VAR_1->b_jlist != 130)
  FUNC_0(VAR_1, VAR_3 != ((void*)0));

 switch (VAR_1->b_jlist) {
 case 130:
  return;
 case 131:
  VAR_3->t_nr_buffers--;
  FUNC_0(VAR_1, VAR_3->t_nr_buffers >= 0);
  VAR_2 = &VAR_3->t_buffers;
  break;
 case 132:
  VAR_2 = &VAR_3->t_forget;
  break;
 case 128:
  VAR_2 = &VAR_3->t_shadow_list;
  break;
 case 129:
  VAR_2 = &VAR_3->t_reserved_list;
  break;
 }

 FUNC_1(VAR_2, VAR_1);
 VAR_1->b_jlist = 130;
 if (VAR_3 && FUNC_4(VAR_3->t_journal))
  FUNC_3(VAR_4);
 else if (FUNC_8(VAR_4))
  FUNC_7(VAR_4);
}
