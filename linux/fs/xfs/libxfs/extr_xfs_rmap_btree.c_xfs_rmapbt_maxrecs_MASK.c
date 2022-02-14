
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_rmap_ptr_t ;
struct xfs_rmap_rec {int dummy; } ;
struct xfs_rmap_key {int dummy; } ;


 scalar_t__ VAR_0 ;

int
FUNC_0(
 int VAR_1,
 int VAR_2)
{
 VAR_1 -= VAR_0;

 if (VAR_2)
  return VAR_1 / sizeof(struct xfs_rmap_rec);
 return VAR_1 /
  (2 * sizeof(struct xfs_rmap_key) + sizeof(xfs_rmap_ptr_t));
}
