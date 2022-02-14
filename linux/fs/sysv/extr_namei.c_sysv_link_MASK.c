
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_ctime; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (struct dentry*,struct inode*) ;
 int FUNC_1 (struct inode*) ;
 struct inode* FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;

__attribute__((used)) static int FUNC_5(struct dentry * VAR_0, struct inode * VAR_1,
 struct dentry * VAR_2)
{
 struct inode *VAR_3 = FUNC_2(VAR_0);

 VAR_3->i_ctime = FUNC_1(VAR_3);
 FUNC_4(VAR_3);
 FUNC_3(VAR_3);

 return FUNC_0(VAR_2, VAR_3);
}
