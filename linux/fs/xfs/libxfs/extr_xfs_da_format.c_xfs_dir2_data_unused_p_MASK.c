
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_dir2_data_unused {int dummy; } ;
struct xfs_dir2_data_hdr {int dummy; } ;



__attribute__((used)) static struct xfs_dir2_data_unused *
FUNC_0(struct xfs_dir2_data_hdr *VAR_0)
{
 return (struct xfs_dir2_data_unused *)
  ((char *)VAR_0 + sizeof(struct xfs_dir2_data_hdr));
}
