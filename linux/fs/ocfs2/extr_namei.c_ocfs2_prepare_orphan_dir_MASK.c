
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ocfs2_super {int dummy; } ;
struct ocfs2_dir_lookup_result {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (struct inode*,struct buffer_head*,int ,char*,struct ocfs2_dir_lookup_result*,int) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct inode*,int) ;
 int FUNC_6 (struct ocfs2_super*,struct inode**,struct buffer_head**) ;

__attribute__((used)) static int FUNC_7(struct ocfs2_super *VAR_0,
        struct inode **VAR_1,
        u64 VAR_2,
        char *VAR_3,
        struct ocfs2_dir_lookup_result *VAR_4,
        bool VAR_5)
{
 struct inode *VAR_6 = ((void*)0);
 struct buffer_head *VAR_7 = ((void*)0);
 int VAR_8 = 0;

 VAR_8 = FUNC_6(VAR_0, &VAR_6,
        &VAR_7);
 if (VAR_8 < 0) {
  FUNC_4(VAR_8);
  return VAR_8;
 }

 VAR_8 = FUNC_0(VAR_6, VAR_7,
      VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_8 < 0) {
  FUNC_4(VAR_8);
  goto out;
 }

 *VAR_1 = VAR_6;

out:
 FUNC_1(VAR_7);

 if (VAR_8) {
  FUNC_5(VAR_6, 1);
  FUNC_2(VAR_6);
  FUNC_3(VAR_6);
 }

 if (VAR_8)
  FUNC_4(VAR_8);
 return VAR_8;
}
