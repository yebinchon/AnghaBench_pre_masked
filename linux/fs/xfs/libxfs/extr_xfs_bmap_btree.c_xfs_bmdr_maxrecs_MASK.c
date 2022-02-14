
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_bmdr_rec_t ;
typedef int xfs_bmdr_ptr_t ;
typedef int xfs_bmdr_key_t ;
typedef int xfs_bmdr_block_t ;



int
FUNC_0(
 int VAR_0,
 int VAR_1)
{
 VAR_0 -= sizeof(xfs_bmdr_block_t);

 if (VAR_1)
  return VAR_0 / sizeof(xfs_bmdr_rec_t);
 return VAR_0 / (sizeof(xfs_bmdr_key_t) + sizeof(xfs_bmdr_ptr_t));
}
