
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_dir2_data_hdr {struct xfs_dir2_data_free* bestfree; } ;
struct xfs_dir2_data_free {int dummy; } ;



__attribute__((used)) static struct xfs_dir2_data_free *
FUNC_0(struct xfs_dir2_data_hdr *VAR_0)
{
 return VAR_0->bestfree;
}
