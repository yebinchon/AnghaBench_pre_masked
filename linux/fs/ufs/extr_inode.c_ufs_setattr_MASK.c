
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {scalar_t__ i_size; } ;
struct iattr {unsigned int ia_valid; scalar_t__ ia_size; } ;
struct dentry {int dummy; } ;


 unsigned int VAR_0 ;
 struct inode* FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,struct iattr*) ;
 int FUNC_3 (struct dentry*,struct iattr*) ;
 int FUNC_4 (struct inode*,scalar_t__) ;

int FUNC_5(struct dentry *VAR_1, struct iattr *VAR_2)
{
 struct inode *VAR_3 = FUNC_0(VAR_1);
 unsigned int VAR_4 = VAR_2->ia_valid;
 int VAR_5;

 VAR_5 = FUNC_3(VAR_1, VAR_2);
 if (VAR_5)
  return VAR_5;

 if (VAR_4 & VAR_0 && VAR_2->ia_size != VAR_3->i_size) {
  VAR_5 = FUNC_4(VAR_3, VAR_2->ia_size);
  if (VAR_5)
   return VAR_5;
 }

 FUNC_2(VAR_3, VAR_2);
 FUNC_1(VAR_3);
 return 0;
}
