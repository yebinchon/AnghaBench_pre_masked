
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct ocfs2_xattr_block {int xb_suballoc_slot; scalar_t__ xb_suballoc_loc; int xb_suballoc_bit; scalar_t__ xb_blkno; } ;
struct ocfs2_super {int dummy; } ;
struct ocfs2_caching_info {int dummy; } ;
struct inode {int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 struct ocfs2_super* FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct ocfs2_super*,int *) ;
 int FUNC_11 (int *,struct inode*,struct buffer_head*,int ,int ,int) ;
 struct inode* FUNC_12 (struct ocfs2_super*,int ,int ) ;
 int FUNC_13 (struct inode*,struct buffer_head**,int) ;
 int FUNC_14 (struct inode*,int) ;
 int FUNC_15 (struct inode*,int ,struct buffer_head**) ;
 int * FUNC_16 (struct ocfs2_super*,int ) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (struct inode*,struct buffer_head*,struct ocfs2_caching_info*,struct buffer_head*) ;

__attribute__((used)) static int FUNC_19(struct inode *VAR_3,
      u64 VAR_4,
      struct ocfs2_caching_info *VAR_5,
      struct buffer_head *VAR_6)
{
 struct inode *VAR_7;
 struct buffer_head *VAR_8 = ((void*)0);
 struct buffer_head *VAR_9 = ((void*)0);
 struct ocfs2_xattr_block *VAR_10;
 struct ocfs2_super *VAR_11 = FUNC_1(VAR_3->i_sb);
 handle_t *VAR_12;
 int VAR_13 = 0;
 u64 VAR_14, VAR_15;
 u16 VAR_16;

 VAR_13 = FUNC_15(VAR_3, VAR_4, &VAR_9);
 if (VAR_13 < 0) {
  FUNC_9(VAR_13);
  goto out;
 }

 VAR_13 = FUNC_18(VAR_3, VAR_9, VAR_5, VAR_6);
 if (VAR_13 < 0) {
  FUNC_9(VAR_13);
  goto out;
 }

 VAR_10 = (struct ocfs2_xattr_block *)VAR_9->b_data;
 VAR_14 = FUNC_8(VAR_10->xb_blkno);
 VAR_16 = FUNC_7(VAR_10->xb_suballoc_bit);
 if (VAR_10->xb_suballoc_loc)
  VAR_15 = FUNC_8(VAR_10->xb_suballoc_loc);
 else
  VAR_15 = FUNC_17(VAR_14, VAR_16);

 VAR_7 = FUNC_12(VAR_11,
    VAR_1,
    FUNC_7(VAR_10->xb_suballoc_slot));
 if (!VAR_7) {
  VAR_13 = -VAR_0;
  FUNC_9(VAR_13);
  goto out;
 }
 FUNC_4(VAR_7);

 VAR_13 = FUNC_13(VAR_7, &VAR_8, 1);
 if (VAR_13 < 0) {
  FUNC_9(VAR_13);
  goto out_mutex;
 }

 VAR_12 = FUNC_16(VAR_11, VAR_2);
 if (FUNC_0(VAR_12)) {
  VAR_13 = FUNC_2(VAR_12);
  FUNC_9(VAR_13);
  goto out_unlock;
 }

 VAR_13 = FUNC_11(VAR_12, VAR_7, VAR_8,
           VAR_16, VAR_15, 1);
 if (VAR_13 < 0)
  FUNC_9(VAR_13);

 FUNC_10(VAR_11, VAR_12);
out_unlock:
 FUNC_14(VAR_7, 1);
 FUNC_3(VAR_8);
out_mutex:
 FUNC_5(VAR_7);
 FUNC_6(VAR_7);
out:
 FUNC_3(VAR_9);
 return VAR_13;
}
