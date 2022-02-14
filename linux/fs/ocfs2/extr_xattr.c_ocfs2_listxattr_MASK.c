
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_inode_info {int ip_dyn_features; int ip_xattr_sem; } ;
struct ocfs2_dinode {int dummy; } ;
struct dentry {int d_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct ocfs2_inode_info* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,struct buffer_head**,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,struct ocfs2_dinode*,char*,size_t) ;
 int FUNC_10 (int ,struct ocfs2_dinode*,char*,size_t) ;
 int FUNC_11 (int *) ;

ssize_t FUNC_12(struct dentry *VAR_2,
   char *VAR_3,
   size_t VAR_4)
{
 int VAR_5 = 0, VAR_6 = 0, VAR_7 = 0;
 struct buffer_head *VAR_8 = ((void*)0);
 struct ocfs2_dinode *VAR_9 = ((void*)0);
 struct ocfs2_inode_info *VAR_10 = FUNC_0(FUNC_3(VAR_2));

 if (!FUNC_8(FUNC_1(VAR_2->d_sb)))
  return -VAR_0;

 if (!(VAR_10->ip_dyn_features & VAR_1))
  return VAR_5;

 VAR_5 = FUNC_6(FUNC_3(VAR_2), &VAR_8, 0);
 if (VAR_5 < 0) {
  FUNC_5(VAR_5);
  return VAR_5;
 }

 VAR_9 = (struct ocfs2_dinode *)VAR_8->b_data;

 FUNC_4(&VAR_10->ip_xattr_sem);
 VAR_6 = FUNC_10(FUNC_3(VAR_2), VAR_9, VAR_3, VAR_4);
 if (VAR_6 < 0)
  VAR_7 = 0;
 else {
  if (VAR_3) {
   VAR_3 += VAR_6;
   VAR_4 -= VAR_6;
  }
  VAR_7 = FUNC_9(FUNC_3(VAR_2), VAR_9,
            VAR_3, VAR_4);
  if (VAR_7 < 0)
   VAR_6 = 0;
 }
 FUNC_11(&VAR_10->ip_xattr_sem);
 FUNC_7(FUNC_3(VAR_2), 0);

 FUNC_2(VAR_8);

 return VAR_6 + VAR_7;
}
