
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_extnum_t ;
struct xfs_ifork {int if_bytes; } ;
struct xfs_iext_rec {int dummy; } ;



inline xfs_extnum_t FUNC_0(struct xfs_ifork *VAR_0)
{
 return VAR_0->if_bytes / sizeof(struct xfs_iext_rec);
}
