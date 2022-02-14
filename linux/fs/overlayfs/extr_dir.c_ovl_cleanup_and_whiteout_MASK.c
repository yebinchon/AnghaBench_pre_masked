
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {struct inode* d_inode; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct inode*,struct dentry*) ;
 int FUNC_5 (struct inode*,struct dentry*,struct inode*,struct dentry*,int) ;
 struct dentry* FUNC_6 (struct dentry*) ;

int FUNC_7(struct dentry *VAR_1, struct inode *VAR_2,
        struct dentry *VAR_3)
{
 struct inode *VAR_4 = VAR_1->d_inode;
 struct dentry *VAR_5;
 int VAR_6;
 int VAR_7 = 0;

 VAR_5 = FUNC_6(VAR_1);
 VAR_6 = FUNC_1(VAR_5);
 if (FUNC_0(VAR_5))
  return VAR_6;

 if (FUNC_2(VAR_3))
  VAR_7 = VAR_0;

 VAR_6 = FUNC_5(VAR_4, VAR_5, VAR_2, VAR_3, VAR_7);
 if (VAR_6)
  goto kill_whiteout;
 if (VAR_7)
  FUNC_4(VAR_4, VAR_3);

out:
 FUNC_3(VAR_5);
 return VAR_6;

kill_whiteout:
 FUNC_4(VAR_4, VAR_5);
 goto out;
}
