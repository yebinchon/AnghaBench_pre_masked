
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct inode {int * i_fop; int * i_op; int i_sb; } ;
struct dentry {int dummy; } ;


 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int VAR_0 ;
 int FUNC_2 (struct dentry*,struct inode*,struct inode*) ;
 int VAR_1 ;
 struct inode* FUNC_3 (int ,struct inode*,int) ;
 int FUNC_4 (struct inode*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_3, struct dentry *VAR_4, umode_t VAR_5)
{
 struct inode *VAR_6;

 VAR_6 = FUNC_3(VAR_3->i_sb, VAR_3, VAR_5 | VAR_0);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 VAR_6->i_op = &VAR_1;
 VAR_6->i_fop = &VAR_2;

 FUNC_4(VAR_6);
 FUNC_4(VAR_3);

 FUNC_2(VAR_4, VAR_6, VAR_3);
 return 0;
}
