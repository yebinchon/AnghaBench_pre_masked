
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int xfs_agblock_t ;
struct TYPE_3__ {int agno; } ;
struct TYPE_4__ {TYPE_1__ a; } ;
struct xfs_btree_cur {TYPE_2__ bc_private; int bc_mp; } ;


 int FUNC_0 (int ,int ,int ) ;

bool
FUNC_1(
 struct xfs_btree_cur *VAR_0,
 xfs_agblock_t VAR_1,
 int VAR_2)
{
 if (VAR_2 <= 0)
  return 0;
 return FUNC_0(VAR_0->bc_mp, VAR_0->bc_private.a.agno, VAR_1);
}
