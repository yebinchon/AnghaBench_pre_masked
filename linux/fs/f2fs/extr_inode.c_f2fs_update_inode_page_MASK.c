
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int i_ino; } ;
struct f2fs_sb_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct f2fs_sb_info* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 () ;
 struct page* FUNC_4 (struct f2fs_sb_info*,int ) ;
 int FUNC_5 (struct page*,int) ;
 int FUNC_6 (struct f2fs_sb_info*,int) ;
 int FUNC_7 (struct inode*,struct page*) ;

void FUNC_8(struct inode *VAR_2)
{
 struct f2fs_sb_info *VAR_3 = FUNC_0(VAR_2);
 struct page *VAR_4;
retry:
 VAR_4 = FUNC_4(VAR_3, VAR_2->i_ino);
 if (FUNC_1(VAR_4)) {
  int VAR_5 = FUNC_2(VAR_4);
  if (VAR_5 == -VAR_1) {
   FUNC_3();
   goto retry;
  } else if (VAR_5 != -VAR_0) {
   FUNC_6(VAR_3, 0);
  }
  return;
 }
 FUNC_7(VAR_2, VAR_4);
 FUNC_5(VAR_4, 1);
}
