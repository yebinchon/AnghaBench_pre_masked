
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_ctime; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct dentry*,struct inode*) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct inode*,struct dentry*) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_2, struct dentry *VAR_3,
         struct inode *VAR_4, struct dentry *VAR_5,
         unsigned int VAR_6)
{
 struct inode *VAR_7 = FUNC_1(VAR_5);
 struct inode *VAR_8 = FUNC_1(VAR_3);
 int VAR_9;

 if (VAR_6 & ~VAR_1)
  return -VAR_0;

 if (VAR_7) {

  VAR_9 = FUNC_5(VAR_4, VAR_5);
  if (VAR_9)
   goto out;
 }



 VAR_9 = FUNC_4(VAR_3);
 if (VAR_9)
  goto out;

 FUNC_2(VAR_2);
 VAR_9 = FUNC_3(VAR_5, VAR_8);
 if (VAR_9)
  goto out;

 VAR_8->i_ctime = FUNC_0(VAR_8);
 FUNC_2(VAR_8);
out:
 return VAR_9;
}
