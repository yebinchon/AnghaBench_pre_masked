
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct ocfs2_xattr_value_buf {int (* vb_access ) (int *,int ,TYPE_5__*,int ) ;TYPE_5__* vb_bh; } ;
struct ocfs2_xattr_reflink {TYPE_5__* new_bh; int new_inode; TYPE_4__* old_bh; int ref_root_bh; TYPE_1__* old_inode; } ;
struct ocfs2_xattr_header {int dummy; } ;
struct ocfs2_super {TYPE_2__* sb; } ;
struct ocfs2_inode_info {int ip_dyn_features; int ip_lock; } ;
struct ocfs2_extent_rec {int dummy; } ;
struct ocfs2_extent_list {int l_count; } ;
struct TYPE_10__ {struct ocfs2_extent_list i_list; } ;
struct ocfs2_dinode {void* i_dyn_features; TYPE_3__ id2; void* i_xattr_inline_size; } ;
struct ocfs2_alloc_context {int dummy; } ;
typedef int handle_t ;
struct TYPE_12__ {scalar_t__ b_data; } ;
struct TYPE_11__ {scalar_t__ b_data; } ;
struct TYPE_9__ {int s_blocksize; } ;
struct TYPE_8__ {int i_sb; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 struct ocfs2_inode_info* FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ocfs2_super* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (scalar_t__,scalar_t__,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct ocfs2_super*,int *) ;
 int FUNC_11 (struct ocfs2_alloc_context*) ;
 int VAR_4 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *,int ,TYPE_5__*,int ) ;
 int FUNC_14 (int *,TYPE_5__*) ;
 int FUNC_15 (struct ocfs2_super*,struct ocfs2_xattr_header*,int ,int*,struct ocfs2_alloc_context**) ;
 int FUNC_16 (int *,struct ocfs2_xattr_reflink*,TYPE_4__*,struct ocfs2_xattr_header*,TYPE_5__*,struct ocfs2_xattr_header*,struct ocfs2_xattr_value_buf*,struct ocfs2_alloc_context*,int ,int *) ;
 int * FUNC_17 (struct ocfs2_super*,int) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;

__attribute__((used)) static int FUNC_20(struct ocfs2_xattr_reflink *VAR_5)
{
 int VAR_6 = 0, VAR_7 = 0;
 handle_t *VAR_8;
 struct ocfs2_super *VAR_9 = FUNC_3(VAR_5->old_inode->i_sb);
 struct ocfs2_dinode *VAR_10 = (struct ocfs2_dinode *)VAR_5->old_bh->b_data;
 int VAR_11 = FUNC_7(VAR_10->i_xattr_inline_size);
 int VAR_12 = VAR_9->sb->s_blocksize - VAR_11;
 struct ocfs2_xattr_header *VAR_13 = (struct ocfs2_xattr_header *)
     (VAR_5->old_bh->b_data + VAR_12);
 struct ocfs2_xattr_header *VAR_14 = (struct ocfs2_xattr_header *)
     (VAR_5->new_bh->b_data + VAR_12);
 struct ocfs2_alloc_context *VAR_15 = ((void*)0);
 struct ocfs2_inode_info *VAR_16;
 struct ocfs2_dinode *VAR_17;
 struct ocfs2_xattr_value_buf VAR_18 = {
  .vb_bh = VAR_5->new_bh,
  .vb_access = FUNC_13,
 };

 VAR_6 = FUNC_15(VAR_9, VAR_13, VAR_5->ref_root_bh,
        &VAR_7, &VAR_15);
 if (VAR_6) {
  FUNC_9(VAR_6);
  goto out;
 }

 VAR_8 = FUNC_17(VAR_9, VAR_7);
 if (FUNC_1(VAR_8)) {
  VAR_6 = FUNC_4(VAR_8);
  FUNC_9(VAR_6);
  goto out;
 }

 VAR_6 = FUNC_13(VAR_8, FUNC_0(VAR_5->new_inode),
          VAR_5->new_bh, VAR_3);
 if (VAR_6) {
  FUNC_9(VAR_6);
  goto out_commit;
 }

 FUNC_8(VAR_5->new_bh->b_data + VAR_12,
        VAR_5->old_bh->b_data + VAR_12, VAR_11);

 VAR_17 = (struct ocfs2_dinode *)VAR_5->new_bh->b_data;
 VAR_17->i_xattr_inline_size = FUNC_5(VAR_11);

 VAR_6 = FUNC_16(VAR_8, VAR_5, VAR_5->old_bh, VAR_13,
      VAR_5->new_bh, VAR_14, &VAR_18, VAR_15,
      VAR_4, ((void*)0));
 if (VAR_6) {
  FUNC_9(VAR_6);
  goto out_commit;
 }

 VAR_16 = FUNC_2(VAR_5->new_inode);




 if (!(VAR_16->ip_dyn_features & VAR_1) &&
     !(FUNC_12(VAR_5->new_inode))) {
  struct ocfs2_extent_list *VAR_19 = &VAR_17->id2.i_list;
  FUNC_6(&VAR_19->l_count, -(VAR_11 /
     sizeof(struct ocfs2_extent_rec)));
 }
 FUNC_18(&VAR_16->ip_lock);
 VAR_16->ip_dyn_features |= VAR_0 | VAR_2;
 VAR_17->i_dyn_features = FUNC_5(VAR_16->ip_dyn_features);
 FUNC_19(&VAR_16->ip_lock);

 FUNC_14(VAR_8, VAR_5->new_bh);

out_commit:
 FUNC_10(VAR_9, VAR_8);

out:
 if (VAR_15)
  FUNC_11(VAR_15);
 return VAR_6;
}
