
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int dummy; } ;
struct fscrypt_name {int dummy; } ;
struct f2fs_dir_entry {int dummy; } ;
struct f2fs_dentry_ptr {int dummy; } ;
struct f2fs_dentry_block {int dummy; } ;
typedef int f2fs_hash_t ;


 struct f2fs_dir_entry* FUNC_0 (struct fscrypt_name*,int ,int*,struct f2fs_dentry_ptr*) ;
 int FUNC_1 (struct inode*,struct f2fs_dentry_ptr*,struct f2fs_dentry_block*) ;
 scalar_t__ FUNC_2 (struct page*) ;

__attribute__((used)) static struct f2fs_dir_entry *FUNC_3(struct inode *VAR_0,
    struct page *VAR_1,
    struct fscrypt_name *VAR_2,
    f2fs_hash_t VAR_3,
    int *VAR_4,
    struct page **VAR_5)
{
 struct f2fs_dentry_block *VAR_6;
 struct f2fs_dir_entry *VAR_7;
 struct f2fs_dentry_ptr VAR_8;

 VAR_6 = (struct f2fs_dentry_block *)FUNC_2(VAR_1);

 FUNC_1(VAR_0, &VAR_8, VAR_6);
 VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4, &VAR_8);
 if (VAR_7)
  *VAR_5 = VAR_1;

 return VAR_7;
}
