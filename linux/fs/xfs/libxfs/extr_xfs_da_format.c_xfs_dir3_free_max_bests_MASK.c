
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_dir2_data_off_t ;
struct xfs_dir3_free_hdr {int dummy; } ;
struct xfs_da_geometry {int blksize; } ;



__attribute__((used)) static int
FUNC_0(struct xfs_da_geometry *VAR_0)
{
 return (VAR_0->blksize - sizeof(struct xfs_dir3_free_hdr)) /
  sizeof(xfs_dir2_data_off_t);
}
