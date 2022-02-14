
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_bmbt_rec_t ;
typedef int xfs_bmbt_ptr_t ;
typedef int xfs_bmbt_key_t ;
struct xfs_mount {int dummy; } ;


 scalar_t__ FUNC_0 (struct xfs_mount*) ;

int
FUNC_1(
 struct xfs_mount *VAR_0,
 int VAR_1,
 int VAR_2)
{
 VAR_1 -= FUNC_0(VAR_0);

 if (VAR_2)
  return VAR_1 / sizeof(xfs_bmbt_rec_t);
 return VAR_1 / (sizeof(xfs_bmbt_key_t) + sizeof(xfs_bmbt_ptr_t));
}
