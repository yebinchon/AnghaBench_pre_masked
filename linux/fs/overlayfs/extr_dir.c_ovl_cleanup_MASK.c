
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct inode*,struct dentry*) ;
 int FUNC_4 (struct inode*,struct dentry*) ;
 int FUNC_5 (char*,struct dentry*,int) ;

int FUNC_6(struct inode *VAR_0, struct dentry *VAR_1)
{
 int VAR_2;

 FUNC_1(VAR_1);
 if (FUNC_0(VAR_1))
  VAR_2 = FUNC_3(VAR_0, VAR_1);
 else
  VAR_2 = FUNC_4(VAR_0, VAR_1);
 FUNC_2(VAR_1);

 if (VAR_2) {
  FUNC_5("overlayfs: cleanup of '%pd2' failed (%i)\n",
         VAR_1, VAR_2);
 }

 return VAR_2;
}
