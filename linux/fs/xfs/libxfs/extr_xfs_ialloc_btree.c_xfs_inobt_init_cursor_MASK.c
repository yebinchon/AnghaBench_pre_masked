
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ xfs_btnum_t ;
typedef int xfs_agnumber_t ;
struct xfs_trans {int dummy; } ;
struct TYPE_6__ {int sb_blocklog; } ;
struct xfs_mount {TYPE_3__ m_sb; } ;
struct xfs_buf {int dummy; } ;
struct TYPE_4__ {int agno; struct xfs_buf* agbp; } ;
struct TYPE_5__ {TYPE_1__ a; } ;
struct xfs_btree_cur {TYPE_2__ bc_private; int bc_flags; int bc_blocklog; void* bc_statoff; int * bc_ops; void* bc_nlevels; scalar_t__ bc_btnum; struct xfs_mount* bc_mp; struct xfs_trans* bc_tp; } ;
struct xfs_agi {int agi_free_level; int agi_level; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct xfs_agi* FUNC_0 (struct xfs_buf*) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 struct xfs_btree_cur* FUNC_3 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int VAR_6 ;
 int VAR_7 ;

struct xfs_btree_cur *
FUNC_5(
 struct xfs_mount *VAR_8,
 struct xfs_trans *VAR_9,
 struct xfs_buf *VAR_10,
 xfs_agnumber_t VAR_11,
 xfs_btnum_t VAR_12)
{
 struct xfs_agi *VAR_13 = FUNC_0(VAR_10);
 struct xfs_btree_cur *VAR_14;

 VAR_14 = FUNC_3(VAR_3, VAR_0);

 VAR_14->bc_tp = VAR_9;
 VAR_14->bc_mp = VAR_8;
 VAR_14->bc_btnum = VAR_12;
 if (VAR_12 == VAR_1) {
  VAR_14->bc_nlevels = FUNC_2(VAR_13->agi_level);
  VAR_14->bc_ops = &VAR_5;
  VAR_14->bc_statoff = FUNC_1(VAR_7);
 } else {
  VAR_14->bc_nlevels = FUNC_2(VAR_13->agi_free_level);
  VAR_14->bc_ops = &VAR_4;
  VAR_14->bc_statoff = FUNC_1(VAR_6);
 }

 VAR_14->bc_blocklog = VAR_8->m_sb.sb_blocklog;

 if (FUNC_4(&VAR_8->m_sb))
  VAR_14->bc_flags |= VAR_2;

 VAR_14->bc_private.a.agbp = VAR_10;
 VAR_14->bc_private.a.agno = VAR_11;

 return VAR_14;
}
