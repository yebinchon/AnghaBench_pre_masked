
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {int s_blocksize; } ;
struct ocfs2_super {struct super_block* sb; } ;
struct ocfs2_extent_tree {int dummy; } ;
struct ocfs2_extent_list {int dummy; } ;
struct ocfs2_dir_lookup_result {struct buffer_head* dl_dx_root_bh; } ;
struct ocfs2_dir_entry {void* rec_len; scalar_t__ inode; } ;
struct TYPE_4__ {struct ocfs2_extent_list i_list; } ;
struct ocfs2_dinode {TYPE_1__ id2; } ;
struct ocfs2_alloc_context {int * ac_resv; } ;
struct inode {int i_blocks; TYPE_2__* i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef scalar_t__ loff_t ;
typedef int handle_t ;
struct TYPE_6__ {int ip_dyn_features; int ip_alloc_sem; int ip_lock; int ip_la_data_resv; int ip_clusters; scalar_t__ ip_blkno; } ;
struct TYPE_5__ {scalar_t__ s_blocksize; } ;


 int FUNC_0 (struct buffer_head*) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (int *) ;
 TYPE_3__* FUNC_3 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct buffer_head*) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct buffer_head*) ;
 scalar_t__ FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*,scalar_t__) ;
 int FUNC_11 (void*) ;
 int FUNC_12 (scalar_t__,int ,int ) ;
 int FUNC_13 (int) ;
 int FUNC_14 (struct super_block*,struct ocfs2_extent_list*) ;
 scalar_t__ FUNC_15 (struct super_block*,int ) ;
 int FUNC_16 (struct ocfs2_super*,int *) ;
 scalar_t__ FUNC_17 (struct inode*) ;
 scalar_t__ FUNC_18 (struct ocfs2_super*) ;
 int FUNC_19 (struct super_block*) ;
 int FUNC_20 (struct super_block*,int *,struct inode*,struct buffer_head*,struct ocfs2_alloc_context*,struct ocfs2_alloc_context*,struct buffer_head**) ;
 int FUNC_21 (struct inode*,int *,struct buffer_head*,struct buffer_head*) ;
 int FUNC_22 (struct inode*,struct buffer_head*,unsigned int,struct ocfs2_dir_lookup_result*,struct buffer_head**) ;
 int FUNC_23 (struct ocfs2_alloc_context*) ;
 int FUNC_24 (struct ocfs2_extent_tree*,int ,struct buffer_head*) ;
 int FUNC_25 (struct inode*,struct buffer_head*,int ) ;
 int FUNC_26 (struct inode*) ;
 int FUNC_27 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_28 (int *,struct buffer_head*) ;
 int FUNC_29 (int *,struct inode*,struct buffer_head*) ;
 int FUNC_30 (struct ocfs2_extent_tree*) ;
 int FUNC_31 (struct ocfs2_super*,int,struct ocfs2_alloc_context**) ;
 int FUNC_32 (struct ocfs2_super*,struct ocfs2_extent_list*,struct ocfs2_alloc_context**) ;
 int FUNC_33 (int ,struct buffer_head*) ;
 int * FUNC_34 (struct ocfs2_super*,int) ;
 scalar_t__ FUNC_35 (struct inode*) ;
 int FUNC_36 (int *,struct inode*,int) ;
 int FUNC_37 (int *) ;
 int FUNC_38 (int *) ;
 int FUNC_39 (unsigned long long,scalar_t__) ;
 int FUNC_40 (int *) ;

__attribute__((used)) static int FUNC_41(struct ocfs2_super *VAR_4,
       struct inode *VAR_5,
       struct buffer_head *VAR_6,
       unsigned int VAR_7,
       struct ocfs2_dir_lookup_result *VAR_8,
       struct buffer_head **VAR_9)
{
 int VAR_10 = 0;
 int VAR_11, VAR_12, VAR_13 = 0;
 loff_t VAR_14;
 struct ocfs2_dinode *VAR_15 = (struct ocfs2_dinode *) VAR_6->b_data;
 struct ocfs2_extent_list *VAR_16 = &VAR_15->id2.i_list;
 struct ocfs2_alloc_context *VAR_17 = ((void*)0);
 struct ocfs2_alloc_context *VAR_18 = ((void*)0);
 handle_t *VAR_19 = ((void*)0);
 struct buffer_head *VAR_20 = ((void*)0);
 struct ocfs2_dir_entry * VAR_21;
 struct super_block *VAR_22 = VAR_4->sb;
 struct ocfs2_extent_tree VAR_23;
 struct buffer_head *VAR_24 = VAR_8->dl_dx_root_bh;

 if (FUNC_3(VAR_5)->ip_dyn_features & VAR_1) {




  FUNC_0(VAR_24);

  VAR_10 = FUNC_22(VAR_5, VAR_6,
       VAR_7, VAR_8,
       &VAR_20);
  if (VAR_10) {
   FUNC_13(VAR_10);
   goto bail;
  }



  VAR_24 = VAR_8->dl_dx_root_bh;

  if (VAR_7 == 1) {







   FUNC_0(VAR_20 == ((void*)0));
   goto bail_bh;
  }





  FUNC_5(VAR_20);
  VAR_20 = ((void*)0);

  FUNC_7(&FUNC_3(VAR_5)->ip_alloc_sem);
  VAR_13 = 1;
  VAR_14 = FUNC_9(VAR_5);
  VAR_11 = VAR_3;
  goto do_extend;
 }

 FUNC_7(&FUNC_3(VAR_5)->ip_alloc_sem);
 VAR_13 = 1;
 VAR_14 = FUNC_9(VAR_5);
 FUNC_39((unsigned long long)FUNC_3(VAR_5)->ip_blkno,
          VAR_14);


 FUNC_37(&FUNC_3(VAR_5)->ip_lock);
 if (VAR_14 == FUNC_15(VAR_22, FUNC_3(VAR_5)->ip_clusters)) {
  FUNC_38(&FUNC_3(VAR_5)->ip_lock);
  FUNC_24(&VAR_23, FUNC_1(VAR_5),
           VAR_6);
  VAR_12 = FUNC_30(&VAR_23);
  if (VAR_12 < 0) {
   VAR_10 = VAR_12;
   FUNC_13(VAR_10);
   goto bail;
  }

  if (!VAR_12) {
   VAR_10 = FUNC_32(VAR_4, VAR_16, &VAR_18);
   if (VAR_10 < 0) {
    if (VAR_10 != -VAR_0)
     FUNC_13(VAR_10);
    goto bail;
   }
  }

  VAR_10 = FUNC_31(VAR_4, 1, &VAR_17);
  if (VAR_10 < 0) {
   if (VAR_10 != -VAR_0)
    FUNC_13(VAR_10);
   goto bail;
  }

  if (FUNC_18(VAR_4))
   VAR_17->ac_resv = &FUNC_3(VAR_5)->ip_la_data_resv;

  VAR_11 = FUNC_14(VAR_22, VAR_16);
 } else {
  FUNC_38(&FUNC_3(VAR_5)->ip_lock);
  VAR_11 = VAR_3;
 }

do_extend:
 if (FUNC_17(VAR_5))
  VAR_11++;


 VAR_19 = FUNC_34(VAR_4, VAR_11);
 if (FUNC_2(VAR_19)) {
  VAR_10 = FUNC_4(VAR_19);
  VAR_19 = ((void*)0);
  FUNC_13(VAR_10);
  goto bail;
 }

 VAR_10 = FUNC_20(VAR_4->sb, VAR_19, VAR_5, VAR_6,
         VAR_17, VAR_18, &VAR_20);
 if (VAR_10 < 0) {
  FUNC_13(VAR_10);
  goto bail;
 }

 FUNC_33(FUNC_1(VAR_5), VAR_20);

 VAR_10 = FUNC_27(VAR_19, FUNC_1(VAR_5), VAR_20,
      VAR_2);
 if (VAR_10 < 0) {
  FUNC_13(VAR_10);
  goto bail;
 }
 FUNC_12(VAR_20->b_data, 0, VAR_22->s_blocksize);

 VAR_21 = (struct ocfs2_dir_entry *) VAR_20->b_data;
 VAR_21->inode = 0;
 if (FUNC_35(VAR_5)) {
  VAR_21->rec_len = FUNC_6(FUNC_19(VAR_22));

  FUNC_25(VAR_5, VAR_20, FUNC_11(VAR_21->rec_len));

  if (FUNC_17(VAR_5)) {
   VAR_10 = FUNC_21(VAR_5, VAR_19,
          VAR_24, VAR_20);
   if (VAR_10) {
    FUNC_13(VAR_10);
    goto bail;
   }
  }
 } else {
  VAR_21->rec_len = FUNC_6(VAR_22->s_blocksize);
 }
 FUNC_36(VAR_19, VAR_5, 1);
 FUNC_28(VAR_19, VAR_20);

 VAR_14 += VAR_5->i_sb->s_blocksize;
 FUNC_10(VAR_5, VAR_14);
 VAR_5->i_blocks = FUNC_26(VAR_5);
 VAR_10 = FUNC_29(VAR_19, VAR_5, VAR_6);
 if (VAR_10 < 0) {
  FUNC_13(VAR_10);
  goto bail;
 }

bail_bh:
 *VAR_9 = VAR_20;
 FUNC_8(*VAR_9);
bail:
 if (VAR_19)
  FUNC_16(VAR_4, VAR_19);
 if (VAR_13)
  FUNC_40(&FUNC_3(VAR_5)->ip_alloc_sem);

 if (VAR_17)
  FUNC_23(VAR_17);
 if (VAR_18)
  FUNC_23(VAR_18);

 FUNC_5(VAR_20);

 return VAR_10;
}
