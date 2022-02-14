
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct qstr {int len; int name; } ;
struct f2fs_dir_entry {scalar_t__ name_len; int ino; int hash_code; } ;
struct f2fs_dentry_ptr {scalar_t__ bitmap; int * filename; struct f2fs_dir_entry* dentry; } ;
typedef int nid_t ;
typedef int f2fs_hash_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,void*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct f2fs_dir_entry*,int ) ;

void FUNC_6(nid_t VAR_0, umode_t VAR_1, struct f2fs_dentry_ptr *VAR_2,
    const struct qstr *VAR_3, f2fs_hash_t VAR_4,
    unsigned int VAR_5)
{
 struct f2fs_dir_entry *VAR_6;
 int VAR_7 = FUNC_0(VAR_3->len);
 int VAR_8;

 VAR_6 = &VAR_2->dentry[VAR_5];
 VAR_6->hash_code = VAR_4;
 VAR_6->name_len = FUNC_2(VAR_3->len);
 FUNC_4(VAR_2->filename[VAR_5], VAR_3->name, VAR_3->len);
 VAR_6->ino = FUNC_3(VAR_0);
 FUNC_5(VAR_6, VAR_1);
 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  FUNC_1(VAR_5 + VAR_8, (void *)VAR_2->bitmap);

  if (VAR_8)
   (VAR_6 + VAR_8)->name_len = 0;
 }
}
