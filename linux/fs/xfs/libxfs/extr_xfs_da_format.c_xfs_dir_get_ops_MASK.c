
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_mount {int m_sb; struct xfs_dir_ops const* m_dir_inode_ops; } ;
struct xfs_inode {struct xfs_dir_ops const* d_ops; } ;
struct xfs_dir_ops {int dummy; } ;


 struct xfs_dir_ops const VAR_0 ;
 struct xfs_dir_ops const VAR_1 ;
 struct xfs_dir_ops const VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

const struct xfs_dir_ops *
FUNC_2(
 struct xfs_mount *VAR_3,
 struct xfs_inode *VAR_4)
{
 if (VAR_4)
  return VAR_4->d_ops;
 if (VAR_3->m_dir_inode_ops)
  return VAR_3->m_dir_inode_ops;
 if (FUNC_0(&VAR_3->m_sb))
  return &VAR_2;
 if (FUNC_1(&VAR_3->m_sb))
  return &VAR_0;
 return &VAR_1;
}
