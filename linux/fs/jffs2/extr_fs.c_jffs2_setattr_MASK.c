
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; } ;
struct iattr {int ia_valid; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 struct inode* FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct inode*,struct iattr*) ;
 int FUNC_2 (struct inode*,int ) ;
 int FUNC_3 (struct dentry*,struct iattr*) ;

int FUNC_4(struct dentry *VAR_1, struct iattr *VAR_2)
{
 struct inode *VAR_3 = FUNC_0(VAR_1);
 int VAR_4;

 VAR_4 = FUNC_3(VAR_1, VAR_2);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_1(VAR_3, VAR_2);
 if (!VAR_4 && (VAR_2->ia_valid & VAR_0))
  VAR_4 = FUNC_2(VAR_3, VAR_3->i_mode);

 return VAR_4;
}
