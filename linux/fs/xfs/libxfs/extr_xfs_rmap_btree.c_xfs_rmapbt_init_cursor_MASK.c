
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int xfs_agnumber_t ;
struct xfs_trans {int dummy; } ;
struct TYPE_4__ {int sb_blocklog; } ;
struct xfs_mount {TYPE_1__ m_sb; } ;
struct xfs_buf {int dummy; } ;
struct TYPE_5__ {int agno; struct xfs_buf* agbp; } ;
struct TYPE_6__ {TYPE_2__ a; } ;
struct xfs_btree_cur {size_t bc_btnum; int bc_flags; TYPE_3__ bc_private; int bc_statoff; int bc_nlevels; int * bc_ops; int bc_blocklog; struct xfs_mount* bc_mp; struct xfs_trans* bc_tp; } ;
struct xfs_agf {int * agf_levels; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct xfs_agf* FUNC_0 (struct xfs_buf*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct xfs_btree_cur* FUNC_3 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

struct xfs_btree_cur *
FUNC_4(
 struct xfs_mount *VAR_7,
 struct xfs_trans *VAR_8,
 struct xfs_buf *VAR_9,
 xfs_agnumber_t VAR_10)
{
 struct xfs_agf *VAR_11 = FUNC_0(VAR_9);
 struct xfs_btree_cur *VAR_12;

 VAR_12 = FUNC_3(VAR_4, VAR_0);
 VAR_12->bc_tp = VAR_8;
 VAR_12->bc_mp = VAR_7;

 VAR_12->bc_btnum = VAR_1;
 VAR_12->bc_flags = VAR_2 | VAR_3;
 VAR_12->bc_blocklog = VAR_7->m_sb.sb_blocklog;
 VAR_12->bc_ops = &VAR_5;
 VAR_12->bc_nlevels = FUNC_2(VAR_11->agf_levels[VAR_1]);
 VAR_12->bc_statoff = FUNC_1(VAR_6);

 VAR_12->bc_private.a.agbp = VAR_9;
 VAR_12->bc_private.a.agno = VAR_10;

 return VAR_12;
}
