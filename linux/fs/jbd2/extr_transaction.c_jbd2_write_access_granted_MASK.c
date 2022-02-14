
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct journal_head {scalar_t__ b_transaction; scalar_t__ b_next_transaction; struct buffer_head* b_bh; int b_committed_data; } ;
struct buffer_head {int b_private; } ;
struct TYPE_3__ {scalar_t__ h_transaction; } ;
typedef TYPE_1__ handle_t ;


 struct journal_head* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static bool FUNC_7(handle_t *VAR_0, struct buffer_head *VAR_1,
       bool VAR_2)
{
 struct journal_head *VAR_3;
 bool VAR_4 = 0;


 if (FUNC_1(VAR_1))
  return 0;
 FUNC_3();
 if (!FUNC_2(VAR_1))
  goto out;

 VAR_3 = FUNC_0(VAR_1->b_private);
 if (!VAR_3)
  goto out;

 if (VAR_2 && !VAR_3->b_committed_data)
  goto out;
 if (VAR_3->b_transaction != VAR_0->h_transaction &&
     VAR_3->b_next_transaction != VAR_0->h_transaction)
  goto out;
 FUNC_5();
 if (FUNC_6(VAR_3->b_bh != VAR_1))
  goto out;
 VAR_4 = 1;
out:
 FUNC_4();
 return VAR_4;
}
