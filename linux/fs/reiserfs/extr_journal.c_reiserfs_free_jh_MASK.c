
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reiserfs_jh {int list; int * bh; } ;
struct buffer_head {struct reiserfs_jh* b_private; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct reiserfs_jh*) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int FUNC_5 (struct buffer_head*) ;

void FUNC_6(struct buffer_head *VAR_1)
{
 struct reiserfs_jh *VAR_2;

 VAR_2 = VAR_1->b_private;
 if (VAR_2) {
  VAR_1->b_private = ((void*)0);
  VAR_2->bh = ((void*)0);
  FUNC_4(&VAR_2->list);
  FUNC_3(VAR_2);
  if (FUNC_2(&VAR_0) <= 0)
   FUNC_0();
  FUNC_1(&VAR_0);
  FUNC_5(VAR_1);
 }
}
