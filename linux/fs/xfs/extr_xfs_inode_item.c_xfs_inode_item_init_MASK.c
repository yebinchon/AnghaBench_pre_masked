
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_mount {int dummy; } ;
struct xfs_inode_log_item {int ili_item; struct xfs_inode* ili_inode; } ;
struct xfs_inode {struct xfs_inode_log_item* i_itemp; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct xfs_inode_log_item* FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct xfs_mount*,int *,int ,int *) ;

void
FUNC_3(
 struct xfs_inode *VAR_3,
 struct xfs_mount *VAR_4)
{
 struct xfs_inode_log_item *VAR_5;

 FUNC_0(VAR_3->i_itemp == ((void*)0));
 VAR_5 = VAR_3->i_itemp = FUNC_1(VAR_1, 0);

 VAR_5->ili_inode = VAR_3;
 FUNC_2(VAR_4, &VAR_5->ili_item, VAR_0,
      &VAR_2);
}
