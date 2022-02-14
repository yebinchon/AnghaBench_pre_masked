
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct inode*) ;
 struct inode* FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct inode*) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_1, struct dentry *VAR_2)
{
 struct inode *VAR_3 = FUNC_2(VAR_2);
 int VAR_4;


 if (FUNC_0(VAR_3->i_mode) &&
     !FUNC_5(VAR_3))
  return -VAR_0;

 VAR_4 = FUNC_4(VAR_2);
 if (VAR_4)
  return VAR_4;

 FUNC_1(VAR_3);
 FUNC_3(VAR_3);
 FUNC_3(VAR_1);
 return 0;
}
