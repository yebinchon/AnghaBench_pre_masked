
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int xfs_fsblock_t ;
struct TYPE_8__ {int agno; } ;
struct TYPE_7__ {TYPE_1__* ip; } ;
struct TYPE_9__ {TYPE_3__ a; TYPE_2__ b; } ;
struct xfs_btree_cur {int bc_nlevels; int bc_flags; TYPE_4__ bc_private; int bc_mp; TYPE_5__** bc_bufs; } ;
struct TYPE_10__ {int b_bn; } ;
struct TYPE_6__ {int i_ino; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static inline xfs_fsblock_t
FUNC_3(
 struct xfs_btree_cur *VAR_2,
 int VAR_3)
{
 if (VAR_3 < VAR_2->bc_nlevels && VAR_2->bc_bufs[VAR_3])
  return FUNC_1(VAR_2->bc_mp, VAR_2->bc_bufs[VAR_3]->b_bn);
 else if (VAR_3 == VAR_2->bc_nlevels - 1 &&
   VAR_2->bc_flags & VAR_1)
  return FUNC_2(VAR_2->bc_mp, VAR_2->bc_private.b.ip->i_ino);
 else if (!(VAR_2->bc_flags & VAR_1))
  return FUNC_0(VAR_2->bc_mp, VAR_2->bc_private.a.agno, 0);
 return VAR_0;
}
