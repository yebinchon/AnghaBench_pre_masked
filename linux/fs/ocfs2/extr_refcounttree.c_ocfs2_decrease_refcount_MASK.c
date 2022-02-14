
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct ocfs2_refcount_tree {int rf_ci; int rf_blkno; } ;
struct ocfs2_cached_dealloc_ctxt {int dummy; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct inode {int i_sb; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,struct buffer_head*,int ,int ,struct ocfs2_alloc_context*,struct ocfs2_cached_dealloc_ctxt*,int) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct inode*,int *) ;
 int FUNC_6 (int ,int ,struct ocfs2_refcount_tree**) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (int *,int ,struct buffer_head**) ;

int FUNC_9(struct inode *VAR_0,
       handle_t *VAR_1, u32 VAR_2, u32 VAR_3,
       struct ocfs2_alloc_context *VAR_4,
       struct ocfs2_cached_dealloc_ctxt *VAR_5,
       int VAR_6)
{
 int VAR_7;
 u64 VAR_8;
 struct buffer_head *VAR_9 = ((void*)0);
 struct ocfs2_refcount_tree *VAR_10;

 FUNC_0(!FUNC_7(VAR_0));

 VAR_7 = FUNC_5(VAR_0, &VAR_8);
 if (VAR_7) {
  FUNC_4(VAR_7);
  goto out;
 }

 VAR_7 = FUNC_6(FUNC_1(VAR_0->i_sb), VAR_8, &VAR_10);
 if (VAR_7) {
  FUNC_4(VAR_7);
  goto out;
 }

 VAR_7 = FUNC_8(&VAR_10->rf_ci, VAR_10->rf_blkno,
     &VAR_9);
 if (VAR_7) {
  FUNC_4(VAR_7);
  goto out;
 }

 VAR_7 = FUNC_2(VAR_1, &VAR_10->rf_ci, VAR_9,
     VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_7)
  FUNC_4(VAR_7);
out:
 FUNC_3(VAR_9);
 return VAR_7;
}
