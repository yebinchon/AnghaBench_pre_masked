
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int dummy; } ;
struct page {int dummy; } ;
struct inode {int dummy; } ;
struct f2fs_dir_entry {int ino; } ;
typedef int ino_t ;


 struct f2fs_dir_entry* FUNC_0 (struct inode*,struct qstr const*,struct page**) ;
 int FUNC_1 (struct page*,int ) ;
 int FUNC_2 (int ) ;

ino_t FUNC_3(struct inode *VAR_0, const struct qstr *VAR_1,
       struct page **VAR_2)
{
 ino_t VAR_3 = 0;
 struct f2fs_dir_entry *VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_4) {
  VAR_3 = FUNC_2(VAR_4->ino);
  FUNC_1(*VAR_2, 0);
 }

 return VAR_3;
}
