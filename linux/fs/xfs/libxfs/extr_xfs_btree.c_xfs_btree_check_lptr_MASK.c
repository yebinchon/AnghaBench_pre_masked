
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_fsblock_t ;
struct xfs_btree_cur {int bc_mp; } ;


 int FUNC_0 (int ,int ) ;

bool
FUNC_1(
 struct xfs_btree_cur *VAR_0,
 xfs_fsblock_t VAR_1,
 int VAR_2)
{
 if (VAR_2 <= 0)
  return 0;
 return FUNC_0(VAR_0->bc_mp, VAR_1);
}
