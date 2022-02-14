
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct iattr {int ia_valid; scalar_t__ ia_size; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 struct inode* FUNC_0 (struct dentry*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,scalar_t__) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*,struct iattr*) ;
 int FUNC_5 (struct dentry*,struct iattr*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct dentry *VAR_1, struct iattr *VAR_2)
{
 struct inode *VAR_3 = FUNC_0(VAR_1);
 int VAR_4;

 VAR_4 = FUNC_5(VAR_1, VAR_2);
 if (VAR_4)
  return VAR_4;

 if ((VAR_2->ia_valid & VAR_0) &&
     VAR_2->ia_size != FUNC_1(VAR_3)) {
  VAR_4 = FUNC_2(VAR_3, VAR_2->ia_size);
  if (VAR_4)
   return VAR_4;
  FUNC_7(VAR_3, VAR_2->ia_size);
  FUNC_6(VAR_3);
 }

 FUNC_4(VAR_3, VAR_2);
 FUNC_3(VAR_3);
 return 0;
}
