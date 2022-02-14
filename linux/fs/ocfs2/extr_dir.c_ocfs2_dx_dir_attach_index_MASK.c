
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
typedef int u16 ;
struct ocfs2_super {TYPE_3__* sb; int fs_generation; } ;
struct TYPE_8__ {void* l_count; } ;
struct TYPE_7__ {void* de_count; } ;
struct ocfs2_dx_root_block {TYPE_2__ dr_list; TYPE_1__ dr_entries; int dr_flags; void* dr_free_blk; void* dr_num_entries; void* dr_dir_blkno; void* dr_blkno; void* dr_fs_generation; void* dr_suballoc_bit; void* dr_suballoc_loc; void* dr_suballoc_slot; int dr_signature; } ;
struct ocfs2_dir_block_trailer {int db_free_rec_len; } ;
struct ocfs2_dinode {void* i_dyn_features; void* i_dx_root; } ;
struct ocfs2_alloc_context {int ac_alloc_slot; } ;
struct inode {int i_sb; } ;
struct buffer_head {scalar_t__ b_blocknr; scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_10__ {int ip_lock; int ip_dyn_features; scalar_t__ ip_blkno; } ;
struct TYPE_9__ {int s_blocksize; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_6__* FUNC_1 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct buffer_head*) ;
 void* FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 void* FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct ocfs2_dx_root_block*,int ,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *,struct ocfs2_alloc_context*,int,scalar_t__*,int *,unsigned int*,scalar_t__*) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_13 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_14 (int *,struct buffer_head*) ;
 int FUNC_15 (int ,struct buffer_head*) ;
 struct ocfs2_dir_block_trailer* FUNC_16 (struct buffer_head*,int ) ;
 struct buffer_head* FUNC_17 (TYPE_3__*,scalar_t__) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 (unsigned long long,unsigned long long) ;

__attribute__((used)) static int FUNC_22(struct ocfs2_super *VAR_5,
         handle_t *VAR_6, struct inode *VAR_7,
         struct buffer_head *VAR_8,
         struct buffer_head *VAR_9,
         struct ocfs2_alloc_context *VAR_10,
         int VAR_11, u32 VAR_12,
         struct buffer_head **VAR_13)
{
 int VAR_14;
 struct ocfs2_dinode *VAR_15 = (struct ocfs2_dinode *) VAR_8->b_data;
 u16 VAR_16;
 u64 VAR_17, VAR_18;
 unsigned int VAR_19;
 struct buffer_head *VAR_20 = ((void*)0);
 struct ocfs2_dx_root_block *VAR_21;
 struct ocfs2_dir_block_trailer *VAR_22 =
  FUNC_16(VAR_9, VAR_7->i_sb);

 VAR_14 = FUNC_9(VAR_6, VAR_10, 1, &VAR_17,
       &VAR_16, &VAR_19, &VAR_18);
 if (VAR_14) {
  FUNC_8(VAR_14);
  goto out;
 }

 FUNC_21(
    (unsigned long long)FUNC_1(VAR_7)->ip_blkno,
    (unsigned long long)VAR_18);

 VAR_20 = FUNC_17(VAR_5->sb, VAR_18);
 if (VAR_20 == ((void*)0)) {
  VAR_14 = -VAR_0;
  goto out;
 }
 FUNC_15(FUNC_0(VAR_7), VAR_20);

 VAR_14 = FUNC_13(VAR_6, FUNC_0(VAR_7), VAR_20,
          VAR_4);
 if (VAR_14 < 0) {
  FUNC_8(VAR_14);
  goto out;
 }

 VAR_21 = (struct ocfs2_dx_root_block *)VAR_20->b_data;
 FUNC_7(VAR_21, 0, VAR_5->sb->s_blocksize);
 FUNC_20(VAR_21->dr_signature, VAR_2);
 VAR_21->dr_suballoc_slot = FUNC_3(VAR_10->ac_alloc_slot);
 VAR_21->dr_suballoc_loc = FUNC_5(VAR_17);
 VAR_21->dr_suballoc_bit = FUNC_3(VAR_16);
 VAR_21->dr_fs_generation = FUNC_4(VAR_5->fs_generation);
 VAR_21->dr_blkno = FUNC_5(VAR_18);
 VAR_21->dr_dir_blkno = FUNC_5(FUNC_1(VAR_7)->ip_blkno);
 VAR_21->dr_num_entries = FUNC_4(VAR_12);
 if (FUNC_6(VAR_22->db_free_rec_len))
  VAR_21->dr_free_blk = FUNC_5(VAR_9->b_blocknr);
 else
  VAR_21->dr_free_blk = FUNC_5(0);

 if (VAR_11) {
  VAR_21->dr_flags |= VAR_1;
  VAR_21->dr_entries.de_count =
   FUNC_3(FUNC_10(VAR_5->sb));
 } else {
  VAR_21->dr_list.l_count =
   FUNC_3(FUNC_11(VAR_5->sb));
 }
 FUNC_14(VAR_6, VAR_20);

 VAR_14 = FUNC_12(VAR_6, FUNC_0(VAR_7), VAR_8,
          VAR_4);
 if (VAR_14) {
  FUNC_8(VAR_14);
  goto out;
 }

 VAR_15->i_dx_root = FUNC_5(VAR_18);

 FUNC_18(&FUNC_1(VAR_7)->ip_lock);
 FUNC_1(VAR_7)->ip_dyn_features |= VAR_3;
 VAR_15->i_dyn_features = FUNC_3(FUNC_1(VAR_7)->ip_dyn_features);
 FUNC_19(&FUNC_1(VAR_7)->ip_lock);

 FUNC_14(VAR_6, VAR_8);

 *VAR_13 = VAR_20;
 VAR_20 = ((void*)0);

out:
 FUNC_2(VAR_20);
 return VAR_14;
}
