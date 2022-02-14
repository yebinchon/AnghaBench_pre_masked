
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ocfs2_dinode {int i_refcount_loc; } ;
struct inode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*,struct buffer_head**) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_0, u64 *VAR_1)
{
 int VAR_2;
 struct buffer_head *VAR_3 = ((void*)0);
 struct ocfs2_dinode *VAR_4;

 VAR_2 = FUNC_5(VAR_0, &VAR_3);
 if (VAR_2) {
  FUNC_3(VAR_2);
  goto out;
 }

 FUNC_0(!FUNC_4(VAR_0));

 VAR_4 = (struct ocfs2_dinode *)VAR_3->b_data;
 *VAR_1 = FUNC_2(VAR_4->i_refcount_loc);
 FUNC_1(VAR_3);
out:
 return VAR_2;
}
