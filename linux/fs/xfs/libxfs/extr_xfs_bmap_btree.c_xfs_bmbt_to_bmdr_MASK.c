
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ bb_level; int bb_numrecs; } ;
typedef TYPE_3__ xfs_bmdr_block_t ;
typedef int xfs_bmbt_key_t ;
struct TYPE_11__ {int sb_meta_uuid; } ;
struct xfs_mount {TYPE_4__ m_sb; } ;
struct TYPE_8__ {scalar_t__ bb_blkno; scalar_t__ bb_leftsib; scalar_t__ bb_rightsib; int bb_uuid; } ;
struct TYPE_9__ {TYPE_1__ l; } ;
struct xfs_btree_block {scalar_t__ bb_magic; scalar_t__ bb_level; int bb_numrecs; TYPE_2__ bb_u; } ;
typedef int __be64 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int * FUNC_1 (struct xfs_mount*,struct xfs_btree_block*,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_2 (struct xfs_mount*,struct xfs_btree_block*,int) ;
 int * FUNC_3 (TYPE_3__*,int) ;
 int * FUNC_4 (TYPE_3__*,int,int) ;
 int VAR_3 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *,int *,int) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int,int ) ;
 scalar_t__ FUNC_11 (TYPE_4__*) ;

void
FUNC_12(
 struct xfs_mount *VAR_4,
 struct xfs_btree_block *VAR_5,
 int VAR_6,
 xfs_bmdr_block_t *VAR_7,
 int VAR_8)
{
 int VAR_9;
 xfs_bmbt_key_t *VAR_10;
 __be64 *VAR_11;
 xfs_bmbt_key_t *VAR_12;
 __be64 *VAR_13;

 if (FUNC_11(&VAR_4->m_sb)) {
  FUNC_0(VAR_5->bb_magic == FUNC_6(VAR_1));
  FUNC_0(FUNC_9(&VAR_5->bb_u.l.bb_uuid,
         &VAR_4->m_sb.sb_meta_uuid));
  FUNC_0(VAR_5->bb_u.l.bb_blkno ==
         FUNC_7(VAR_3));
 } else
  FUNC_0(VAR_5->bb_magic == FUNC_6(VAR_2));
 FUNC_0(VAR_5->bb_u.l.bb_leftsib == FUNC_7(VAR_0));
 FUNC_0(VAR_5->bb_u.l.bb_rightsib == FUNC_7(VAR_0));
 FUNC_0(VAR_5->bb_level != 0);
 VAR_7->bb_level = VAR_5->bb_level;
 VAR_7->bb_numrecs = VAR_5->bb_numrecs;
 VAR_9 = FUNC_10(VAR_8, 0);
 VAR_10 = FUNC_2(VAR_4, VAR_5, 1);
 VAR_12 = FUNC_3(VAR_7, 1);
 VAR_11 = FUNC_1(VAR_4, VAR_5, 1, VAR_6);
 VAR_13 = FUNC_4(VAR_7, 1, VAR_9);
 VAR_9 = FUNC_5(VAR_7->bb_numrecs);
 FUNC_8(VAR_12, VAR_10, sizeof(*VAR_10) * VAR_9);
 FUNC_8(VAR_13, VAR_11, sizeof(*VAR_11) * VAR_9);
}
