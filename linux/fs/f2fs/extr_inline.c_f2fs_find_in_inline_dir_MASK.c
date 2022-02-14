
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int dummy; } ;
struct page {int dummy; } ;
struct inode {int i_ino; int i_sb; } ;
struct fscrypt_name {int disk_name; } ;
struct f2fs_sb_info {int dummy; } ;
struct f2fs_dir_entry {int dummy; } ;
struct f2fs_dentry_ptr {int dummy; } ;
typedef int f2fs_hash_t ;


 struct f2fs_sb_info* FUNC_0 (int ) ;
 struct qstr FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (struct inode*,struct qstr*,struct fscrypt_name*) ;
 struct f2fs_dir_entry* FUNC_4 (struct fscrypt_name*,int ,int *,struct f2fs_dentry_ptr*) ;
 struct page* FUNC_5 (struct f2fs_sb_info*,int ) ;
 int FUNC_6 (struct page*,int ) ;
 void* FUNC_7 (struct inode*,struct page*) ;
 int FUNC_8 (struct inode*,struct f2fs_dentry_ptr*,void*) ;
 int FUNC_9 (struct page*) ;

struct f2fs_dir_entry *FUNC_10(struct inode *VAR_0,
   struct fscrypt_name *VAR_1, struct page **VAR_2)
{
 struct f2fs_sb_info *VAR_3 = FUNC_0(VAR_0->i_sb);
 struct qstr VAR_4 = FUNC_1(&VAR_1->disk_name);
 struct f2fs_dir_entry *VAR_5;
 struct f2fs_dentry_ptr VAR_6;
 struct page *VAR_7;
 void *VAR_8;
 f2fs_hash_t VAR_9;

 VAR_7 = FUNC_5(VAR_3, VAR_0->i_ino);
 if (FUNC_2(VAR_7)) {
  *VAR_2 = VAR_7;
  return ((void*)0);
 }

 VAR_9 = FUNC_3(VAR_0, &VAR_4, VAR_1);

 VAR_8 = FUNC_7(VAR_0, VAR_7);

 FUNC_8(VAR_0, &VAR_6, VAR_8);
 VAR_5 = FUNC_4(VAR_1, VAR_9, ((void*)0), &VAR_6);
 FUNC_9(VAR_7);
 if (VAR_5)
  *VAR_2 = VAR_7;
 else
  FUNC_6(VAR_7, 0);

 return VAR_5;
}
