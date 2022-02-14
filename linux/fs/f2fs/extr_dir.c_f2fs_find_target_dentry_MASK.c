
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fscrypt_str {int * name; int len; } ;
struct fscrypt_name {int usr_fname; } ;
struct f2fs_dir_entry {int name_len; } ;
struct f2fs_dentry_ptr {unsigned long max; struct f2fs_dir_entry* dentry; int bitmap; int inode; } ;
typedef int f2fs_hash_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,struct fscrypt_str*) ;
 scalar_t__ FUNC_2 (struct f2fs_dentry_ptr*,struct f2fs_dir_entry*,struct fscrypt_name*,struct fscrypt_str*,unsigned long,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (unsigned long,int ) ;
 scalar_t__ FUNC_6 (int) ;

struct f2fs_dir_entry *FUNC_7(struct fscrypt_name *VAR_0,
   f2fs_hash_t VAR_1, int *VAR_2,
   struct f2fs_dentry_ptr *VAR_3)
{
 struct f2fs_dir_entry *VAR_4;
 struct fscrypt_str VAR_5 = { .name = ((void*)0), .len = 0 };
 unsigned long VAR_6 = 0;
 int VAR_7 = 0;





 if (VAR_2)
  *VAR_2 = 0;
 while (VAR_6 < VAR_3->max) {
  if (!FUNC_5(VAR_6, VAR_3->bitmap)) {
   VAR_6++;
   VAR_7++;
   continue;
  }

  VAR_4 = &VAR_3->dentry[VAR_6];

  if (FUNC_6(!VAR_4->name_len)) {
   VAR_6++;
   continue;
  }

  if (FUNC_2(VAR_3, VAR_4, VAR_0, &VAR_5, VAR_6, VAR_1))
   goto found;

  if (VAR_2 && VAR_7 > *VAR_2)
   *VAR_2 = VAR_7;
  VAR_7 = 0;

  VAR_6 += FUNC_0(FUNC_4(VAR_4->name_len));
 }

 VAR_4 = ((void*)0);
found:
 if (VAR_2 && VAR_7 > *VAR_2)
  *VAR_2 = VAR_7;




 return VAR_4;
}
