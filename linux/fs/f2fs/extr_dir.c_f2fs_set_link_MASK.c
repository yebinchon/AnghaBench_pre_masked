
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int i_ctime; int i_mtime; int i_mode; int i_ino; } ;
struct f2fs_dir_entry {int ino; } ;
typedef enum page_type { ____Placeholder_page_type } page_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,int) ;
 int FUNC_4 (struct page*,int) ;
 int FUNC_5 (struct page*,int,int,int) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct f2fs_dir_entry*,int ) ;
 int FUNC_8 (struct page*) ;

void FUNC_9(struct inode *VAR_2, struct f2fs_dir_entry *VAR_3,
  struct page *VAR_4, struct inode *VAR_5)
{
 enum page_type VAR_6 = FUNC_2(VAR_2) ? VAR_1 : VAR_0;
 FUNC_6(VAR_4);
 FUNC_5(VAR_4, VAR_6, 1, 1);
 VAR_3->ino = FUNC_0(VAR_5->i_ino);
 FUNC_7(VAR_3, VAR_5->i_mode);
 FUNC_8(VAR_4);

 VAR_2->i_mtime = VAR_2->i_ctime = FUNC_1(VAR_2);
 FUNC_3(VAR_2, 0);
 FUNC_4(VAR_4, 1);
}
