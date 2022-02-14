
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct ocfs2_super {int s_clustersize_bits; int s_feature_incompat; int sb; } ;
struct ocfs2_new_group_input {int group; size_t chain; int clusters; int frees; } ;
struct ocfs2_group_desc {void* bg_next_group; } ;
struct TYPE_6__ {int i_used; int i_total; } ;
struct TYPE_7__ {TYPE_2__ bitmap1; } ;
struct ocfs2_chain_list {int cl_next_free_rec; struct ocfs2_chain_rec* cl_recs; int cl_bpc; int cl_cpg; } ;
struct TYPE_5__ {struct ocfs2_chain_list i_chain; } ;
struct ocfs2_dinode {void* i_size; int i_clusters; TYPE_3__ id1; TYPE_1__ id2; } ;
struct ocfs2_chain_rec {int c_free; int c_total; void* c_blkno; } ;
struct inode {int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_8__ {int ip_lock; int ip_clusters; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__* FUNC_2 (struct inode*) ;
 int VAR_5 ;
 int VAR_6 ;
 struct ocfs2_super* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct buffer_head*) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (struct inode*,int) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (void**,int) ;
 int FUNC_16 (void*) ;
 int FUNC_17 (struct ocfs2_chain_rec*,int ,int) ;
 int FUNC_18 (int ,char*,...) ;
 int FUNC_19 (int) ;
 int FUNC_20 (struct ocfs2_super*,int *) ;
 struct inode* FUNC_21 (struct ocfs2_super*,int ,int ) ;
 int FUNC_22 (int ,int ,int ) ;
 int FUNC_23 (struct inode*,struct buffer_head**,int) ;
 int FUNC_24 (struct inode*,int) ;
 scalar_t__ FUNC_25 (struct ocfs2_super*) ;
 scalar_t__ FUNC_26 (struct ocfs2_super*) ;
 int FUNC_27 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_28 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_29 (int *,struct buffer_head*) ;
 int FUNC_30 (struct ocfs2_super*,int,int,struct buffer_head**) ;
 int FUNC_31 (int ,struct buffer_head*) ;
 int * FUNC_32 (struct ocfs2_super*,int ) ;
 int FUNC_33 (struct inode*,int) ;
 int FUNC_34 (struct inode*,struct ocfs2_dinode*,struct ocfs2_new_group_input*,struct buffer_head*) ;
 int FUNC_35 (int *) ;
 int FUNC_36 (int *) ;
 int FUNC_37 (unsigned long long,size_t,int,int) ;

int FUNC_38(struct inode *VAR_7, struct ocfs2_new_group_input *VAR_8)
{
 int VAR_9;
 handle_t *VAR_10;
 struct buffer_head *VAR_11 = ((void*)0);
 struct inode *VAR_12 = ((void*)0);
 struct ocfs2_dinode *VAR_13 = ((void*)0);
 struct ocfs2_super *VAR_14 = FUNC_3(VAR_7->i_sb);
 struct buffer_head *VAR_15 = ((void*)0);
 struct ocfs2_group_desc *VAR_16 = ((void*)0);
 struct ocfs2_chain_list *VAR_17;
 struct ocfs2_chain_rec *VAR_18;
 u16 VAR_19;
 u64 VAR_20;

 if (FUNC_25(VAR_14) || FUNC_26(VAR_14))
  return -VAR_1;

 VAR_12 = FUNC_21(VAR_14,
          VAR_2,
          VAR_5);
 if (!VAR_12) {
  VAR_9 = -VAR_0;
  FUNC_19(VAR_9);
  goto out;
 }

 FUNC_8(VAR_12);

 VAR_9 = FUNC_23(VAR_12, &VAR_11, 1);
 if (VAR_9 < 0) {
  FUNC_19(VAR_9);
  goto out_mutex;
 }

 VAR_13 = (struct ocfs2_dinode *)VAR_11->b_data;

 if (FUNC_12(VAR_13->id2.i_chain.cl_cpg) !=
  FUNC_22(VAR_14->sb, 0,
     VAR_14->s_feature_incompat) * 8) {
  FUNC_18(VAR_3, "The disk is too old and small."
       " Force to do offline resize.");
  VAR_9 = -VAR_0;
  goto out_unlock;
 }

 VAR_9 = FUNC_30(VAR_14, VAR_8->group, 1, &VAR_15);
 if (VAR_9 < 0) {
  FUNC_18(VAR_3, "Can't read the group descriptor # %llu "
       "from the device.", (unsigned long long)VAR_8->group);
  goto out_unlock;
 }

 FUNC_31(FUNC_0(VAR_7), VAR_15);

 VAR_9 = FUNC_34(VAR_12, VAR_13, VAR_8, VAR_15);
 if (VAR_9) {
  FUNC_19(VAR_9);
  goto out_free_group_bh;
 }

 FUNC_37((unsigned long long)VAR_8->group,
          VAR_8->chain, VAR_8->clusters, VAR_8->frees);

 VAR_10 = FUNC_32(VAR_14, VAR_4);
 if (FUNC_1(VAR_10)) {
  FUNC_19(FUNC_4(VAR_10));
  VAR_9 = -VAR_0;
  goto out_free_group_bh;
 }

 VAR_19 = FUNC_12(VAR_13->id2.i_chain.cl_bpc);
 VAR_17 = &VAR_13->id2.i_chain;
 VAR_18 = &VAR_17->cl_recs[VAR_8->chain];

 VAR_9 = FUNC_28(VAR_10, FUNC_0(VAR_12),
          VAR_15, VAR_6);
 if (VAR_9 < 0) {
  FUNC_19(VAR_9);
  goto out_commit;
 }

 VAR_16 = (struct ocfs2_group_desc *)VAR_15->b_data;
 VAR_20 = FUNC_16(VAR_16->bg_next_group);
 VAR_16->bg_next_group = VAR_18->c_blkno;
 FUNC_29(VAR_10, VAR_15);

 VAR_9 = FUNC_27(VAR_10, FUNC_0(VAR_12),
          VAR_11, VAR_6);
 if (VAR_9 < 0) {
  VAR_16->bg_next_group = FUNC_6(VAR_20);
  FUNC_19(VAR_9);
  goto out_commit;
 }

 if (VAR_8->chain == FUNC_12(VAR_17->cl_next_free_rec)) {
  FUNC_11(&VAR_17->cl_next_free_rec, 1);
  FUNC_17(VAR_18, 0, sizeof(struct ocfs2_chain_rec));
 }

 VAR_18->c_blkno = FUNC_6(VAR_8->group);
 FUNC_13(&VAR_18->c_total, VAR_8->clusters * VAR_19);
 FUNC_13(&VAR_18->c_free, VAR_8->frees * VAR_19);

 FUNC_13(&VAR_13->id1.bitmap1.i_total, VAR_8->clusters *VAR_19);
 FUNC_13(&VAR_13->id1.bitmap1.i_used,
       (VAR_8->clusters - VAR_8->frees) * VAR_19);
 FUNC_13(&VAR_13->i_clusters, VAR_8->clusters);

 FUNC_29(VAR_10, VAR_11);

 FUNC_35(&FUNC_2(VAR_12)->ip_lock);
 FUNC_2(VAR_12)->ip_clusters = FUNC_14(VAR_13->i_clusters);
 FUNC_15(&VAR_13->i_size, (u64)VAR_8->clusters << VAR_14->s_clustersize_bits);
 FUNC_36(&FUNC_2(VAR_12)->ip_lock);
 FUNC_7(VAR_12, FUNC_16(VAR_13->i_size));

 FUNC_33(VAR_12, VAR_8->clusters);

out_commit:
 FUNC_20(VAR_14, VAR_10);

out_free_group_bh:
 FUNC_5(VAR_15);

out_unlock:
 FUNC_5(VAR_11);

 FUNC_24(VAR_12, 1);

out_mutex:
 FUNC_9(VAR_12);
 FUNC_10(VAR_12);

out:
 return VAR_9;
}
