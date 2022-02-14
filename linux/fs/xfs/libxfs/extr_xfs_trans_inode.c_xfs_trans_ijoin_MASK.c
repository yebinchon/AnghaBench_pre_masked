
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ili_lock_flags; int ili_item; } ;
typedef TYPE_1__ xfs_inode_log_item_t ;
typedef scalar_t__ uint ;
struct xfs_trans {int dummy; } ;
struct xfs_inode {TYPE_1__* i_itemp; int i_mount; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct xfs_inode*,int ) ;
 int FUNC_2 (struct xfs_inode*,int ) ;
 int FUNC_3 (struct xfs_trans*,int *) ;

void
FUNC_4(
 struct xfs_trans *VAR_1,
 struct xfs_inode *VAR_2,
 uint VAR_3)
{
 xfs_inode_log_item_t *VAR_4;

 FUNC_0(FUNC_2(VAR_2, VAR_0));
 if (VAR_2->i_itemp == ((void*)0))
  FUNC_1(VAR_2, VAR_2->i_mount);
 VAR_4 = VAR_2->i_itemp;

 FUNC_0(VAR_4->ili_lock_flags == 0);
 VAR_4->ili_lock_flags = VAR_3;




 FUNC_3(VAR_1, &VAR_4->ili_item);
}
