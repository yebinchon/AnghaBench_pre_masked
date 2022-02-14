
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
struct inode {scalar_t__ i_ino; } ;
struct f2fs_sb_info {int dummy; } ;
struct TYPE_2__ {struct inode* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct f2fs_sb_info* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_2 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_3 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_4 (struct page*) ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct f2fs_sb_info*,int ) ;
 int FUNC_8 (struct page*) ;
 void FUNC_9 (struct inode*,struct page*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*) ;

void FUNC_12(struct page *VAR_3, unsigned int VAR_4,
       unsigned int VAR_5)
{
 struct inode *VAR_6 = VAR_3->mapping->host;
 struct f2fs_sb_info *VAR_7 = FUNC_0(VAR_6);

 if (VAR_6->i_ino >= FUNC_3(VAR_7) &&
  (VAR_4 % VAR_2 || VAR_5 != VAR_2))
  return;

 if (FUNC_5(VAR_3)) {
  if (VAR_6->i_ino == FUNC_1(VAR_7)) {
   FUNC_7(VAR_7, VAR_0);
  } else if (VAR_6->i_ino == FUNC_2(VAR_7)) {
   FUNC_7(VAR_7, VAR_1);
  } else {
   FUNC_11(VAR_6);
   FUNC_10(VAR_6);
  }
 }

 FUNC_6(VAR_3);

 if (FUNC_4(VAR_3))
  return FUNC_9(VAR_6, VAR_3);

 FUNC_8(VAR_3);
}
