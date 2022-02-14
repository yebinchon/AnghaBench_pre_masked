
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_info {int dummy; } ;
struct inode {scalar_t__ i_size; int i_mode; int i_ino; TYPE_1__* i_sb; } ;
struct iattr {int ia_valid; scalar_t__ ia_size; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {struct ubifs_info* s_fs_info; } ;


 int VAR_0 ;
 struct inode* FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct ubifs_info*,struct inode*) ;
 int FUNC_2 (char*,int ,int ,int) ;
 int FUNC_3 (struct ubifs_info*,struct inode*,struct iattr*) ;
 int FUNC_4 (struct ubifs_info*,struct inode*,struct iattr*) ;
 int FUNC_5 (struct dentry*,struct iattr*) ;
 int FUNC_6 (struct dentry*,struct iattr*) ;

int FUNC_7(struct dentry *VAR_1, struct iattr *VAR_2)
{
 int VAR_3;
 struct inode *VAR_4 = FUNC_0(VAR_1);
 struct ubifs_info *VAR_5 = VAR_4->i_sb->s_fs_info;

 FUNC_2("ino %lu, mode %#x, ia_valid %#x",
  VAR_4->i_ino, VAR_4->i_mode, VAR_2->ia_valid);
 VAR_3 = FUNC_6(VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_1(VAR_5, VAR_4);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_5(VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;

 if ((VAR_2->ia_valid & VAR_0) && VAR_2->ia_size < VAR_4->i_size)

  VAR_3 = FUNC_4(VAR_5, VAR_4, VAR_2);
 else
  VAR_3 = FUNC_3(VAR_5, VAR_4, VAR_2);

 return VAR_3;
}
