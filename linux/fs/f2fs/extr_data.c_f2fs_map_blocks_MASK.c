
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct f2fs_sb_info {int dummy; } ;
struct f2fs_map_blocks {unsigned int m_len; int m_flags; unsigned int m_lblk; scalar_t__ m_pblk; unsigned int* m_next_extent; unsigned int* m_next_pgofs; scalar_t__ m_may_create; int m_seg_type; } ;
struct extent_info {scalar_t__ blk; scalar_t__ fofs; scalar_t__ len; int member_2; int member_1; int member_0; } ;
struct dnode_of_data {unsigned int ofs_in_node; scalar_t__ data_blkaddr; int node_changed; int node_page; int inode; } ;
typedef unsigned int pgoff_t ;
typedef scalar_t__ block_t ;
typedef scalar_t__ blkcnt_t ;


 unsigned int FUNC_0 (int ,struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct f2fs_sb_info* FUNC_1 (struct inode*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct dnode_of_data*,int ) ;
 int FUNC_4 (struct f2fs_sb_info*,int,int) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ,int ,unsigned int) ;
 int FUNC_7 (struct f2fs_sb_info*,int ) ;
 int FUNC_8 (struct f2fs_sb_info*) ;
 int FUNC_9 (struct dnode_of_data*,unsigned int,int) ;
 void* FUNC_10 (struct dnode_of_data*,unsigned int) ;
 int FUNC_11 (struct f2fs_sb_info*,scalar_t__,int ) ;
 scalar_t__ FUNC_12 (struct inode*,unsigned int,struct extent_info*) ;
 int FUNC_13 (struct dnode_of_data*) ;
 int FUNC_14 (struct dnode_of_data*,scalar_t__) ;
 int FUNC_15 (struct dnode_of_data*,unsigned int,scalar_t__,unsigned int) ;
 int FUNC_16 (struct inode*,scalar_t__,unsigned int) ;
 unsigned int FUNC_17 (unsigned int,scalar_t__) ;
 int FUNC_18 (struct inode*,int ) ;
 int FUNC_19 (struct dnode_of_data*,struct inode*,int *,int *,int ) ;
 scalar_t__ FUNC_20 (struct f2fs_sb_info*,int ) ;
 int FUNC_21 (struct inode*,struct f2fs_map_blocks*,int) ;
 scalar_t__ FUNC_22 (int ) ;

int FUNC_23(struct inode *VAR_20, struct f2fs_map_blocks *VAR_21,
      int VAR_22, int VAR_23)
{
 unsigned int VAR_24 = VAR_21->m_len;
 struct dnode_of_data VAR_25;
 struct f2fs_sb_info *VAR_26 = FUNC_1(VAR_20);
 int VAR_27 = VAR_21->m_may_create ? VAR_0 : VAR_17;
 pgoff_t VAR_28, VAR_29, VAR_30;
 int VAR_31 = 0, VAR_32 = 1;
 unsigned int VAR_33, VAR_34;
 blkcnt_t VAR_35;
 struct extent_info VAR_36 = {0,0,0};
 block_t VAR_37;
 unsigned int VAR_38;

 if (!VAR_24)
  return 0;

 VAR_21->m_len = 0;
 VAR_21->m_flags = 0;


 VAR_28 = (pgoff_t)VAR_21->m_lblk;
 VAR_30 = VAR_28 + VAR_24;

 if (!VAR_22 && FUNC_12(VAR_20, VAR_28, &VAR_36)) {
  if (FUNC_20(VAR_26, VAR_16) && VAR_23 == VAR_7 &&
       VAR_21->m_may_create)
   goto next_dnode;

  VAR_21->m_pblk = VAR_36.blk + VAR_28 - VAR_36.fofs;
  VAR_21->m_len = FUNC_17((pgoff_t)VAR_24, VAR_36.fofs + VAR_36.len - VAR_28);
  VAR_21->m_flags = VAR_12;
  if (VAR_21->m_next_extent)
   *VAR_21->m_next_extent = VAR_28 + VAR_21->m_len;


  if (VAR_23 == VAR_7)
   FUNC_16(VAR_20,
      VAR_21->m_pblk, VAR_21->m_len);
  goto out;
 }

next_dnode:
 if (VAR_21->m_may_create)
  FUNC_4(VAR_26, VAR_23, 1);


 FUNC_19(&VAR_25, VAR_20, ((void*)0), ((void*)0), 0);
 VAR_31 = FUNC_9(&VAR_25, VAR_28, VAR_27);
 if (VAR_31) {
  if (VAR_23 == VAR_6)
   VAR_21->m_pblk = 0;
  if (VAR_31 == -VAR_4) {
   VAR_31 = 0;
   if (VAR_21->m_next_pgofs)
    *VAR_21->m_next_pgofs =
     FUNC_10(&VAR_25, VAR_28);
   if (VAR_21->m_next_extent)
    *VAR_21->m_next_extent =
     FUNC_10(&VAR_25, VAR_28);
  }
  goto unlock_out;
 }

 VAR_38 = VAR_28;
 VAR_35 = 0;
 VAR_34 = VAR_33 = VAR_25.ofs_in_node;
 VAR_29 = FUNC_0(VAR_25.node_page, VAR_20);

next_block:
 VAR_37 = FUNC_6(VAR_25.inode, VAR_25.node_page, VAR_25.ofs_in_node);

 if (FUNC_5(VAR_37) &&
  !FUNC_11(VAR_26, VAR_37, VAR_1)) {
  VAR_31 = -VAR_2;
  goto sync_out;
 }

 if (FUNC_5(VAR_37)) {

  if (FUNC_20(VAR_26, VAR_16) && VAR_23 == VAR_7 &&
       VAR_21->m_may_create) {
   VAR_31 = FUNC_3(&VAR_25, VAR_21->m_seg_type);
   if (VAR_31)
    goto sync_out;
   VAR_37 = VAR_25.data_blkaddr;
   FUNC_18(VAR_20, VAR_15);
  }
 } else {
  if (VAR_22) {
   if (FUNC_22(FUNC_8(VAR_26))) {
    VAR_31 = -VAR_3;
    goto sync_out;
   }
   if (VAR_23 == VAR_10) {
    if (VAR_37 == VAR_19) {
     VAR_35++;
     VAR_34 = VAR_25.ofs_in_node;
    }
   } else {
    FUNC_2(VAR_23 != VAR_11 &&
     VAR_23 != VAR_7);
    VAR_31 = FUNC_3(&VAR_25,
       VAR_21->m_seg_type);
    if (!VAR_31)
     FUNC_18(VAR_20, VAR_15);
   }
   if (VAR_31)
    goto sync_out;
   VAR_21->m_flags |= VAR_13;
   VAR_37 = VAR_25.data_blkaddr;
  } else {
   if (VAR_23 == VAR_6) {
    VAR_21->m_pblk = 0;
    goto sync_out;
   }
   if (VAR_23 == VAR_9)
    goto sync_out;
   if (VAR_23 == VAR_8 &&
      VAR_37 == VAR_19) {
    if (VAR_21->m_next_pgofs)
     *VAR_21->m_next_pgofs = VAR_28 + 1;
    goto sync_out;
   }
   if (VAR_23 != VAR_8) {

    if (VAR_21->m_next_pgofs)
     *VAR_21->m_next_pgofs = VAR_28 + 1;
    goto sync_out;
   }
  }
 }

 if (VAR_23 == VAR_10)
  goto skip;

 if (VAR_21->m_len == 0) {

  if (VAR_37 == VAR_18)
   VAR_21->m_flags |= VAR_14;
  VAR_21->m_flags |= VAR_12;

  VAR_21->m_pblk = VAR_37;
  VAR_21->m_len = 1;
 } else if ((VAR_21->m_pblk != VAR_18 &&
   VAR_37 == (VAR_21->m_pblk + VAR_32)) ||
   (VAR_21->m_pblk == VAR_18 && VAR_37 == VAR_18) ||
   VAR_23 == VAR_11) {
  VAR_32++;
  VAR_21->m_len++;
 } else {
  goto sync_out;
 }

skip:
 VAR_25.ofs_in_node++;
 VAR_28++;


 if (VAR_23 == VAR_10 &&
   (VAR_28 == VAR_30 || VAR_25.ofs_in_node == VAR_29)) {

  VAR_25.ofs_in_node = VAR_33;
  VAR_31 = FUNC_14(&VAR_25, VAR_35);
  if (VAR_31)
   goto sync_out;

  VAR_21->m_len += VAR_25.ofs_in_node - VAR_33;
  if (VAR_35 && VAR_25.ofs_in_node != VAR_34 + 1) {
   VAR_31 = -VAR_5;
   goto sync_out;
  }
  VAR_25.ofs_in_node = VAR_29;
 }

 if (VAR_28 >= VAR_30)
  goto sync_out;
 else if (VAR_25.ofs_in_node < VAR_29)
  goto next_block;

 if (VAR_23 == VAR_9) {
  if (VAR_21->m_flags & VAR_12) {
   unsigned int VAR_39 = VAR_38 - VAR_21->m_lblk;

   FUNC_15(&VAR_25,
    VAR_38, VAR_21->m_pblk + VAR_39,
    VAR_21->m_len - VAR_39);
  }
 }

 FUNC_13(&VAR_25);

 if (VAR_21->m_may_create) {
  FUNC_4(VAR_26, VAR_23, 0);
  FUNC_7(VAR_26, VAR_25.node_changed);
 }
 goto next_dnode;

sync_out:


 if (VAR_23 == VAR_7 && VAR_21->m_flags & VAR_12)
  FUNC_16(VAR_20,
      VAR_21->m_pblk, VAR_21->m_len);

 if (VAR_23 == VAR_9) {
  if (VAR_21->m_flags & VAR_12) {
   unsigned int VAR_40 = VAR_38 - VAR_21->m_lblk;

   FUNC_15(&VAR_25,
    VAR_38, VAR_21->m_pblk + VAR_40,
    VAR_21->m_len - VAR_40);
  }
  if (VAR_21->m_next_extent)
   *VAR_21->m_next_extent = VAR_28 + 1;
 }
 FUNC_13(&VAR_25);
unlock_out:
 if (VAR_21->m_may_create) {
  FUNC_4(VAR_26, VAR_23, 0);
  FUNC_7(VAR_26, VAR_25.node_changed);
 }
out:
 FUNC_21(VAR_20, VAR_21, VAR_31);
 return VAR_31;
}
