
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {struct inode* d_inode; } ;


 int VAR_0 ;
 int FUNC_0 (struct dentry*,char const*,void const*,size_t,int) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct dentry*,char const*,void const*,size_t,int) ;
 int FUNC_4 (struct inode*,char const*,int ) ;

int
FUNC_5(struct dentry *VAR_1, const char *VAR_2, const void *VAR_3,
  size_t VAR_4, int VAR_5)
{
 struct inode *VAR_6 = VAR_1->d_inode;
 int VAR_7;

 VAR_7 = FUNC_4(VAR_6, VAR_2, VAR_0);
 if (VAR_7)
  return VAR_7;

 FUNC_1(VAR_6);
 VAR_7 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_7)
  goto out;

 VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);

out:
 FUNC_2(VAR_6);
 return VAR_7;
}
