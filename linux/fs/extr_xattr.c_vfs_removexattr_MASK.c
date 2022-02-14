
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {struct inode* d_inode; } ;


 int VAR_0 ;
 int FUNC_0 (struct dentry*,char const*) ;
 int FUNC_1 (struct dentry*,char const*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct dentry*,char const*) ;
 int FUNC_6 (struct inode*,char const*,int ) ;

int
FUNC_7(struct dentry *VAR_1, const char *VAR_2)
{
 struct inode *VAR_3 = VAR_1->d_inode;
 int VAR_4;

 VAR_4 = FUNC_6(VAR_3, VAR_2, VAR_0);
 if (VAR_4)
  return VAR_4;

 FUNC_3(VAR_3);
 VAR_4 = FUNC_5(VAR_1, VAR_2);
 if (VAR_4)
  goto out;

 VAR_4 = FUNC_0(VAR_1, VAR_2);

 if (!VAR_4) {
  FUNC_2(VAR_1);
  FUNC_1(VAR_1, VAR_2);
 }

out:
 FUNC_4(VAR_3);
 return VAR_4;
}
