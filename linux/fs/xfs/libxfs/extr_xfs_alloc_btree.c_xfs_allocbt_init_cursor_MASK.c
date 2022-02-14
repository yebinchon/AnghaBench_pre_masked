
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t xfs_btnum_t ;
typedef int xfs_agnumber_t ;
struct xfs_trans {int dummy; } ;
struct TYPE_6__ {int sb_blocklog; } ;
struct xfs_mount {TYPE_3__ m_sb; } ;
struct xfs_buf {int dummy; } ;
struct TYPE_4__ {int agno; struct xfs_buf* agbp; } ;
struct TYPE_5__ {TYPE_1__ a; } ;
struct xfs_btree_cur {size_t bc_btnum; int bc_flags; TYPE_2__ bc_private; void* bc_nlevels; int * bc_ops; void* bc_statoff; int bc_blocklog; struct xfs_mount* bc_mp; struct xfs_trans* bc_tp; } ;
struct xfs_agf {int * agf_levels; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct xfs_agf* FUNC_1 (struct xfs_buf*) ;
 void* FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 struct xfs_btree_cur* FUNC_4 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int VAR_8 ;
 int VAR_9 ;

struct xfs_btree_cur *
FUNC_6(
 struct xfs_mount *VAR_10,
 struct xfs_trans *VAR_11,
 struct xfs_buf *VAR_12,
 xfs_agnumber_t VAR_13,
 xfs_btnum_t VAR_14)
{
 struct xfs_agf *VAR_15 = FUNC_1(VAR_12);
 struct xfs_btree_cur *VAR_16;

 FUNC_0(VAR_14 == VAR_1 || VAR_14 == VAR_2);

 VAR_16 = FUNC_4(VAR_6, VAR_0);

 VAR_16->bc_tp = VAR_11;
 VAR_16->bc_mp = VAR_10;
 VAR_16->bc_btnum = VAR_14;
 VAR_16->bc_blocklog = VAR_10->m_sb.sb_blocklog;

 if (VAR_14 == VAR_2) {
  VAR_16->bc_statoff = FUNC_2(VAR_9);
  VAR_16->bc_ops = &VAR_7;
  VAR_16->bc_nlevels = FUNC_3(VAR_15->agf_levels[VAR_2]);
  VAR_16->bc_flags = VAR_4;
 } else {
  VAR_16->bc_statoff = FUNC_2(VAR_8);
  VAR_16->bc_ops = &VAR_5;
  VAR_16->bc_nlevels = FUNC_3(VAR_15->agf_levels[VAR_1]);
 }

 VAR_16->bc_private.a.agbp = VAR_12;
 VAR_16->bc_private.a.agno = VAR_13;

 if (FUNC_5(&VAR_10->m_sb))
  VAR_16->bc_flags |= VAR_3;

 return VAR_16;
}
