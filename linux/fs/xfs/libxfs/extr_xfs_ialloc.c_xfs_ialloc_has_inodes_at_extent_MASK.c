
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xfs_extlen_t ;
typedef scalar_t__ xfs_agino_t ;
typedef scalar_t__ xfs_agblock_t ;
struct xfs_btree_cur {int bc_mp; } ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct xfs_btree_cur*,scalar_t__,scalar_t__,int*) ;

int
FUNC_2(
 struct xfs_btree_cur *VAR_0,
 xfs_agblock_t VAR_1,
 xfs_extlen_t VAR_2,
 bool *VAR_3)
{
 xfs_agino_t VAR_4;
 xfs_agino_t VAR_5;

 VAR_4 = FUNC_0(VAR_0->bc_mp, VAR_1);
 VAR_5 = FUNC_0(VAR_0->bc_mp, VAR_1 + VAR_2) - 1;

 return FUNC_1(VAR_0, VAR_4, VAR_5, VAR_3);
}
