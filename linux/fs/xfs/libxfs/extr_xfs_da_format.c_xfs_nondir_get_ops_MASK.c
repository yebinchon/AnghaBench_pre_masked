
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_mount {int m_sb; struct xfs_dir_ops const* m_nondir_inode_ops; } ;
struct xfs_inode {struct xfs_dir_ops const* d_ops; } ;
struct xfs_dir_ops {int dummy; } ;


 struct xfs_dir_ops const VAR_0 ;
 struct xfs_dir_ops const VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;

const struct xfs_dir_ops *
FUNC_1(
 struct xfs_mount *VAR_2,
 struct xfs_inode *VAR_3)
{
 if (VAR_3)
  return VAR_3->d_ops;
 if (VAR_2->m_nondir_inode_ops)
  return VAR_2->m_nondir_inode_ops;
 if (FUNC_0(&VAR_2->m_sb))
  return &VAR_1;
 return &VAR_0;
}
