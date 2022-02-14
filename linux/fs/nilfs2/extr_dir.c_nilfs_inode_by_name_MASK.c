
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int dummy; } ;
struct page {int dummy; } ;
struct nilfs_dir_entry {int inode; } ;
struct inode {int dummy; } ;
typedef int ino_t ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (int ) ;
 struct nilfs_dir_entry* FUNC_2 (struct inode*,struct qstr const*,struct page**) ;
 int FUNC_3 (struct page*) ;

ino_t FUNC_4(struct inode *VAR_0, const struct qstr *VAR_1)
{
 ino_t VAR_2 = 0;
 struct nilfs_dir_entry *VAR_3;
 struct page *VAR_4;

 VAR_3 = FUNC_2(VAR_0, VAR_1, &VAR_4);
 if (VAR_3) {
  VAR_2 = FUNC_1(VAR_3->inode);
  FUNC_0(VAR_4);
  FUNC_3(VAR_4);
 }
 return VAR_2;
}
