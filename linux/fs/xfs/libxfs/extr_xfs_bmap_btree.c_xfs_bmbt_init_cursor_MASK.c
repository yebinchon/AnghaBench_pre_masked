
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct xfs_trans {int dummy; } ;
struct TYPE_8__ {int sb_blocklog; } ;
struct xfs_mount {TYPE_4__ m_sb; } ;
struct xfs_inode {int dummy; } ;
struct xfs_ifork {TYPE_1__* if_broot; } ;
struct TYPE_6__ {int whichfork; scalar_t__ flags; scalar_t__ allocated; struct xfs_inode* ip; int forksize; } ;
struct TYPE_7__ {TYPE_2__ b; } ;
struct xfs_btree_cur {int bc_flags; TYPE_3__ bc_private; int * bc_ops; int bc_statoff; int bc_blocklog; int bc_btnum; scalar_t__ bc_nlevels; struct xfs_mount* bc_mp; struct xfs_trans* bc_tp; } ;
struct TYPE_5__ {int bb_level; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct xfs_ifork* FUNC_1 (struct xfs_inode*,int) ;
 int FUNC_2 (struct xfs_inode*,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 struct xfs_btree_cur* FUNC_5 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_6 (TYPE_4__*) ;
 int VAR_8 ;

struct xfs_btree_cur *
FUNC_7(
 struct xfs_mount *VAR_9,
 struct xfs_trans *VAR_10,
 struct xfs_inode *VAR_11,
 int VAR_12)
{
 struct xfs_ifork *VAR_13 = FUNC_1(VAR_11, VAR_12);
 struct xfs_btree_cur *VAR_14;
 FUNC_0(VAR_12 != VAR_5);

 VAR_14 = FUNC_5(VAR_7, VAR_0);

 VAR_14->bc_tp = VAR_10;
 VAR_14->bc_mp = VAR_9;
 VAR_14->bc_nlevels = FUNC_4(VAR_13->if_broot->bb_level) + 1;
 VAR_14->bc_btnum = VAR_1;
 VAR_14->bc_blocklog = VAR_9->m_sb.sb_blocklog;
 VAR_14->bc_statoff = FUNC_3(VAR_8);

 VAR_14->bc_ops = &VAR_6;
 VAR_14->bc_flags = VAR_3 | VAR_4;
 if (FUNC_6(&VAR_9->m_sb))
  VAR_14->bc_flags |= VAR_2;

 VAR_14->bc_private.b.forksize = FUNC_2(VAR_11, VAR_12);
 VAR_14->bc_private.b.ip = VAR_11;
 VAR_14->bc_private.b.allocated = 0;
 VAR_14->bc_private.b.flags = 0;
 VAR_14->bc_private.b.whichfork = VAR_12;

 return VAR_14;
}
