
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_xattr_set_ctxt {int dealloc; scalar_t__ meta_ac; scalar_t__ data_ac; int handle; int * member_2; int * member_1; int * member_0; } ;
struct ocfs2_xattr_search {int not_found; int bucket; struct buffer_head* xattr_bh; struct buffer_head* inode_bh; } ;
struct ocfs2_xattr_info {int xi_name_index; char const* xi_name; void const* xi_value; size_t xi_value_len; int xi_name_len; } ;
struct ocfs2_super {struct inode* osb_tl_inode; } ;
struct ocfs2_refcount_tree {int dummy; } ;
struct ocfs2_lock_holder {int dummy; } ;
struct ocfs2_dinode {int dummy; } ;
struct inode {int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_2__ {int ip_xattr_sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 scalar_t__ VAR_4 ;
 struct ocfs2_super* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct ocfs2_super*) ;
 int FUNC_5 (struct inode*,struct ocfs2_dinode*,struct ocfs2_xattr_info*,struct ocfs2_xattr_search*,struct ocfs2_xattr_search*,struct ocfs2_xattr_set_ctxt*) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (int) ;
 int FUNC_11 (struct ocfs2_super*,int ) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (struct inode*,struct ocfs2_dinode*,struct ocfs2_xattr_info*,struct ocfs2_xattr_search*,struct ocfs2_xattr_search*,struct ocfs2_xattr_set_ctxt*,int,int*) ;
 int FUNC_15 (struct inode*,struct buffer_head**,int,struct ocfs2_lock_holder*) ;
 int FUNC_16 (struct inode*,int,struct ocfs2_lock_holder*,int) ;
 scalar_t__ FUNC_17 (struct inode*) ;
 int FUNC_18 (struct inode*,struct ocfs2_dinode*,struct ocfs2_xattr_info*,struct ocfs2_xattr_search*,struct ocfs2_xattr_search*,struct ocfs2_refcount_tree**,int*,int*) ;
 int FUNC_19 (struct ocfs2_super*,int *) ;
 int FUNC_20 (struct ocfs2_super*,int) ;
 int FUNC_21 (struct ocfs2_super*,int) ;
 int FUNC_22 (struct ocfs2_super*) ;
 scalar_t__ FUNC_23 (struct ocfs2_super*) ;
 int FUNC_24 (struct inode*,struct buffer_head*) ;
 int FUNC_25 (struct ocfs2_super*,struct ocfs2_refcount_tree*,int) ;
 int FUNC_26 (int ,struct inode*,int ) ;
 int FUNC_27 (struct inode*,int,char const*,struct ocfs2_xattr_search*) ;
 int FUNC_28 (int ) ;
 int FUNC_29 (struct inode*) ;
 int FUNC_30 (struct inode*,int,char const*,struct ocfs2_xattr_search*) ;
 int FUNC_31 (char const*) ;
 int FUNC_32 (int *) ;

int FUNC_33(struct inode *VAR_7,
      int VAR_8,
      const char *VAR_9,
      const void *VAR_10,
      size_t VAR_11,
      int VAR_12)
{
 struct buffer_head *VAR_13 = ((void*)0);
 struct ocfs2_dinode *VAR_14;
 int VAR_15, VAR_16, VAR_17, VAR_18 = 0, VAR_19 = 0;
 struct ocfs2_super *VAR_20 = FUNC_2(VAR_7->i_sb);
 struct inode *VAR_21 = VAR_20->osb_tl_inode;
 struct ocfs2_xattr_set_ctxt VAR_22 = { ((void*)0), ((void*)0), ((void*)0), };
 struct ocfs2_refcount_tree *VAR_23 = ((void*)0);
 struct ocfs2_lock_holder VAR_24;

 struct ocfs2_xattr_info VAR_25 = {
  .xi_name_index = VAR_8,
  .xi_name = VAR_9,
  .xi_name_len = FUNC_31(VAR_9),
  .xi_value = VAR_10,
  .xi_value_len = VAR_11,
 };

 struct ocfs2_xattr_search VAR_26 = {
  .not_found = -VAR_1,
 };

 struct ocfs2_xattr_search VAR_27 = {
  .not_found = -VAR_1,
 };

 if (!FUNC_22(VAR_20))
  return -VAR_3;





 VAR_27.bucket = FUNC_29(VAR_7);
 if (!VAR_27.bucket) {
  FUNC_10(-VAR_2);
  return -VAR_2;
 }

 VAR_17 = FUNC_15(VAR_7, &VAR_13, 1, &VAR_24);
 if (VAR_17 < 0) {
  VAR_15 = VAR_17;
  FUNC_10(VAR_15);
  goto cleanup_nolock;
 }
 VAR_26.inode_bh = VAR_27.inode_bh = VAR_13;
 VAR_14 = (struct ocfs2_dinode *)VAR_13->b_data;

 FUNC_7(&FUNC_1(VAR_7)->ip_xattr_sem);




 VAR_15 = FUNC_30(VAR_7, VAR_8, VAR_9, &VAR_26);
 if (VAR_15)
  goto cleanup;
 if (VAR_26.not_found) {
  VAR_15 = FUNC_27(VAR_7, VAR_8, VAR_9, &VAR_27);
  if (VAR_15)
   goto cleanup;
 }

 if (VAR_26.not_found && VAR_27.not_found) {
  VAR_15 = -VAR_1;
  if (VAR_12 & VAR_6)
   goto cleanup;
  VAR_15 = 0;
  if (!VAR_10)
   goto cleanup;
 } else {
  VAR_15 = -VAR_0;
  if (VAR_12 & VAR_5)
   goto cleanup;
 }


 if (FUNC_17(VAR_7) &&
     (!VAR_26.not_found || !VAR_27.not_found)) {
  VAR_15 = FUNC_18(VAR_7, VAR_14, &VAR_25,
         &VAR_26, &VAR_27, &VAR_23,
         &VAR_18, &VAR_19);
  if (VAR_15) {
   FUNC_10(VAR_15);
   goto cleanup;
  }
 }

 FUNC_8(VAR_21);

 if (FUNC_23(VAR_20)) {
  VAR_15 = FUNC_4(VAR_20);
  if (VAR_15 < 0) {
   FUNC_9(VAR_21);
   FUNC_10(VAR_15);
   goto cleanup;
  }
 }
 FUNC_9(VAR_21);

 VAR_15 = FUNC_14(VAR_7, VAR_14, &VAR_25, &VAR_26,
     &VAR_27, &VAR_22, VAR_18, &VAR_16);
 if (VAR_15) {
  FUNC_10(VAR_15);
  goto cleanup;
 }


 VAR_16 += VAR_4;
 VAR_22.handle = FUNC_21(VAR_20, VAR_16 + VAR_19);
 if (FUNC_0(VAR_22.handle)) {
  VAR_15 = FUNC_3(VAR_22.handle);
  FUNC_10(VAR_15);
  goto out_free_ac;
 }

 VAR_15 = FUNC_5(VAR_7, VAR_14, &VAR_25, &VAR_26, &VAR_27, &VAR_22);
 FUNC_26(VAR_22.handle, VAR_7, 0);

 FUNC_11(VAR_20, VAR_22.handle);

out_free_ac:
 if (VAR_22.data_ac)
  FUNC_13(VAR_22.data_ac);
 if (VAR_22.meta_ac)
  FUNC_13(VAR_22.meta_ac);
 if (FUNC_12(&VAR_22.dealloc))
  FUNC_20(VAR_20, 1);
 FUNC_19(VAR_20, &VAR_22.dealloc);

cleanup:
 if (VAR_23)
  FUNC_25(VAR_20, VAR_23, 1);
 FUNC_32(&FUNC_1(VAR_7)->ip_xattr_sem);
 if (!VAR_10 && !VAR_15) {
  VAR_15 = FUNC_24(VAR_7, VAR_13);
  if (VAR_15)
   FUNC_10(VAR_15);
 }
 FUNC_16(VAR_7, 1, &VAR_24, VAR_17);
cleanup_nolock:
 FUNC_6(VAR_13);
 FUNC_6(VAR_27.xattr_bh);
 FUNC_28(VAR_27.bucket);

 return VAR_15;
}
