
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int dummy; } ;
struct page {int dummy; } ;
struct inode {int dummy; } ;
struct ext2_dir_entry_2 {int inode; } ;
typedef int ino_t ;


 struct ext2_dir_entry_2* FUNC_0 (struct inode*,struct qstr const*,struct page**) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int ) ;

ino_t FUNC_3(struct inode *VAR_0, const struct qstr *VAR_1)
{
 ino_t VAR_2 = 0;
 struct ext2_dir_entry_2 *VAR_3;
 struct page *VAR_4;

 VAR_3 = FUNC_0 (VAR_0, VAR_1, &VAR_4);
 if (VAR_3) {
  VAR_2 = FUNC_2(VAR_3->inode);
  FUNC_1(VAR_4);
 }
 return VAR_2;
}
