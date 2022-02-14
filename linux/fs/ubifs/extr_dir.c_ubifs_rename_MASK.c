
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_info {int dummy; } ;
struct inode {TYPE_1__* i_sb; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {struct ubifs_info* s_fs_info; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct inode*,struct dentry*,struct inode*,struct dentry*,unsigned int) ;
 int FUNC_1 (struct inode*,struct dentry*,struct inode*,struct dentry*,unsigned int) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct ubifs_info*,int ) ;
 int FUNC_4 (struct inode*,struct dentry*,struct inode*,struct dentry*) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_4, struct dentry *VAR_5,
   struct inode *VAR_6, struct dentry *VAR_7,
   unsigned int VAR_8)
{
 int VAR_9;
 struct ubifs_info *VAR_10 = VAR_4->i_sb->s_fs_info;

 if (VAR_8 & ~(VAR_2 | VAR_3 | VAR_1))
  return -VAR_0;

 FUNC_3(VAR_10, FUNC_2(VAR_4));
 FUNC_3(VAR_10, FUNC_2(VAR_6));

 VAR_9 = FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7,
         VAR_8);
 if (VAR_9)
  return VAR_9;

 if (VAR_8 & VAR_1)
  return FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7);

 return FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
}
