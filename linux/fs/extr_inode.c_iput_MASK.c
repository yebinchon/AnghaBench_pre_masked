
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_state; int i_lock; int i_count; scalar_t__ i_nlink; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct inode*) ;

void FUNC_7(struct inode *VAR_2)
{
 if (!VAR_2)
  return;
 FUNC_0(VAR_2->i_state & VAR_0);
retry:
 if (FUNC_1(&VAR_2->i_count, &VAR_2->i_lock)) {
  if (VAR_2->i_nlink && (VAR_2->i_state & VAR_1)) {
   FUNC_2(&VAR_2->i_count);
   FUNC_5(&VAR_2->i_lock);
   FUNC_6(VAR_2);
   FUNC_4(VAR_2);
   goto retry;
  }
  FUNC_3(VAR_2);
 }
}
