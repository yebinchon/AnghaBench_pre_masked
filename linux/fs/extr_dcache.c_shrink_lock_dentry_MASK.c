
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_lock; } ;
struct TYPE_2__ {int count; } ;
struct dentry {int d_lock; TYPE_1__ d_lockref; struct dentry* d_parent; struct inode* d_inode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static bool FUNC_7(struct dentry *VAR_1)
{
 struct inode *VAR_2;
 struct dentry *VAR_3;

 if (VAR_1->d_lockref.count)
  return 0;

 VAR_2 = VAR_1->d_inode;
 if (VAR_2 && FUNC_6(!FUNC_4(&VAR_2->i_lock))) {
  FUNC_5(&VAR_1->d_lock);
  FUNC_2(&VAR_2->i_lock);
  FUNC_2(&VAR_1->d_lock);
  if (FUNC_6(VAR_1->d_lockref.count))
   goto out;

  if (FUNC_6(VAR_2 != VAR_1->d_inode))
   goto out;
 }

 VAR_3 = VAR_1->d_parent;
 if (FUNC_0(VAR_1) || FUNC_1(FUNC_4(&VAR_3->d_lock)))
  return 1;

 FUNC_5(&VAR_1->d_lock);
 FUNC_2(&VAR_3->d_lock);
 if (FUNC_6(VAR_3 != VAR_1->d_parent)) {
  FUNC_5(&VAR_3->d_lock);
  FUNC_2(&VAR_1->d_lock);
  goto out;
 }
 FUNC_3(&VAR_1->d_lock, VAR_0);
 if (FUNC_1(!VAR_1->d_lockref.count))
  return 1;
 FUNC_5(&VAR_3->d_lock);
out:
 if (VAR_2)
  FUNC_5(&VAR_2->i_lock);
 return 0;
}
