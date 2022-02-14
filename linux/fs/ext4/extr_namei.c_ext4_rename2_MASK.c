
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_1 (struct inode*,struct dentry*,struct inode*,struct dentry*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct inode*,struct dentry*,struct inode*,struct dentry*,unsigned int) ;
 int FUNC_4 (struct inode*,struct dentry*,struct inode*,struct dentry*,unsigned int) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_5, struct dentry *VAR_6,
   struct inode *VAR_7, struct dentry *VAR_8,
   unsigned int VAR_9)
{
 int VAR_10;

 if (FUNC_5(FUNC_2(FUNC_0(VAR_5->i_sb))))
  return -VAR_1;

 if (VAR_9 & ~(VAR_3 | VAR_2 | VAR_4))
  return -VAR_0;

 VAR_10 = FUNC_4(VAR_5, VAR_6, VAR_7, VAR_8,
         VAR_9);
 if (VAR_10)
  return VAR_10;

 if (VAR_9 & VAR_2) {
  return FUNC_1(VAR_5, VAR_6,
      VAR_7, VAR_8);
 }

 return FUNC_3(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
}
