
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct ocfs2_refcount_tree {int rf_ci; } ;
struct inode {int i_sb; int i_ino; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int *,struct buffer_head*,int ,int ,int*,int*) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int ,int ,struct ocfs2_refcount_tree**) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (int *,int ,struct buffer_head**) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int,int) ;

int FUNC_12(struct inode *VAR_0,
       u64 VAR_1,
       u64 VAR_2,
       u32 VAR_3,
       int *VAR_4,
       int *VAR_5)
{
 int VAR_6;
 struct buffer_head *VAR_7 = ((void*)0);
 struct ocfs2_refcount_tree *VAR_8;
 u64 VAR_9 = FUNC_4(VAR_0->i_sb, VAR_2);

 if (!FUNC_10(FUNC_1(VAR_0->i_sb))) {
  VAR_6 = FUNC_6(VAR_0->i_sb, "Inode %lu want to use refcount tree, but the feature bit is not set in the super block\n",
      VAR_0->i_ino);
  goto out;
 }

 FUNC_0(!FUNC_8(VAR_0));

 VAR_6 = FUNC_7(FUNC_1(VAR_0->i_sb),
          VAR_1, &VAR_8);
 if (VAR_6) {
  FUNC_3(VAR_6);
  goto out;
 }

 VAR_6 = FUNC_9(&VAR_8->rf_ci, VAR_1,
     &VAR_7);
 if (VAR_6) {
  FUNC_3(VAR_6);
  goto out;
 }

 VAR_6 = FUNC_5(VAR_0->i_sb,
            &VAR_8->rf_ci,
            VAR_7,
            VAR_9, VAR_3,
            VAR_5, VAR_4);
 if (VAR_6) {
  FUNC_3(VAR_6);
  goto out;
 }

 FUNC_11(*VAR_5, *VAR_4);

out:
 FUNC_2(VAR_7);
 return VAR_6;
}
