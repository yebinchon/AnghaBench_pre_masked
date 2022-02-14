
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int bb_numrecs; int bb_level; } ;
typedef TYPE_1__ xfs_bmdr_block_t ;
typedef int xfs_bmbt_key_t ;
struct xfs_mount {int dummy; } ;
struct xfs_inode {int i_ino; struct xfs_mount* i_mount; } ;
struct xfs_btree_block {int bb_numrecs; int bb_level; } ;
typedef int __be64 ;


 int FUNC_0 (int) ;
 int * FUNC_1 (struct xfs_mount*,struct xfs_btree_block*,int,int) ;
 int * FUNC_2 (struct xfs_mount*,struct xfs_btree_block*,int) ;
 int * FUNC_3 (TYPE_1__*,int) ;
 int * FUNC_4 (TYPE_1__*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (struct xfs_mount*,struct xfs_btree_block*,int ,int ,int ,int ,int ,int ) ;

void
FUNC_9(
 struct xfs_inode *VAR_3,
 xfs_bmdr_block_t *VAR_4,
 int VAR_5,
 struct xfs_btree_block *VAR_6,
 int VAR_7)
{
 struct xfs_mount *VAR_8 = VAR_3->i_mount;
 int VAR_9;
 xfs_bmbt_key_t *VAR_10;
 __be64 *VAR_11;
 xfs_bmbt_key_t *VAR_12;
 __be64 *VAR_13;

 FUNC_8(VAR_8, VAR_6, VAR_2,
     VAR_0, 0, 0, VAR_3->i_ino,
     VAR_1);
 VAR_6->bb_level = VAR_4->bb_level;
 FUNC_0(FUNC_5(VAR_6->bb_level) > 0);
 VAR_6->bb_numrecs = VAR_4->bb_numrecs;
 VAR_9 = FUNC_7(VAR_5, 0);
 VAR_10 = FUNC_3(VAR_4, 1);
 VAR_12 = FUNC_2(VAR_8, VAR_6, 1);
 VAR_11 = FUNC_4(VAR_4, 1, VAR_9);
 VAR_13 = FUNC_1(VAR_8, VAR_6, 1, VAR_7);
 VAR_9 = FUNC_5(VAR_4->bb_numrecs);
 FUNC_6(VAR_12, VAR_10, sizeof(*VAR_10) * VAR_9);
 FUNC_6(VAR_13, VAR_11, sizeof(*VAR_11) * VAR_9);
}
