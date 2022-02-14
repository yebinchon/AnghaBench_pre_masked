
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int len; scalar_t__ name; } ;
struct inode {int dummy; } ;
struct fscrypt_str {int len; scalar_t__ name; } ;
struct fscrypt_name {struct qstr* usr_fname; } ;
struct f2fs_sb_info {scalar_t__ s_encoding; } ;
struct f2fs_dir_entry {scalar_t__ hash_code; int name_len; } ;
struct f2fs_dentry_ptr {scalar_t__* filename; struct inode* inode; } ;
typedef scalar_t__ f2fs_hash_t ;


 struct f2fs_sb_info* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,struct qstr*,struct qstr*,int) ;
 scalar_t__ FUNC_3 (struct fscrypt_name*,scalar_t__,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static inline bool FUNC_5(struct f2fs_dentry_ptr *VAR_0,
     struct f2fs_dir_entry *VAR_1,
     struct fscrypt_name *VAR_2,
     struct fscrypt_str *VAR_3,
     unsigned long VAR_4,
     f2fs_hash_t VAR_5)
{






 if (VAR_1->hash_code != VAR_5)
  return 0;
 if (FUNC_3(VAR_2, VAR_0->filename[VAR_4],
    FUNC_4(VAR_1->name_len)))
  return 1;
 return 0;
}
