
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {struct address_space* mapping; } ;
struct nilfs_dir_entry {int inode; int rec_len; } ;
struct inode {int i_ctime; int i_mtime; int i_ino; } ;
struct address_space {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*,struct address_space*,unsigned int,unsigned int) ;
 int FUNC_5 (struct page*,unsigned int,unsigned int) ;
 int FUNC_6 (struct page*) ;
 unsigned int FUNC_7 (int ) ;
 int FUNC_8 (struct nilfs_dir_entry*,struct inode*) ;
 scalar_t__ FUNC_9 (struct page*) ;

void FUNC_10(struct inode *VAR_0, struct nilfs_dir_entry *VAR_1,
      struct page *VAR_2, struct inode *VAR_3)
{
 unsigned int VAR_4 = (char *)VAR_1 - (char *)FUNC_9(VAR_2);
 unsigned int VAR_5 = VAR_4 + FUNC_7(VAR_1->rec_len);
 struct address_space *VAR_6 = VAR_2->mapping;
 int VAR_7;

 FUNC_3(VAR_2);
 VAR_7 = FUNC_5(VAR_2, VAR_4, VAR_5);
 FUNC_0(VAR_7);
 VAR_1->inode = FUNC_1(VAR_3->i_ino);
 FUNC_8(VAR_1, VAR_3);
 FUNC_4(VAR_2, VAR_6, VAR_4, VAR_5);
 FUNC_6(VAR_2);
 VAR_0->i_mtime = VAR_0->i_ctime = FUNC_2(VAR_0);
}
