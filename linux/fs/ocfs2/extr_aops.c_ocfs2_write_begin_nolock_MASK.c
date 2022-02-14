
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct page {int dummy; } ;
struct ocfs2_write_ctxt {unsigned int w_clen; scalar_t__ w_target_locked; struct page* w_target_page; int w_cpos; TYPE_3__* w_di_bh; int * w_handle; TYPE_2__* w_desc; } ;
struct ocfs2_super {int sb; } ;
struct ocfs2_extent_tree {int dummy; } ;
struct TYPE_6__ {int i_list; } ;
struct ocfs2_dinode {TYPE_1__ id2; int i_clusters; } ;
struct ocfs2_alloc_context {int * ac_resv; } ;
struct inode {int i_sb; } ;
struct buffer_head {int dummy; } ;
struct address_space {struct inode* host; } ;
typedef int ocfs2_write_type_t ;
typedef int loff_t ;
typedef int handle_t ;
struct TYPE_9__ {int ip_la_data_resv; scalar_t__ ip_blkno; } ;
struct TYPE_8__ {scalar_t__ b_data; } ;
struct TYPE_7__ {scalar_t__ c_needs_zero; } ;


 int FUNC_0 (struct page*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (int *) ;
 TYPE_5__* FUNC_3 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct ocfs2_super* FUNC_4 (int ) ;
 int VAR_4 ;
 int FUNC_5 (int *) ;
 int VAR_5 ;
 int FUNC_6 (struct inode*,int ) ;
 int FUNC_7 (struct inode*,int ) ;
 scalar_t__ FUNC_8 (struct inode*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (struct ocfs2_write_ctxt**,struct ocfs2_super*,int ,unsigned int,int ,struct buffer_head*) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (struct inode*,int ,unsigned int) ;
 int FUNC_14 (int ,unsigned int) ;
 int FUNC_15 (struct ocfs2_super*,int *) ;
 int FUNC_16 (struct inode*,struct buffer_head*,int ,unsigned int,struct ocfs2_write_ctxt*) ;
 int FUNC_17 (struct ocfs2_alloc_context*) ;
 int FUNC_18 (struct inode*,struct ocfs2_write_ctxt*) ;
 int FUNC_19 (struct address_space*,struct ocfs2_write_ctxt*,int ,int ,unsigned int,int,struct page*) ;
 int FUNC_20 (struct ocfs2_extent_tree*,int ,TYPE_3__*) ;
 int FUNC_21 (int *,int ,TYPE_3__*,int ) ;
 int FUNC_22 (struct inode*,struct ocfs2_extent_tree*,unsigned int,unsigned int,struct ocfs2_alloc_context**,struct ocfs2_alloc_context**) ;
 int FUNC_23 (struct inode*,struct ocfs2_write_ctxt*,unsigned int*,unsigned int*) ;
 int FUNC_24 (struct inode*,struct buffer_head*,int ,unsigned int,int ) ;
 int FUNC_25 (struct ocfs2_super*,struct ocfs2_write_ctxt*,int ,unsigned int,int) ;
 scalar_t__ FUNC_26 (struct ocfs2_super*) ;
 int * FUNC_27 (struct ocfs2_super*,int) ;
 scalar_t__ FUNC_28 (struct ocfs2_super*) ;
 int FUNC_29 (struct ocfs2_super*,unsigned int) ;
 int FUNC_30 (struct address_space*,struct inode*,int ,unsigned int,struct page*,struct ocfs2_write_ctxt*) ;
 int FUNC_31 (struct address_space*,struct ocfs2_alloc_context*,struct ocfs2_alloc_context*,struct ocfs2_write_ctxt*,int ,unsigned int) ;
 int FUNC_32 (struct inode*,struct buffer_head*,int ) ;
 int FUNC_33 (unsigned long long,long long,int ,int ,unsigned int,int ,struct page*,unsigned int,unsigned int) ;
 int FUNC_34 (struct page*) ;

int FUNC_35(struct address_space *VAR_6,
        loff_t VAR_7, unsigned VAR_8, ocfs2_write_type_t VAR_9,
        struct page **VAR_10, void **VAR_11,
        struct buffer_head *VAR_12, struct page *VAR_13)
{
 int VAR_14, VAR_15, VAR_16 = VAR_2;
 unsigned int VAR_17, VAR_18, VAR_19 = 0;
 struct ocfs2_write_ctxt *VAR_20;
 struct inode *VAR_21 = VAR_6->host;
 struct ocfs2_super *VAR_22 = FUNC_4(VAR_21->i_sb);
 struct ocfs2_dinode *VAR_23;
 struct ocfs2_alloc_context *VAR_24 = ((void*)0);
 struct ocfs2_alloc_context *VAR_25 = ((void*)0);
 handle_t *VAR_26;
 struct ocfs2_extent_tree VAR_27;
 int VAR_28 = 1, VAR_29;

try_again:
 VAR_14 = FUNC_11(&VAR_20, VAR_22, VAR_7, VAR_8, VAR_9, VAR_12);
 if (VAR_14) {
  FUNC_10(VAR_14);
  return VAR_14;
 }

 if (FUNC_28(VAR_22)) {
  VAR_14 = FUNC_30(VAR_6, VAR_21, VAR_7, VAR_8,
           VAR_13, VAR_20);
  if (VAR_14 == 1) {
   VAR_14 = 0;
   goto success;
  }
  if (VAR_14 < 0) {
   FUNC_10(VAR_14);
   goto out;
  }
 }


 if (VAR_9 != VAR_4) {
  if (FUNC_26(VAR_22))
   VAR_14 = FUNC_32(VAR_21, VAR_12, VAR_7);
  else
   VAR_14 = FUNC_16(VAR_21, VAR_12, VAR_7,
          VAR_8, VAR_20);
  if (VAR_14) {
   FUNC_10(VAR_14);
   goto out;
  }
 }

 VAR_14 = FUNC_13(VAR_21, VAR_7, VAR_8);
 if (VAR_14 < 0) {
  FUNC_10(VAR_14);
  goto out;
 } else if (VAR_14 == 1) {
  VAR_19 = VAR_20->w_clen;
  VAR_14 = FUNC_24(VAR_21, VAR_12,
      VAR_20->w_cpos, VAR_20->w_clen, VAR_5);
  if (VAR_14) {
   FUNC_10(VAR_14);
   goto out;
  }
 }

 VAR_14 = FUNC_23(VAR_21, VAR_20, &VAR_17,
     &VAR_18);
 if (VAR_14) {
  FUNC_10(VAR_14);
  goto out;
 }
 VAR_19 += VAR_17;

 VAR_23 = (struct ocfs2_dinode *)VAR_20->w_di_bh->b_data;

 FUNC_33(
   (unsigned long long)FUNC_3(VAR_21)->ip_blkno,
   (long long)FUNC_8(VAR_21),
   FUNC_9(VAR_23->i_clusters),
   VAR_7, VAR_8, VAR_9, VAR_13,
   VAR_17, VAR_18);







 if (VAR_17 || VAR_18) {





  FUNC_20(&VAR_27, FUNC_1(VAR_21),
           VAR_20->w_di_bh);
  VAR_14 = FUNC_22(VAR_21, &VAR_27,
         VAR_17, VAR_18,
         &VAR_24, &VAR_25);
  if (VAR_14) {
   FUNC_10(VAR_14);
   goto out;
  }

  if (VAR_24)
   VAR_24->ac_resv = &FUNC_3(VAR_21)->ip_la_data_resv;

  VAR_16 = FUNC_12(VAR_21->i_sb,
          &VAR_23->id2.i_list);
 } else if (VAR_9 == VAR_4)

  goto success;






 if (VAR_20->w_clen && (VAR_20->w_desc[0].c_needs_zero ||
      VAR_20->w_desc[VAR_20->w_clen - 1].c_needs_zero))
  VAR_15 = 1;
 else
  VAR_15 = 0;

 FUNC_25(VAR_22, VAR_20, VAR_7, VAR_8, VAR_15);

 VAR_26 = FUNC_27(VAR_22, VAR_16);
 if (FUNC_2(VAR_26)) {
  VAR_14 = FUNC_5(VAR_26);
  FUNC_10(VAR_14);
  goto out;
 }

 VAR_20->w_handle = VAR_26;

 if (VAR_17) {
  VAR_14 = FUNC_6(VAR_21,
   FUNC_14(VAR_22->sb, VAR_17));
  if (VAR_14)
   goto out_commit;
 }

 VAR_14 = FUNC_21(VAR_26, FUNC_1(VAR_21), VAR_20->w_di_bh,
          VAR_3);
 if (VAR_14) {
  FUNC_10(VAR_14);
  goto out_quota;
 }






 VAR_14 = FUNC_19(VAR_6, VAR_20, VAR_20->w_cpos, VAR_7, VAR_8,
      VAR_15, VAR_13);
 if (VAR_14 && VAR_14 != -VAR_0) {
  FUNC_10(VAR_14);
  goto out_quota;
 }







 if (VAR_14 == -VAR_0) {
  FUNC_0(VAR_20->w_target_page);
  VAR_14 = 0;
  goto out_quota;
 }

 VAR_14 = FUNC_31(VAR_6, VAR_24, VAR_25, VAR_20, VAR_7,
       VAR_8);
 if (VAR_14) {
  FUNC_10(VAR_14);
  goto out_quota;
 }

 if (VAR_24)
  FUNC_17(VAR_24);
 if (VAR_25)
  FUNC_17(VAR_25);

success:
 if (VAR_10)
  *VAR_10 = VAR_20->w_target_page;
 *VAR_11 = VAR_20;
 return 0;
out_quota:
 if (VAR_17)
  FUNC_7(VAR_21,
     FUNC_14(VAR_22->sb, VAR_17));
out_commit:
 FUNC_15(VAR_22, VAR_26);

out:







 if (VAR_20->w_target_locked)
  FUNC_34(VAR_13);

 FUNC_18(VAR_21, VAR_20);

 if (VAR_24) {
  FUNC_17(VAR_24);
  VAR_24 = ((void*)0);
 }
 if (VAR_25) {
  FUNC_17(VAR_25);
  VAR_25 = ((void*)0);
 }

 if (VAR_14 == -VAR_1 && VAR_28) {




  VAR_28 = 0;

  VAR_29 = FUNC_29(VAR_22, VAR_19);
  if (VAR_29 == 1)
   goto try_again;

  if (VAR_29 < 0)
   FUNC_10(VAR_29);
 }

 return VAR_14;
}
