
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfs_fsblock_t ;
typedef scalar_t__ xfs_filblks_t ;
typedef scalar_t__ xfs_extnum_t ;
struct xfs_trans {int dummy; } ;
struct TYPE_2__ {int sb_agblocks; int sb_agcount; } ;
struct xfs_mount {TYPE_1__ m_sb; } ;
struct xfs_inode {struct xfs_mount* i_mount; } ;
struct xfs_ifork {int if_flags; int if_broot_bytes; struct xfs_btree_block* if_broot; } ;
struct xfs_btree_block {int bb_level; } ;
typedef int __be64 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (struct xfs_mount*,struct xfs_btree_block*,int,int ) ;


 int VAR_2 ;
 int FUNC_2 (char*,int ,struct xfs_mount*) ;
 int FUNC_3 (struct xfs_mount*,int ) ;
 int FUNC_4 (struct xfs_mount*,int ) ;
 int VAR_3 ;
 int FUNC_5 (struct xfs_inode*,int) ;
 struct xfs_ifork* FUNC_6 (struct xfs_inode*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (struct xfs_ifork*,scalar_t__*) ;
 int FUNC_10 (struct xfs_mount*,struct xfs_trans*,struct xfs_ifork*,int ,int,scalar_t__*,scalar_t__*) ;
 int FUNC_11 (struct xfs_trans*,struct xfs_inode*,int) ;

int
FUNC_12(
 struct xfs_trans *VAR_4,
 struct xfs_inode *VAR_5,
 int VAR_6,
 xfs_extnum_t *VAR_7,
 xfs_filblks_t *VAR_8)
{
 struct xfs_mount *VAR_9;
 __be64 *VAR_10;
 struct xfs_btree_block *VAR_11;
 struct xfs_ifork *VAR_12;
 xfs_fsblock_t VAR_13;
 int VAR_14;
 int VAR_15;

 VAR_13 = VAR_1;
 VAR_9 = VAR_5->i_mount;
 *VAR_7 = 0;
 *VAR_8 = 0;
 VAR_12 = FUNC_6(VAR_5, VAR_6);
 if (!VAR_12)
  return 0;

 switch (FUNC_5(VAR_5, VAR_6)) {
 case 128:
  *VAR_7 = FUNC_9(VAR_12, VAR_8);
  return 0;
 case 129:
  if (!(VAR_12->if_flags & VAR_3)) {
   VAR_15 = FUNC_11(VAR_4, VAR_5, VAR_6);
   if (VAR_15)
    return VAR_15;
  }




  VAR_11 = VAR_12->if_broot;
  VAR_14 = FUNC_7(VAR_11->bb_level);
  FUNC_0(VAR_14 > 0);
  VAR_10 = FUNC_1(VAR_9, VAR_11, 1, VAR_12->if_broot_bytes);
  VAR_13 = FUNC_8(*VAR_10);
  FUNC_0(VAR_13 != VAR_1);
  FUNC_0(FUNC_4(VAR_9, VAR_13) < VAR_9->m_sb.sb_agcount);
  FUNC_0(FUNC_3(VAR_9, VAR_13) < VAR_9->m_sb.sb_agblocks);

  VAR_15 = FUNC_10(VAR_9, VAR_4, VAR_12, VAR_13, VAR_14,
    VAR_7, VAR_8);
  if (VAR_15) {
   FUNC_2("xfs_bmap_count_blocks(2)",
     VAR_2, VAR_9);
   return -VAR_0;
  }
  return 0;
 }

 return 0;
}
