
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_state; int i_lock; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct inode* FUNC_1 (struct dentry*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct dentry *VAR_1)
{
 if (VAR_1) {
  struct inode *VAR_2 = FUNC_1(VAR_1);

  FUNC_2(&VAR_2->i_lock);
  FUNC_0(!(VAR_2->i_state & VAR_0));
  VAR_2->i_state &= ~VAR_0;
  FUNC_3(&VAR_2->i_lock);
 }
}
