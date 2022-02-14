
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct inode*,struct dentry*,struct inode*,struct dentry*) ;
 int FUNC_1 (struct inode*,struct dentry*,struct inode*,struct dentry*,unsigned int) ;
 int FUNC_2 (struct inode*,struct dentry*,struct inode*,struct dentry*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_4, struct dentry *VAR_5,
   struct inode *VAR_6, struct dentry *VAR_7,
   unsigned int VAR_8)
{
 int VAR_9;

 if (VAR_8 & ~(VAR_2 | VAR_1 | VAR_3))
  return -VAR_0;

 VAR_9 = FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7,
         VAR_8);
 if (VAR_9)
  return VAR_9;

 if (VAR_8 & VAR_1) {
  return FUNC_0(VAR_4, VAR_5,
      VAR_6, VAR_7);
 }




 return FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
}
