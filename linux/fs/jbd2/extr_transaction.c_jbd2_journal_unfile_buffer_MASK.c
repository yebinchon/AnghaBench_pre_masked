
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct journal_head {int dummy; } ;
struct buffer_head {int dummy; } ;
struct TYPE_3__ {int j_list_lock; } ;
typedef TYPE_1__ journal_t ;


 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct journal_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;
 struct buffer_head* FUNC_5 (struct journal_head*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(journal_t *VAR_0, struct journal_head *VAR_1)
{
 struct buffer_head *VAR_2 = FUNC_5(VAR_1);


 FUNC_2(VAR_2);
 FUNC_3(VAR_2);
 FUNC_6(&VAR_0->j_list_lock);
 FUNC_1(VAR_1);
 FUNC_7(&VAR_0->j_list_lock);
 FUNC_4(VAR_2);
 FUNC_0(VAR_2);
}
