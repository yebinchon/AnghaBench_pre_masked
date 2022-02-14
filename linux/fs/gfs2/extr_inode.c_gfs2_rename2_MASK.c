
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct inode*,struct dentry*,struct inode*,struct dentry*,unsigned int) ;
 int FUNC_1 (struct inode*,struct dentry*,struct inode*,struct dentry*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_3, struct dentry *VAR_4,
   struct inode *VAR_5, struct dentry *VAR_6,
   unsigned int VAR_7)
{
 VAR_7 &= ~VAR_2;

 if (VAR_7 & ~VAR_1)
  return -VAR_0;

 if (VAR_7 & VAR_1)
  return FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);

 return FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6);
}
