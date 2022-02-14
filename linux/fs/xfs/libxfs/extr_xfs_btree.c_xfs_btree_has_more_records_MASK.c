
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xfs_buf {int dummy; } ;
struct xfs_btree_cur {scalar_t__* bc_ptrs; int bc_flags; } ;
struct TYPE_5__ {scalar_t__ bb_rightsib; } ;
struct TYPE_4__ {scalar_t__ bb_rightsib; } ;
struct TYPE_6__ {TYPE_2__ s; TYPE_1__ l; } ;
struct xfs_btree_block {TYPE_3__ bb_u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 struct xfs_btree_block* FUNC_2 (struct xfs_btree_cur*,int ,struct xfs_buf**) ;
 scalar_t__ FUNC_3 (struct xfs_btree_block*) ;

bool
FUNC_4(
 struct xfs_btree_cur *VAR_3)
{
 struct xfs_btree_block *VAR_4;
 struct xfs_buf *VAR_5;

 VAR_4 = FUNC_2(VAR_3, 0, &VAR_5);


 if (VAR_3->bc_ptrs[0] < FUNC_3(VAR_4))
  return 1;


 if (VAR_3->bc_flags & VAR_2)
  return VAR_4->bb_u.l.bb_rightsib != FUNC_1(VAR_1);
 else
  return VAR_4->bb_u.s.bb_rightsib != FUNC_0(VAR_0);
}
