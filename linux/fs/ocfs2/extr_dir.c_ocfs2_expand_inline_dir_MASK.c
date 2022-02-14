
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int u64 ;
typedef int u32 ;
struct super_block {unsigned int s_blocksize_bits; scalar_t__ s_blocksize; } ;
struct ocfs2_super {struct super_block* sb; } ;
struct ocfs2_inode_info {int ip_alloc_sem; int ip_lock; int ip_dyn_features; int ip_la_data_resv; } ;
struct ocfs2_extent_tree {int dummy; } ;
struct ocfs2_dir_lookup_result {struct buffer_head* dl_dx_root_bh; struct buffer_head* dl_dx_leaf_bh; int dl_hinfo; } ;
struct TYPE_4__ {int id_data; } ;
struct TYPE_5__ {TYPE_1__ i_data; } ;
struct ocfs2_dinode {int i_mtime_nsec; int i_ctime_nsec; void* i_mtime; void* i_ctime; void* i_size; int i_dyn_features; TYPE_2__ id2; } ;
struct ocfs2_alloc_context {int * ac_resv; } ;
struct TYPE_6__ {int tv_nsec; scalar_t__ tv_sec; } ;
struct inode {struct super_block* i_sb; int i_blocks; TYPE_3__ i_ctime; TYPE_3__ i_mtime; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (int *) ;
 struct ocfs2_inode_info* FUNC_3 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct ocfs2_super* FUNC_4 (struct super_block*) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct inode*,int ,int *,struct ocfs2_alloc_context*,struct buffer_head**,int,unsigned int*) ;
 int FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 void* FUNC_10 (scalar_t__) ;
 TYPE_3__ FUNC_11 (struct inode*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct inode*,int) ;
 int FUNC_14 (struct inode*,int) ;
 int FUNC_15 (struct buffer_head*) ;
 scalar_t__ FUNC_16 (struct inode*) ;
 int FUNC_17 (struct inode*,scalar_t__) ;
 int FUNC_18 (struct buffer_head**) ;
 int FUNC_19 (scalar_t__,int ,scalar_t__) ;
 int FUNC_20 (scalar_t__,int ,scalar_t__) ;
 int FUNC_21 (int) ;
 scalar_t__ FUNC_22 (struct super_block*) ;
 int FUNC_23 (int *,struct ocfs2_alloc_context*,int,int*,int*) ;
 int FUNC_24 (struct super_block*,unsigned int) ;
 unsigned int FUNC_25 (struct super_block*,int) ;
 int FUNC_26 (struct super_block*,int) ;
 int FUNC_27 (struct ocfs2_super*,int *) ;
 int FUNC_28 (struct inode*,struct ocfs2_dinode*) ;
 scalar_t__ FUNC_29 (struct ocfs2_super*) ;
 int FUNC_30 (struct ocfs2_super*,int *,struct inode*,struct buffer_head*,struct buffer_head*,struct ocfs2_alloc_context*,int,int,struct buffer_head**) ;
 unsigned int FUNC_31 (struct ocfs2_super*,int *) ;
 int FUNC_32 (struct inode*,int *,struct buffer_head**,int,int*,struct buffer_head*) ;
 int FUNC_33 (struct inode*,struct buffer_head*,struct buffer_head*) ;
 struct buffer_head** FUNC_34 (struct super_block*,int*) ;
 int FUNC_35 (scalar_t__,scalar_t__,struct inode*) ;
 int FUNC_36 (struct ocfs2_alloc_context*) ;
 int FUNC_37 (struct ocfs2_extent_tree*,int ,struct buffer_head*) ;
 int FUNC_38 (struct inode*,struct buffer_head*,int) ;
 int FUNC_39 (struct ocfs2_extent_tree*,int ,struct buffer_head*) ;
 int FUNC_40 (struct super_block*) ;
 int FUNC_41 (struct inode*) ;
 int FUNC_42 (int *,struct ocfs2_extent_tree*,int,unsigned int,int,int ,int *) ;
 int FUNC_43 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_44 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_45 (int *,struct buffer_head*) ;
 scalar_t__ FUNC_46 (struct inode*) ;
 int FUNC_47 (struct inode*,struct buffer_head*) ;
 int FUNC_48 (struct ocfs2_super*,int,struct ocfs2_alloc_context**) ;
 int FUNC_49 (struct ocfs2_super*,int,struct ocfs2_alloc_context**) ;
 int FUNC_50 (int ,struct buffer_head*) ;
 int * FUNC_51 (struct ocfs2_super*,int) ;
 scalar_t__ FUNC_52 (struct ocfs2_super*) ;
 int FUNC_53 (int *,struct inode*,int) ;
 struct buffer_head* FUNC_54 (struct super_block*,unsigned int) ;
 int FUNC_55 (int *) ;
 int FUNC_56 (int *) ;
 int FUNC_57 (int *) ;

__attribute__((used)) static int FUNC_58(struct inode *VAR_4, struct buffer_head *VAR_5,
       unsigned int VAR_6,
       struct ocfs2_dir_lookup_result *VAR_7,
       struct buffer_head **VAR_8)
{
 u32 VAR_9, VAR_10, VAR_11, VAR_12, VAR_13 = 0;
 struct super_block *VAR_14 = VAR_4->i_sb;
 int VAR_15, VAR_16, VAR_17 = 0, VAR_18 = 0,
  VAR_19 = FUNC_40(VAR_14);
 u64 VAR_20, VAR_21,
  VAR_22 = VAR_6 << VAR_14->s_blocksize_bits;
 struct ocfs2_super *VAR_23 = FUNC_4(VAR_4->i_sb);
 struct ocfs2_inode_info *VAR_24 = FUNC_3(VAR_4);
 struct ocfs2_alloc_context *VAR_25 = ((void*)0);
 struct ocfs2_alloc_context *VAR_26 = ((void*)0);
 struct buffer_head *VAR_27 = ((void*)0);
 struct buffer_head *VAR_28 = ((void*)0);
 struct buffer_head **VAR_29 = ((void*)0);
 struct ocfs2_dinode *VAR_30 = (struct ocfs2_dinode *)VAR_5->b_data;
 handle_t *VAR_31;
 struct ocfs2_extent_tree VAR_32;
 struct ocfs2_extent_tree VAR_33;
 int VAR_34 = 0, VAR_35 = 0;

 FUNC_37(&VAR_32, FUNC_1(VAR_4), VAR_5);

 VAR_9 = FUNC_24(VAR_14, VAR_22);
 VAR_10 = 0;

 FUNC_12(&VAR_24->ip_alloc_sem);

 if (FUNC_52(VAR_23)) {
  VAR_19 += FUNC_22(VAR_14);

  VAR_18 = FUNC_47(VAR_4, VAR_5);
  if (!VAR_18) {

   VAR_10++;
   VAR_29 = FUNC_34(VAR_14,
        &VAR_17);
   if (!VAR_29) {
    VAR_15 = -VAR_0;
    FUNC_21(VAR_15);
    goto out;
   }
  }


  VAR_15 = FUNC_49(VAR_23, 1, &VAR_26);
  if (VAR_15) {
   FUNC_21(VAR_15);
   goto out;
  }
 }
 FUNC_0(VAR_9 > 2);

 VAR_15 = FUNC_48(VAR_23, VAR_9 + VAR_10, &VAR_25);
 if (VAR_15) {
  FUNC_21(VAR_15);
  goto out;
 }





 if (VAR_9 == 2)
  VAR_19 += VAR_3;

 VAR_31 = FUNC_51(VAR_23, VAR_19);
 if (FUNC_2(VAR_31)) {
  VAR_15 = FUNC_5(VAR_31);
  FUNC_21(VAR_15);
  goto out;
 }

 VAR_15 = FUNC_13(VAR_4,
  FUNC_26(VAR_23->sb, VAR_9 + VAR_10));
 if (VAR_15)
  goto out_commit;
 VAR_34 = 1;

 if (FUNC_52(VAR_23) && !VAR_18) {





  VAR_15 = FUNC_6(VAR_4, 0, VAR_31, VAR_25,
       VAR_29, VAR_17,
       &VAR_20);
  if (VAR_15) {
   FUNC_21(VAR_15);
   goto out_commit;
  }
  VAR_35 += FUNC_26(VAR_4->i_sb, 1);
 }






 if (FUNC_29(VAR_23))
  VAR_25->ac_resv = &VAR_24->ip_la_data_resv;
 VAR_15 = FUNC_23(VAR_31, VAR_25, 1, &VAR_11, &VAR_12);
 if (VAR_15) {
  FUNC_21(VAR_15);
  goto out_commit;
 }
 VAR_35 += FUNC_26(VAR_4->i_sb, 1);






 VAR_21 = FUNC_25(VAR_4->i_sb, VAR_11);
 VAR_27 = FUNC_54(VAR_14, VAR_21);
 if (!VAR_27) {
  VAR_15 = -VAR_0;
  FUNC_21(VAR_15);
  goto out_commit;
 }

 FUNC_50(FUNC_1(VAR_4), VAR_27);

 VAR_15 = FUNC_43(VAR_31, FUNC_1(VAR_4), VAR_27,
          VAR_2);
 if (VAR_15) {
  FUNC_21(VAR_15);
  goto out_commit;
 }

 FUNC_19(VAR_27->b_data, VAR_30->id2.i_data.id_data, FUNC_16(VAR_4));
 FUNC_20(VAR_27->b_data + FUNC_16(VAR_4), 0,
        VAR_14->s_blocksize - FUNC_16(VAR_4));
 VAR_16 = FUNC_35(VAR_27->b_data, FUNC_16(VAR_4), VAR_4);
 if (FUNC_46(VAR_4)) {






  FUNC_38(VAR_4, VAR_27, VAR_16);
 }

 FUNC_53(VAR_31, VAR_4, 1);
 FUNC_45(VAR_31, VAR_27);

 if (FUNC_52(VAR_23) && !VAR_18) {
  VAR_15 = FUNC_32(VAR_4, VAR_31, VAR_29,
            VAR_17, &VAR_13,
            VAR_27);
  if (VAR_15) {
   FUNC_21(VAR_15);
   goto out_commit;
  }
 }
 VAR_15 = FUNC_44(VAR_31, FUNC_1(VAR_4), VAR_5,
          VAR_2);
 if (VAR_15) {
  FUNC_21(VAR_15);
  goto out_commit;
 }

 FUNC_55(&VAR_24->ip_lock);
 VAR_24->ip_dyn_features &= ~VAR_1;
 VAR_30->i_dyn_features = FUNC_8(VAR_24->ip_dyn_features);
 FUNC_56(&VAR_24->ip_lock);

 FUNC_28(VAR_4, VAR_30);

 FUNC_17(VAR_4, VAR_14->s_blocksize);
 VAR_4->i_mtime = VAR_4->i_ctime = FUNC_11(VAR_4);

 VAR_30->i_size = FUNC_10(VAR_14->s_blocksize);
 VAR_30->i_ctime = VAR_30->i_mtime = FUNC_10(VAR_4->i_ctime.tv_sec);
 VAR_30->i_ctime_nsec = VAR_30->i_mtime_nsec = FUNC_9(VAR_4->i_ctime.tv_nsec);
 FUNC_53(VAR_31, VAR_4, 1);





 VAR_15 = FUNC_42(VAR_31, &VAR_32, 0, VAR_21, VAR_12,
      0, ((void*)0));
 if (VAR_15) {
  FUNC_21(VAR_15);
  goto out_commit;
 }





 VAR_4->i_blocks = FUNC_41(VAR_4);

 FUNC_45(VAR_31, VAR_5);

 if (FUNC_52(VAR_23)) {
  VAR_15 = FUNC_30(VAR_23, VAR_31, VAR_4, VAR_5,
      VAR_27, VAR_26, VAR_18,
      VAR_13, &VAR_28);
  if (VAR_15) {
   FUNC_21(VAR_15);
   goto out_commit;
  }

  if (VAR_18) {
   FUNC_33(VAR_4, VAR_28,
            VAR_27);
  } else {
   FUNC_39(&VAR_33,
             FUNC_1(VAR_4),
             VAR_28);
   VAR_15 = FUNC_42(VAR_31, &VAR_33, 0,
        VAR_20, 1, 0, ((void*)0));
   if (VAR_15)
    FUNC_21(VAR_15);
  }
 }





 if (VAR_9 > VAR_12) {
  VAR_15 = FUNC_23(VAR_31, VAR_25, 1, &VAR_11,
        &VAR_12);
  if (VAR_15) {
   FUNC_21(VAR_15);
   goto out_commit;
  }
  VAR_21 = FUNC_25(VAR_4->i_sb, VAR_11);

  VAR_15 = FUNC_42(VAR_31, &VAR_32, 1,
       VAR_21, VAR_12, 0, ((void*)0));
  if (VAR_15) {
   FUNC_21(VAR_15);
   goto out_commit;
  }
  VAR_35 += FUNC_26(VAR_4->i_sb, 1);
 }

 *VAR_8 = VAR_27;
 VAR_27 = ((void*)0);
 if (FUNC_52(VAR_23)) {
  unsigned int VAR_36;

  if (!VAR_18) {




   VAR_36 = FUNC_31(VAR_23,
          &VAR_7->dl_hinfo);
   FUNC_15(VAR_29[VAR_36]);
   VAR_7->dl_dx_leaf_bh = VAR_29[VAR_36];
  }
  VAR_7->dl_dx_root_bh = VAR_28;
  VAR_28 = ((void*)0);
 }

out_commit:
 if (VAR_15 < 0 && VAR_34)
  FUNC_14(VAR_4, VAR_35);

 FUNC_27(VAR_23, VAR_31);

out:
 FUNC_57(&VAR_24->ip_alloc_sem);
 if (VAR_25)
  FUNC_36(VAR_25);
 if (VAR_26)
  FUNC_36(VAR_26);

 if (VAR_29) {
  for (VAR_16 = 0; VAR_16 < VAR_17; VAR_16++)
   FUNC_7(VAR_29[VAR_16]);
  FUNC_18(VAR_29);
 }

 FUNC_7(VAR_27);
 FUNC_7(VAR_28);

 return VAR_15;
}
