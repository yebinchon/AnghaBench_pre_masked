
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_inode {unsigned int i_sick; unsigned int i_checked; int i_flags_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void
FUNC_2(
 struct xfs_inode *VAR_0,
 unsigned int *VAR_1,
 unsigned int *VAR_2)
{
 FUNC_0(&VAR_0->i_flags_lock);
 *VAR_1 = VAR_0->i_sick;
 *VAR_2 = VAR_0->i_checked;
 FUNC_1(&VAR_0->i_flags_lock);
}
