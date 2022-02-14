
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_refcount_ptr_t ;
struct xfs_refcount_rec {int dummy; } ;
struct xfs_refcount_key {int dummy; } ;


 scalar_t__ VAR_0 ;

int
FUNC_0(
 int VAR_1,
 bool VAR_2)
{
 VAR_1 -= VAR_0;

 if (VAR_2)
  return VAR_1 / sizeof(struct xfs_refcount_rec);
 return VAR_1 / (sizeof(struct xfs_refcount_key) +
      sizeof(xfs_refcount_ptr_t));
}
