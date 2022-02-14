
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {struct address_space* mapping; } ;
struct nilfs_dir_entry {scalar_t__ rec_len; int inode; } ;
struct inode {int i_mtime; int i_ctime; int i_sb; } ;
struct address_space {struct inode* host; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct page*,struct address_space*,unsigned int,unsigned int) ;
 int FUNC_5 (int ,char*) ;
 struct nilfs_dir_entry* FUNC_6 (struct nilfs_dir_entry*) ;
 int FUNC_7 (struct page*,unsigned int,unsigned int) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (unsigned int) ;
 char* FUNC_11 (struct page*) ;

int FUNC_12(struct nilfs_dir_entry *VAR_1, struct page *VAR_2)
{
 struct address_space *VAR_3 = VAR_2->mapping;
 struct inode *VAR_4 = VAR_3->host;
 char *VAR_5 = FUNC_11(VAR_2);
 unsigned int VAR_6, VAR_7;
 struct nilfs_dir_entry *VAR_8, *VAR_9 = ((void*)0);
 int VAR_10;

 VAR_6 = ((char *)VAR_1 - VAR_5) & ~(FUNC_3(VAR_4) - 1);
 VAR_7 = ((char *)VAR_1 - VAR_5) + FUNC_9(VAR_1->rec_len);
 VAR_8 = (struct nilfs_dir_entry *)(VAR_5 + VAR_6);

 while ((char *)VAR_8 < (char *)VAR_1) {
  if (VAR_8->rec_len == 0) {
   FUNC_5(VAR_4->i_sb,
        "zero-length directory entry");
   VAR_10 = -VAR_0;
   goto out;
  }
  VAR_9 = VAR_8;
  VAR_8 = FUNC_6(VAR_8);
 }
 if (VAR_9)
  VAR_6 = (char *)VAR_9 - (char *)FUNC_11(VAR_2);
 FUNC_2(VAR_2);
 VAR_10 = FUNC_7(VAR_2, VAR_6, VAR_7);
 FUNC_0(VAR_10);
 if (VAR_9)
  VAR_9->rec_len = FUNC_10(VAR_7 - VAR_6);
 VAR_1->inode = 0;
 FUNC_4(VAR_2, VAR_3, VAR_6, VAR_7);
 VAR_4->i_ctime = VAR_4->i_mtime = FUNC_1(VAR_4);
out:
 FUNC_8(VAR_2);
 return VAR_10;
}
