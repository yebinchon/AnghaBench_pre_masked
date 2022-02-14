
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_fsblock_t ;
typedef int xfs_daddr_t ;
struct xfs_inode {int i_mount; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct xfs_inode*) ;

xfs_daddr_t
FUNC_3(struct xfs_inode *VAR_0, xfs_fsblock_t VAR_1)
{
 if (FUNC_2(VAR_0))
  return FUNC_0(VAR_0->i_mount, VAR_1);
 return FUNC_1(VAR_0->i_mount, VAR_1);
}
