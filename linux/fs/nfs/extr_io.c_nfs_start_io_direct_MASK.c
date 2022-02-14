
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_inode {int flags; } ;
struct inode {int i_rwsem; } ;


 struct nfs_inode* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct nfs_inode*,struct inode*) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;

void
FUNC_7(struct inode *VAR_1)
{
 struct nfs_inode *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(&VAR_1->i_rwsem);
 if (FUNC_5(VAR_0, &VAR_2->flags) != 0)
  return;
 FUNC_6(&VAR_1->i_rwsem);

 FUNC_2(&VAR_1->i_rwsem);
 FUNC_4(VAR_2, VAR_1);
 FUNC_3(&VAR_1->i_rwsem);
}
