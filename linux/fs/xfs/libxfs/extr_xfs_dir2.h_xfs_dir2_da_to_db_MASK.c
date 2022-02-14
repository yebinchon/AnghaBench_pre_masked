
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_dir2_db_t ;
typedef int xfs_dablk_t ;
struct xfs_da_geometry {int blklog; int fsblog; } ;



__attribute__((used)) static inline xfs_dir2_db_t
FUNC_0(struct xfs_da_geometry *VAR_0, xfs_dablk_t VAR_1)
{
 return (xfs_dir2_db_t)(VAR_1 >> (VAR_0->blklog - VAR_0->fsblog));
}
