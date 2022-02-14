
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_ctime; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*,struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct dentry*,struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;

__attribute__((used)) static int FUNC_9 (struct dentry * VAR_0, struct inode * VAR_1,
 struct dentry *VAR_2)
{
 struct inode *VAR_3 = FUNC_1(VAR_0);
 int VAR_4;

 VAR_4 = FUNC_3(VAR_1);
 if (VAR_4)
  return VAR_4;

 VAR_3->i_ctime = FUNC_0(VAR_3);
 FUNC_7(VAR_3);
 FUNC_5(VAR_3);

 VAR_4 = FUNC_4(VAR_2, VAR_3);
 if (!VAR_4) {
  FUNC_2(VAR_2, VAR_3);
  return 0;
 }
 FUNC_6(VAR_3);
 FUNC_8(VAR_3);
 return VAR_4;
}
