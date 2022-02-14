
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct ocfs2_extent_list {int dummy; } ;
struct ocfs2_xattr_tree_root {struct ocfs2_extent_list xt_list; } ;
struct ocfs2_xattr_set_ctxt {int handle; } ;
struct ocfs2_xattr_bucket {int dummy; } ;
struct TYPE_4__ {struct ocfs2_xattr_tree_root xb_root; } ;
struct ocfs2_xattr_block {TYPE_1__ xb_attrs; } ;
struct ocfs2_super {int dummy; } ;
struct inode {int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_6__ {int xh_num_buckets; TYPE_2__* xh_entries; } ;
struct TYPE_5__ {int xe_name_hash; } ;


 int VAR_0 ;
 struct ocfs2_super* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct ocfs2_xattr_bucket*) ;
 TYPE_3__* FUNC_2 (struct ocfs2_xattr_bucket*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct inode*,struct buffer_head*,struct ocfs2_xattr_bucket*,struct ocfs2_xattr_bucket*,int*,int,int*,struct ocfs2_xattr_set_ctxt*) ;
 int FUNC_7 (struct inode*,int ,struct ocfs2_xattr_bucket*,scalar_t__,int) ;
 int FUNC_8 (struct ocfs2_xattr_bucket*,int ) ;
 int FUNC_9 (struct ocfs2_xattr_bucket*) ;
 struct ocfs2_xattr_bucket* FUNC_10 (struct inode*) ;
 int FUNC_11 (struct ocfs2_super*) ;
 int FUNC_12 (struct inode*,int,int *,int*,int*,struct ocfs2_extent_list*) ;
 int FUNC_13 (unsigned long long) ;

__attribute__((used)) static int FUNC_14(struct inode *VAR_1,
          struct buffer_head *VAR_2,
          struct ocfs2_xattr_bucket *VAR_3,
          struct ocfs2_xattr_set_ctxt *VAR_4)
{
 struct ocfs2_xattr_block *VAR_5 =
   (struct ocfs2_xattr_block *)VAR_2->b_data;
 struct ocfs2_xattr_tree_root *VAR_6 = &VAR_5->xb_attrs.xb_root;
 struct ocfs2_extent_list *VAR_7 = &VAR_6->xt_list;
 u32 VAR_8 =
  FUNC_4(FUNC_2(VAR_3)->xh_entries[0].xe_name_hash);
 struct ocfs2_super *VAR_9 = FUNC_0(VAR_1->i_sb);
 int VAR_10, VAR_11, VAR_12 = 1;
 u64 VAR_13;
 u32 VAR_14, VAR_15;

 struct ocfs2_xattr_bucket *VAR_16;

 FUNC_13(
    (unsigned long long)FUNC_1(VAR_3));


 VAR_16 = FUNC_10(VAR_1);
 if (!VAR_16) {
  VAR_10 = -VAR_0;
  FUNC_5(VAR_10);
  goto out;
 }

 VAR_10 = FUNC_12(VAR_1, VAR_8, &VAR_13, &VAR_14,
      &VAR_15, VAR_7);
 if (VAR_10) {
  FUNC_5(VAR_10);
  goto out;
 }

 VAR_10 = FUNC_8(VAR_16, VAR_13);
 if (VAR_10) {
  FUNC_5(VAR_10);
  goto out;
 }

 VAR_11 = FUNC_11(VAR_9) * VAR_15;
 if (VAR_11 == FUNC_3(FUNC_2(VAR_16)->xh_num_buckets)) {




  VAR_10 = FUNC_6(VAR_1,
        VAR_2,
        VAR_16,
        VAR_3,
        &VAR_15,
        VAR_14,
        &VAR_12,
        VAR_4);
  if (VAR_10) {
   FUNC_5(VAR_10);
   goto out;
  }
 }

 if (VAR_12) {
  VAR_10 = FUNC_7(VAR_1,
      VAR_4->handle,
      VAR_16,
      FUNC_1(VAR_3),
      VAR_15);
  if (VAR_10)
   FUNC_5(VAR_10);
 }

out:
 FUNC_9(VAR_16);

 return VAR_10;
}
