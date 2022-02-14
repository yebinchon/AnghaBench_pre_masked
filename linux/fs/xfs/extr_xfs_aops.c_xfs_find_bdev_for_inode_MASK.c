
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xfs_mount {TYPE_2__* m_ddev_targp; TYPE_1__* m_rtdev_targp; } ;
struct xfs_inode {struct xfs_mount* i_mount; } ;
struct inode {int dummy; } ;
struct block_device {int dummy; } ;
struct TYPE_4__ {struct block_device* bt_bdev; } ;
struct TYPE_3__ {struct block_device* bt_bdev; } ;


 struct xfs_inode* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct xfs_inode*) ;

struct block_device *
FUNC_2(
 struct inode *VAR_0)
{
 struct xfs_inode *VAR_1 = FUNC_0(VAR_0);
 struct xfs_mount *VAR_2 = VAR_1->i_mount;

 if (FUNC_1(VAR_1))
  return VAR_2->m_rtdev_targp->bt_bdev;
 else
  return VAR_2->m_ddev_targp->bt_bdev;
}
