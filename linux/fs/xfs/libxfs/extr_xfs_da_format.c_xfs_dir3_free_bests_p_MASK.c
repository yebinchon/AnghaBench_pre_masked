
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_dir3_free_hdr {int dummy; } ;
struct xfs_dir2_free {int dummy; } ;
typedef int __be16 ;



__attribute__((used)) static __be16 *
FUNC_0(struct xfs_dir2_free *VAR_0)
{
 return (__be16 *)((char *)VAR_0 + sizeof(struct xfs_dir3_free_hdr));
}
