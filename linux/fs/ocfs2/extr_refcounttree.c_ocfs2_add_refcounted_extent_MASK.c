
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ocfs2_super {int sb; } ;
struct ocfs2_extent_tree {int dummy; } ;
struct ocfs2_caching_info {int dummy; } ;
struct ocfs2_cached_dealloc_ctxt {int dummy; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct inode {int i_sb; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;


 scalar_t__ FUNC_0 (int *) ;
 struct ocfs2_super* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct ocfs2_super*,int *) ;
 int FUNC_8 (struct ocfs2_alloc_context*) ;
 int FUNC_9 (int *,struct ocfs2_caching_info*,struct buffer_head*,int ,int ,struct ocfs2_alloc_context*,struct ocfs2_cached_dealloc_ctxt*) ;
 int FUNC_10 (int *,struct ocfs2_extent_tree*,int ,int ,int ,unsigned int,struct ocfs2_alloc_context*) ;
 int FUNC_11 (int ,int ,int ,struct ocfs2_extent_tree*,struct ocfs2_caching_info*,struct buffer_head*,struct ocfs2_alloc_context**,int *,int*) ;
 int * FUNC_12 (struct ocfs2_super*,int) ;

__attribute__((used)) static int FUNC_13(struct inode *VAR_0,
       struct ocfs2_extent_tree *VAR_1,
       struct ocfs2_caching_info *VAR_2,
       struct buffer_head *VAR_3,
       u32 VAR_4, u32 VAR_5, u32 VAR_6,
       unsigned int VAR_7,
       struct ocfs2_cached_dealloc_ctxt *VAR_8)
{
 int VAR_9;
 handle_t *VAR_10;
 int VAR_11 = 0;
 struct ocfs2_super *VAR_12 = FUNC_1(VAR_0->i_sb);
 struct ocfs2_alloc_context *VAR_13 = ((void*)0);

 VAR_9 = FUNC_11(VAR_0->i_sb,
          VAR_5, VAR_6,
          VAR_1, VAR_2,
          VAR_3, &VAR_13,
          ((void*)0), &VAR_11);
 if (VAR_9) {
  FUNC_4(VAR_9);
  goto out;
 }

 VAR_10 = FUNC_12(VAR_12, VAR_11);
 if (FUNC_0(VAR_10)) {
  VAR_9 = FUNC_2(VAR_10);
  FUNC_4(VAR_9);
  goto out;
 }

 VAR_9 = FUNC_10(VAR_10, VAR_1, VAR_4,
   FUNC_5(VAR_0->i_sb, VAR_5),
   VAR_6, VAR_7, VAR_13);
 if (VAR_9) {
  FUNC_4(VAR_9);
  goto out_commit;
 }

 VAR_9 = FUNC_9(VAR_10, VAR_2, VAR_3,
          VAR_5, VAR_6,
          VAR_13, VAR_8);
 if (VAR_9) {
  FUNC_4(VAR_9);
  goto out_commit;
 }

 VAR_9 = FUNC_3(VAR_0,
  FUNC_6(VAR_12->sb, VAR_6));
 if (VAR_9)
  FUNC_4(VAR_9);

out_commit:
 FUNC_7(VAR_12, VAR_10);
out:
 if (VAR_13)
  FUNC_8(VAR_13);
 return VAR_9;
}
