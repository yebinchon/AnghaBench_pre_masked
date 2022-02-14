
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct journal_head {int * b_cp_transaction; int * b_transaction; int * b_next_transaction; } ;
struct buffer_head {int dummy; } ;
struct TYPE_3__ {int j_list_lock; } ;
typedef TYPE_1__ journal_t ;


 int FUNC_0 (struct journal_head*,char*) ;
 int FUNC_1 (struct journal_head*) ;
 struct journal_head* FUNC_2 (struct buffer_head*) ;
 scalar_t__ FUNC_3 (struct buffer_head*) ;
 scalar_t__ FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(journal_t *VAR_0, struct buffer_head *VAR_1)
{
 struct journal_head *VAR_2;

 VAR_2 = FUNC_2(VAR_1);

 if (FUNC_4(VAR_1) || FUNC_3(VAR_1))
  goto out;

 if (VAR_2->b_next_transaction != ((void*)0) || VAR_2->b_transaction != ((void*)0))
  goto out;

 FUNC_5(&VAR_0->j_list_lock);
 if (VAR_2->b_cp_transaction != ((void*)0)) {

  FUNC_0(VAR_2, "remove from checkpoint list");
  FUNC_1(VAR_2);
 }
 FUNC_6(&VAR_0->j_list_lock);
out:
 return;
}
