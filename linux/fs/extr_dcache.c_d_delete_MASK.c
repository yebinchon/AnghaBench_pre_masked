
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_lock; } ;
struct TYPE_2__ {int count; } ;
struct dentry {int d_lock; int d_flags; TYPE_1__ d_lockref; struct inode* d_inode; } ;


 int VAR_0 ;
 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct dentry * VAR_1)
{
 struct inode *VAR_2 = VAR_1->d_inode;

 FUNC_2(&VAR_2->i_lock);
 FUNC_2(&VAR_1->d_lock);



 if (VAR_1->d_lockref.count == 1) {
  VAR_1->d_flags &= ~VAR_0;
  FUNC_1(VAR_1);
 } else {
  FUNC_0(VAR_1);
  FUNC_3(&VAR_1->d_lock);
  FUNC_3(&VAR_2->i_lock);
 }
}
