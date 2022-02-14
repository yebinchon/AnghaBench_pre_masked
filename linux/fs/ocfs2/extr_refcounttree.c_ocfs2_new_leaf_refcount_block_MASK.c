
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
typedef int u16 ;
struct super_block {int s_blocksize; } ;
struct TYPE_3__ {void* rl_count; } ;
struct ocfs2_refcount_block {int rf_generation; TYPE_1__ rf_records; void* rf_flags; void* rf_parent; void* rf_blkno; void* rf_fs_generation; void* rf_suballoc_bit; void* rf_suballoc_loc; void* rf_suballoc_slot; } ;
struct ocfs2_extent_tree {int dummy; } ;
struct ocfs2_caching_info {int dummy; } ;
struct ocfs2_alloc_context {int ac_alloc_slot; } ;
struct buffer_head {scalar_t__ b_blocknr; scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_4__ {int fs_generation; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct buffer_head*) ;
 void* FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 void* FUNC_5 (scalar_t__) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (struct ocfs2_refcount_block*,int ,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *,struct ocfs2_alloc_context*,int,scalar_t__*,int *,int *,scalar_t__*) ;
 int FUNC_10 (struct buffer_head*,struct buffer_head*,int *) ;
 int FUNC_11 (struct ocfs2_extent_tree*,struct ocfs2_caching_info*,struct buffer_head*) ;
 int FUNC_12 (int *,struct ocfs2_extent_tree*,int ,scalar_t__,int,int ,struct ocfs2_alloc_context*) ;
 int FUNC_13 (int *,struct ocfs2_caching_info*,struct buffer_head*,int ) ;
 int FUNC_14 (int *,struct buffer_head*) ;
 struct super_block* FUNC_15 (struct ocfs2_caching_info*) ;
 int FUNC_16 (struct super_block*) ;
 int FUNC_17 (struct ocfs2_caching_info*,struct buffer_head*) ;
 struct buffer_head* FUNC_18 (struct super_block*,scalar_t__) ;
 int FUNC_19 (void*,int ) ;
 int FUNC_20 (unsigned long long,int ) ;

__attribute__((used)) static int FUNC_21(handle_t *VAR_6,
      struct ocfs2_caching_info *VAR_7,
      struct buffer_head *VAR_8,
      struct buffer_head *VAR_9,
      struct ocfs2_alloc_context *VAR_10)
{
 int VAR_11;
 u16 VAR_12;
 u32 VAR_13, VAR_14;
 u64 VAR_15, VAR_16;
 struct super_block *VAR_17 = FUNC_15(VAR_7);
 struct ocfs2_refcount_block *VAR_18 =
   (struct ocfs2_refcount_block *)VAR_8->b_data;
 struct buffer_head *VAR_19 = ((void*)0);
 struct ocfs2_refcount_block *VAR_20;
 struct ocfs2_extent_tree VAR_21;

 FUNC_0(!(FUNC_6(VAR_18->rf_flags) & VAR_5));

 VAR_11 = FUNC_13(VAR_6, VAR_7, VAR_8,
          VAR_2);
 if (VAR_11) {
  FUNC_8(VAR_11);
  goto out;
 }

 VAR_11 = FUNC_13(VAR_6, VAR_7, VAR_9,
          VAR_2);
 if (VAR_11) {
  FUNC_8(VAR_11);
  goto out;
 }

 VAR_11 = FUNC_9(VAR_6, VAR_10, 1, &VAR_15,
       &VAR_12, &VAR_13,
       &VAR_16);
 if (VAR_11) {
  FUNC_8(VAR_11);
  goto out;
 }

 VAR_19 = FUNC_18(VAR_17, VAR_16);
 if (VAR_19 == ((void*)0)) {
  VAR_11 = -VAR_0;
  FUNC_8(VAR_11);
  goto out;
 }
 FUNC_17(VAR_7, VAR_19);

 VAR_11 = FUNC_13(VAR_6, VAR_7, VAR_19,
          VAR_1);
 if (VAR_11) {
  FUNC_8(VAR_11);
  goto out;
 }


 VAR_20 = (struct ocfs2_refcount_block *)VAR_19->b_data;
 FUNC_7(VAR_20, 0, VAR_17->s_blocksize);
 FUNC_19((void *)VAR_20, VAR_3);
 VAR_20->rf_suballoc_slot = FUNC_3(VAR_10->ac_alloc_slot);
 VAR_20->rf_suballoc_loc = FUNC_5(VAR_15);
 VAR_20->rf_suballoc_bit = FUNC_3(VAR_12);
 VAR_20->rf_fs_generation = FUNC_4(FUNC_1(VAR_17)->fs_generation);
 VAR_20->rf_blkno = FUNC_5(VAR_16);
 VAR_20->rf_parent = FUNC_5(VAR_8->b_blocknr);
 VAR_20->rf_flags = FUNC_4(VAR_4);
 VAR_20->rf_records.rl_count =
    FUNC_3(FUNC_16(VAR_17));
 VAR_20->rf_generation = VAR_18->rf_generation;

 VAR_11 = FUNC_10(VAR_9, VAR_19, &VAR_14);
 if (VAR_11) {
  FUNC_8(VAR_11);
  goto out;
 }

 FUNC_14(VAR_6, VAR_9);
 FUNC_14(VAR_6, VAR_19);

 FUNC_11(&VAR_21, VAR_7, VAR_8);

 FUNC_20(
   (unsigned long long)VAR_19->b_blocknr, VAR_14);


 VAR_11 = FUNC_12(VAR_6, &VAR_21, VAR_14, VAR_19->b_blocknr,
      1, 0, VAR_10);
 if (VAR_11)
  FUNC_8(VAR_11);

out:
 FUNC_2(VAR_19);
 return VAR_11;
}
