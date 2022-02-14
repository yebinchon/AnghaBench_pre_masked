
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {struct address_space* mapping; } ;
struct inode {scalar_t__ i_ino; int i_mode; } ;
struct f2fs_sb_info {int dummy; } ;
struct address_space {struct inode* host; } ;


 struct f2fs_sb_info* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_2 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct inode*) ;
 scalar_t__ FUNC_7 (struct page*) ;

__attribute__((used)) static bool FUNC_8(struct page *VAR_0)
{
 struct address_space *VAR_1 = VAR_0->mapping;
 struct inode *VAR_2;
 struct f2fs_sb_info *VAR_3;

 if (!VAR_1)
  return 0;

 VAR_2 = VAR_1->host;
 VAR_3 = FUNC_0(VAR_2);

 if (VAR_2->i_ino == FUNC_1(VAR_3) ||
   VAR_2->i_ino == FUNC_2(VAR_3) ||
   FUNC_4(VAR_2->i_mode) ||
   (FUNC_5(VAR_2->i_mode) &&
   (FUNC_6(VAR_2) || FUNC_3(VAR_2))) ||
   FUNC_7(VAR_0))
  return 1;
 return 0;
}
