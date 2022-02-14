
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ocfs2_super {int dummy; } ;
struct ocfs2_dir_lookup_result {int dummy; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct inode {int i_sb; } ;
struct buffer_head {int dummy; } ;


 int VAR_0 ;
 struct ocfs2_super* FUNC_0 (int ) ;
 int FUNC_1 (struct inode*,struct buffer_head*,int ,char*,struct ocfs2_dir_lookup_result*,int) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct inode*,struct buffer_head*,struct ocfs2_alloc_context*,int *) ;
 int FUNC_7 (struct ocfs2_alloc_context*) ;
 int FUNC_8 (struct inode*,int) ;
 int FUNC_9 (struct ocfs2_super*,struct inode**,struct buffer_head**) ;
 int FUNC_10 (struct ocfs2_super*,struct ocfs2_alloc_context**) ;

__attribute__((used)) static int FUNC_11(struct inode *VAR_1,
     struct buffer_head *VAR_2,
     char *VAR_3,
     struct inode **VAR_4,
     u64 *VAR_5,
     struct ocfs2_dir_lookup_result *VAR_6,
     struct ocfs2_alloc_context **VAR_7)
{
 int VAR_8;
 u64 VAR_9;
 struct ocfs2_super *VAR_10 = FUNC_0(VAR_1->i_sb);
 struct inode *VAR_11 = ((void*)0);
 struct buffer_head *VAR_12 = ((void*)0);
 struct ocfs2_alloc_context *VAR_13 = ((void*)0);

 VAR_8 = FUNC_9(VAR_10, &VAR_11, &VAR_12);
 if (VAR_8 < 0) {
  FUNC_5(VAR_8);
  return VAR_8;
 }


 VAR_8 = FUNC_10(VAR_10, &VAR_13);
 if (VAR_8 < 0) {
  if (VAR_8 != -VAR_0)
   FUNC_5(VAR_8);
  goto out;
 }

 VAR_8 = FUNC_6(VAR_1, VAR_2, VAR_13,
           &VAR_9);
 if (VAR_8) {
  FUNC_5(VAR_8);
  goto out;
 }

 VAR_8 = FUNC_1(VAR_11, VAR_12,
      VAR_9, VAR_3, VAR_6,
      0);
 if (VAR_8 < 0) {
  FUNC_5(VAR_8);
  goto out;
 }

out:
 if (VAR_8 == 0) {
  *VAR_4 = VAR_11;
  *VAR_5 = VAR_9;
  *VAR_7 = VAR_13;




 } else {

  if (VAR_13)
   FUNC_7(VAR_13);


  FUNC_3(VAR_11);
  FUNC_8(VAR_11, 1);
  FUNC_4(VAR_11);
 }

 FUNC_2(VAR_12);

 return VAR_8;
}
