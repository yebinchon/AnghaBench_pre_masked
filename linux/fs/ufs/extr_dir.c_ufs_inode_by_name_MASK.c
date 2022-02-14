
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_dir_entry {int d_ino; } ;
struct qstr {int dummy; } ;
struct page {int dummy; } ;
struct inode {int i_sb; } ;
typedef int ino_t ;


 int FUNC_0 (int ,int ) ;
 struct ufs_dir_entry* FUNC_1 (struct inode*,struct qstr const*,struct page**) ;
 int FUNC_2 (struct page*) ;

ino_t FUNC_3(struct inode *VAR_0, const struct qstr *VAR_1)
{
 ino_t VAR_2 = 0;
 struct ufs_dir_entry *VAR_3;
 struct page *VAR_4;

 VAR_3 = FUNC_1(VAR_0, VAR_1, &VAR_4);
 if (VAR_3) {
  VAR_2 = FUNC_0(VAR_0->i_sb, VAR_3->d_ino);
  FUNC_2(VAR_4);
 }
 return VAR_2;
}
