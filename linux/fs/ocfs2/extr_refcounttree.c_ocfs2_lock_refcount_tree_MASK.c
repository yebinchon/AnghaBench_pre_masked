
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ocfs2_super {int dummy; } ;
struct ocfs2_refcount_tree {scalar_t__ rf_generation; int rf_removed; int rf_blkno; int rf_ci; } ;
struct ocfs2_refcount_block {int rf_generation; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int FUNC_0 (struct ocfs2_super*,struct ocfs2_refcount_tree*,int) ;
 int FUNC_1 (struct buffer_head*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ocfs2_super*,struct ocfs2_refcount_tree*) ;
 int FUNC_5 (struct ocfs2_super*,int ,struct ocfs2_refcount_tree**) ;
 int FUNC_6 (int *,int ,struct buffer_head**) ;
 int FUNC_7 (struct ocfs2_refcount_tree*) ;
 int FUNC_8 (struct ocfs2_refcount_tree*) ;
 int FUNC_9 (struct ocfs2_super*,struct ocfs2_refcount_tree*,int) ;

int FUNC_10(struct ocfs2_super *VAR_0,
        u64 VAR_1, int VAR_2,
        struct ocfs2_refcount_tree **VAR_3,
        struct buffer_head **VAR_4)
{
 int VAR_5, VAR_6 = 0;
 struct ocfs2_refcount_tree *VAR_7 = ((void*)0);
 struct buffer_head *VAR_8 = ((void*)0);
 struct ocfs2_refcount_block *VAR_9;

again:
 VAR_5 = FUNC_5(VAR_0, VAR_1, &VAR_7);
 if (VAR_5) {
  FUNC_3(VAR_5);
  return VAR_5;
 }

 FUNC_7(VAR_7);

 VAR_5 = FUNC_0(VAR_0, VAR_7, VAR_2);
 if (VAR_5) {
  FUNC_3(VAR_5);
  FUNC_8(VAR_7);
  goto out;
 }

 VAR_5 = FUNC_6(&VAR_7->rf_ci, VAR_7->rf_blkno,
     &VAR_8);
 if (VAR_5) {
  FUNC_3(VAR_5);
  FUNC_9(VAR_0, VAR_7, VAR_2);
  goto out;
 }

 VAR_9 = (struct ocfs2_refcount_block *)VAR_8->b_data;
 if (VAR_7->rf_generation != FUNC_2(VAR_9->rf_generation)) {
  if (!VAR_7->rf_removed) {
   FUNC_4(VAR_0, VAR_7);
   VAR_7->rf_removed = 1;
   VAR_6 = 1;
  }

  FUNC_9(VAR_0, VAR_7, VAR_2);




  if (VAR_6)
   FUNC_8(VAR_7);
  FUNC_1(VAR_8);
  VAR_8 = ((void*)0);
  goto again;
 }

 *VAR_3 = VAR_7;
 if (VAR_4) {
  *VAR_4 = VAR_8;
  VAR_8 = ((void*)0);
 }
out:
 FUNC_1(VAR_8);
 return VAR_5;
}
