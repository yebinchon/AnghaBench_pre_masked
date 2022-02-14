
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ xfs_agnumber_t ;
struct xfs_trans {int dummy; } ;
struct TYPE_6__ {scalar_t__ sb_agcount; int sb_blocklog; } ;
struct xfs_mount {TYPE_1__ m_sb; } ;
struct xfs_buf {int dummy; } ;
struct TYPE_7__ {scalar_t__ shape_changes; scalar_t__ nr_ops; } ;
struct TYPE_8__ {TYPE_2__ refc; } ;
struct TYPE_9__ {TYPE_3__ priv; scalar_t__ agno; struct xfs_buf* agbp; } ;
struct TYPE_10__ {TYPE_4__ a; } ;
struct xfs_btree_cur {TYPE_5__ bc_private; int bc_flags; int bc_nlevels; int bc_statoff; int * bc_ops; int bc_blocklog; int bc_btnum; struct xfs_mount* bc_mp; struct xfs_trans* bc_tp; } ;
struct xfs_agf {int agf_refcount_level; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct xfs_agf* FUNC_1 (struct xfs_buf*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct xfs_btree_cur* FUNC_4 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

struct xfs_btree_cur *
FUNC_5(
 struct xfs_mount *VAR_7,
 struct xfs_trans *VAR_8,
 struct xfs_buf *VAR_9,
 xfs_agnumber_t VAR_10)
{
 struct xfs_agf *VAR_11 = FUNC_1(VAR_9);
 struct xfs_btree_cur *VAR_12;

 FUNC_0(VAR_10 != VAR_1);
 FUNC_0(VAR_10 < VAR_7->m_sb.sb_agcount);
 VAR_12 = FUNC_4(VAR_4, VAR_0);

 VAR_12->bc_tp = VAR_8;
 VAR_12->bc_mp = VAR_7;
 VAR_12->bc_btnum = VAR_2;
 VAR_12->bc_blocklog = VAR_7->m_sb.sb_blocklog;
 VAR_12->bc_ops = &VAR_5;
 VAR_12->bc_statoff = FUNC_2(VAR_6);

 VAR_12->bc_nlevels = FUNC_3(VAR_11->agf_refcount_level);

 VAR_12->bc_private.a.agbp = VAR_9;
 VAR_12->bc_private.a.agno = VAR_10;
 VAR_12->bc_flags |= VAR_3;

 VAR_12->bc_private.a.priv.refc.nr_ops = 0;
 VAR_12->bc_private.a.priv.refc.shape_changes = 0;

 return VAR_12;
}
