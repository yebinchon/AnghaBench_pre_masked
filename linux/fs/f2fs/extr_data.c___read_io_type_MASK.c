
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {scalar_t__ i_ino; } ;
struct f2fs_sb_info {int dummy; } ;
struct address_space {struct inode* host; } ;
typedef enum count_type { ____Placeholder_count_type } count_type ;


 struct f2fs_sb_info* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_2 (struct f2fs_sb_info*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct address_space* FUNC_3 (struct page*) ;

__attribute__((used)) static enum count_type FUNC_4(struct page *VAR_3)
{
 struct address_space *VAR_4 = FUNC_3(VAR_3);

 if (VAR_4) {
  struct inode *VAR_5 = VAR_4->host;
  struct f2fs_sb_info *VAR_6 = FUNC_0(VAR_5);

  if (VAR_5->i_ino == FUNC_1(VAR_6))
   return VAR_1;

  if (VAR_5->i_ino == FUNC_2(VAR_6))
   return VAR_2;
 }
 return VAR_0;
}
