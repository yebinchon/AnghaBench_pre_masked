
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct qstr {int dummy; } ;
struct page {int dummy; } ;
struct inode {int dummy; } ;
struct fscrypt_name {int dummy; } ;
struct f2fs_dir_entry {int dummy; } ;
struct TYPE_3__ {int s_encoding; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct page* FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 struct f2fs_dir_entry* FUNC_3 (struct inode*,struct fscrypt_name*,struct page**) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct fscrypt_name*) ;
 int FUNC_6 (struct inode*,struct qstr const*,int,struct fscrypt_name*) ;
 scalar_t__ FUNC_7 (int ,struct qstr const*) ;

struct f2fs_dir_entry *FUNC_8(struct inode *VAR_2,
   const struct qstr *VAR_3, struct page **VAR_4)
{
 struct f2fs_dir_entry *VAR_5 = ((void*)0);
 struct fscrypt_name VAR_6;
 int VAR_7;
 VAR_7 = FUNC_6(VAR_2, VAR_3, 1, &VAR_6);
 if (VAR_7) {
  if (VAR_7 == -VAR_1)
   *VAR_4 = ((void*)0);
  else
   *VAR_4 = FUNC_0(VAR_7);
  return ((void*)0);
 }

 VAR_5 = FUNC_3(VAR_2, &VAR_6, VAR_4);

 FUNC_5(&VAR_6);
 return VAR_5;
}
