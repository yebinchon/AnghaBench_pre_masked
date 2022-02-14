
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {int d_sb; } ;
struct cred {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 struct inode* FUNC_1 (struct dentry*) ;
 scalar_t__ FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 scalar_t__ FUNC_7 (struct dentry*) ;
 struct cred* FUNC_8 (int ) ;
 int FUNC_9 (struct dentry*) ;
 int FUNC_10 (int ,struct inode*) ;
 int FUNC_11 (struct cred const*) ;

int FUNC_12(struct dentry *VAR_2)
{
 struct inode *VAR_3 = FUNC_1(VAR_2);
 const struct cred *VAR_4;
 int VAR_5;

 if (FUNC_0(!VAR_3))
  return -VAR_0;
 if (FUNC_7(VAR_2) && !FUNC_4(VAR_2)) {
  VAR_5 = FUNC_3(VAR_2);
  if (VAR_5)
   return VAR_5;
 }

 VAR_5 = FUNC_5(VAR_3);
 if (VAR_5)
  return VAR_5;

 if (FUNC_2(VAR_2) || !FUNC_10(VAR_1, VAR_3))
  goto out;

 VAR_4 = FUNC_8(VAR_2->d_sb);






 VAR_5 = FUNC_9(VAR_2);
 FUNC_11(VAR_4);

out:
 if (VAR_5)
  FUNC_6(VAR_3);

 return VAR_5;
}
