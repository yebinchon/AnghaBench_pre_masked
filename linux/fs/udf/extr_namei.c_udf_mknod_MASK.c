
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;
typedef int dev_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct dentry*,struct inode*) ;
 struct inode* FUNC_5 (struct inode*,int ) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_1, struct dentry *VAR_2, umode_t VAR_3,
       dev_t VAR_4)
{
 struct inode *VAR_5;

 if (!FUNC_3(VAR_4))
  return -VAR_0;

 VAR_5 = FUNC_5(VAR_1, VAR_3);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 FUNC_2(VAR_5, VAR_3, VAR_4);
 return FUNC_4(VAR_2, VAR_5);
}
