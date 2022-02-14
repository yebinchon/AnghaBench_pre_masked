
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_dir2_leaf_tail {int dummy; } ;
struct xfs_dir2_leaf {int dummy; } ;
struct xfs_da_geometry {int blksize; } ;



__attribute__((used)) static inline struct xfs_dir2_leaf_tail *
FUNC_0(struct xfs_da_geometry *VAR_0, struct xfs_dir2_leaf *VAR_1)
{
 return (struct xfs_dir2_leaf_tail *)
  ((char *)VAR_1 + VAR_0->blksize -
    sizeof(struct xfs_dir2_leaf_tail));
}
