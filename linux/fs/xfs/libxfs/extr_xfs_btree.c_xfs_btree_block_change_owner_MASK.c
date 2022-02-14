
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xfs_buf {int dummy; } ;
struct xfs_btree_cur {int bc_flags; int bc_nlevels; scalar_t__ bc_tp; } ;
struct xfs_btree_block_change_owner_info {int buffer_list; int new_owner; } ;
struct TYPE_5__ {scalar_t__ bb_owner; } ;
struct TYPE_4__ {scalar_t__ bb_owner; } ;
struct TYPE_6__ {TYPE_2__ s; TYPE_1__ l; } ;
struct xfs_btree_block {TYPE_3__ bb_u; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 struct xfs_btree_block* FUNC_3 (struct xfs_btree_cur*,int,struct xfs_buf**) ;
 int FUNC_4 (struct xfs_btree_cur*,struct xfs_buf*,int ) ;
 int FUNC_5 (struct xfs_buf*,int ) ;
 int FUNC_6 (scalar_t__,struct xfs_buf*) ;

__attribute__((used)) static int
FUNC_7(
 struct xfs_btree_cur *VAR_4,
 int VAR_5,
 void *VAR_6)
{
 struct xfs_btree_block_change_owner_info *VAR_7 = VAR_6;
 struct xfs_btree_block *VAR_8;
 struct xfs_buf *VAR_9;


 VAR_8 = FUNC_3(VAR_4, VAR_5, &VAR_9);
 if (VAR_4->bc_flags & VAR_2) {
  if (VAR_8->bb_u.l.bb_owner == FUNC_2(VAR_7->new_owner))
   return 0;
  VAR_8->bb_u.l.bb_owner = FUNC_2(VAR_7->new_owner);
 } else {
  if (VAR_8->bb_u.s.bb_owner == FUNC_1(VAR_7->new_owner))
   return 0;
  VAR_8->bb_u.s.bb_owner = FUNC_1(VAR_7->new_owner);
 }
 if (!VAR_9) {
  FUNC_0(VAR_4->bc_flags & VAR_3);
  FUNC_0(VAR_5 == VAR_4->bc_nlevels - 1);
  return 0;
 }

 if (VAR_4->bc_tp) {
  if (!FUNC_6(VAR_4->bc_tp, VAR_9)) {
   FUNC_4(VAR_4, VAR_9, VAR_1);
   return -VAR_0;
  }
 } else {
  FUNC_5(VAR_9, VAR_7->buffer_list);
 }

 return 0;
}
