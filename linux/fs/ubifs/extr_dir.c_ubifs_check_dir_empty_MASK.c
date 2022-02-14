
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ubifs_key {int dummy; } ubifs_key ;
struct ubifs_info {int dummy; } ;
struct ubifs_dent_node {int dummy; } ;
struct inode {int i_ino; TYPE_1__* i_sb; } ;
struct fscrypt_name {int member_0; } ;
struct TYPE_2__ {struct ubifs_info* s_fs_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ubifs_dent_node*) ;
 int FUNC_1 (struct ubifs_dent_node*) ;
 int FUNC_2 (struct ubifs_dent_node*) ;
 int FUNC_3 (struct ubifs_info*,union ubifs_key*,int ) ;
 struct ubifs_dent_node* FUNC_4 (struct ubifs_info*,union ubifs_key*,struct fscrypt_name*) ;

int FUNC_5(struct inode *VAR_2)
{
 struct ubifs_info *VAR_3 = VAR_2->i_sb->s_fs_info;
 struct fscrypt_name VAR_4 = { 0 };
 struct ubifs_dent_node *VAR_5;
 union ubifs_key VAR_6;
 int VAR_7;

 FUNC_3(VAR_3, &VAR_6, VAR_2->i_ino);
 VAR_5 = FUNC_4(VAR_3, &VAR_6, &VAR_4);
 if (FUNC_0(VAR_5)) {
  VAR_7 = FUNC_1(VAR_5);
  if (VAR_7 == -VAR_0)
   VAR_7 = 0;
 } else {
  FUNC_2(VAR_5);
  VAR_7 = -VAR_1;
 }
 return VAR_7;
}
