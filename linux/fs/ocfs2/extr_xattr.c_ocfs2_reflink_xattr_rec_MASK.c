
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct ocfs2_super {int dummy; } ;
struct ocfs2_reflink_xattr_tree_args {int new_blk_bh; TYPE_1__* reflink; } ;
struct ocfs2_extent_tree {int dummy; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct inode {int i_sb; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;
struct TYPE_2__ {int new_inode; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 struct ocfs2_super* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct ocfs2_super*,int *) ;
 int FUNC_6 (struct ocfs2_alloc_context*) ;
 int FUNC_7 (struct ocfs2_extent_tree*,int ,int ) ;
 int FUNC_8 (struct ocfs2_reflink_xattr_tree_args*,struct ocfs2_extent_tree*,scalar_t__,int ,int*,struct ocfs2_alloc_context**,struct ocfs2_alloc_context**) ;
 int FUNC_9 (int *,struct inode*,struct ocfs2_reflink_xattr_tree_args*,struct ocfs2_extent_tree*,struct ocfs2_alloc_context*,struct ocfs2_alloc_context*,scalar_t__,int ,int ) ;
 int * FUNC_10 (struct ocfs2_super*,int) ;
 int FUNC_11 (unsigned long long,int ) ;

__attribute__((used)) static int FUNC_12(struct inode *VAR_0,
       struct buffer_head *VAR_1,
       u64 VAR_2,
       u32 VAR_3,
       u32 VAR_4,
       void *VAR_5)
{
 int VAR_6, VAR_7 = 0;
 handle_t *VAR_8;
 struct ocfs2_reflink_xattr_tree_args *VAR_9 =
   (struct ocfs2_reflink_xattr_tree_args *)VAR_5;
 struct ocfs2_super *VAR_10 = FUNC_2(VAR_0->i_sb);
 struct ocfs2_alloc_context *VAR_11 = ((void*)0);
 struct ocfs2_alloc_context *VAR_12 = ((void*)0);
 struct ocfs2_extent_tree VAR_13;

 FUNC_11((unsigned long long)VAR_2, VAR_4);

 FUNC_7(&VAR_13,
       FUNC_0(VAR_9->reflink->new_inode),
       VAR_9->new_blk_bh);

 VAR_6 = FUNC_8(VAR_9, &VAR_13, VAR_2,
            VAR_4, &VAR_7,
            &VAR_11, &VAR_12);
 if (VAR_6) {
  FUNC_4(VAR_6);
  goto out;
 }

 VAR_8 = FUNC_10(VAR_10, VAR_7);
 if (FUNC_1(VAR_8)) {
  VAR_6 = FUNC_3(VAR_8);
  FUNC_4(VAR_6);
  goto out;
 }

 VAR_6 = FUNC_9(VAR_8, VAR_0, VAR_9, &VAR_13,
       VAR_11, VAR_12,
       VAR_2, VAR_3, VAR_4);
 if (VAR_6)
  FUNC_4(VAR_6);

 FUNC_5(VAR_10, VAR_8);

out:
 if (VAR_11)
  FUNC_6(VAR_11);
 if (VAR_12)
  FUNC_6(VAR_12);
 return VAR_6;
}
