
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_inode {int i_flags_lock; scalar_t__ i_ino; int i_flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct xfs_inode*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct xfs_inode*) ;

void
FUNC_5(
 struct xfs_inode *VAR_1)
{
 FUNC_0(!FUNC_4(VAR_1));







 FUNC_2(&VAR_1->i_flags_lock);
 VAR_1->i_flags = VAR_0;
 VAR_1->i_ino = 0;
 FUNC_3(&VAR_1->i_flags_lock);

 FUNC_1(VAR_1);
}
