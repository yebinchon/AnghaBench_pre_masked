
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int i_ino; } ;
struct f2fs_sb_info {int dummy; } ;
struct f2fs_inode {int i_inline; } ;


 int VAR_0 ;
 struct f2fs_inode* FUNC_0 (struct page*) ;
 struct f2fs_sb_info* FUNC_1 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 int FUNC_4 (struct inode*) ;
 int VAR_3 ;
 int FUNC_5 (struct inode*,int ) ;
 int FUNC_6 (struct f2fs_sb_info*,int ) ;
 struct page* FUNC_7 (struct f2fs_sb_info*,int ) ;
 scalar_t__ FUNC_8 (struct inode*) ;
 int FUNC_9 (struct page*,int) ;
 scalar_t__ FUNC_10 (struct inode*,int ,int) ;
 int FUNC_11 (struct inode*,struct page*,int ) ;
 int FUNC_12 (struct page*,int ,int,int) ;
 void* FUNC_13 (struct inode*,struct page*) ;
 int FUNC_14 (void*,void*,int ) ;
 int FUNC_15 (struct inode*,int ) ;
 int FUNC_16 (struct page*) ;

bool FUNC_17(struct inode *VAR_4, struct page *VAR_5)
{
 struct f2fs_sb_info *VAR_6 = FUNC_1(VAR_4);
 struct f2fs_inode *VAR_7 = ((void*)0);
 void *VAR_8, *VAR_9;
 struct page *VAR_10;
 if (FUNC_3(VAR_5))
  VAR_7 = FUNC_0(VAR_5);

 if (FUNC_8(VAR_4) &&
   VAR_7 && (VAR_7->i_inline & VAR_0)) {
process_inline:
  VAR_10 = FUNC_7(VAR_6, VAR_4->i_ino);
  FUNC_6(VAR_6, FUNC_2(VAR_10));

  FUNC_12(VAR_10, VAR_3, 1, 1);

  VAR_8 = FUNC_13(VAR_4, VAR_5);
  VAR_9 = FUNC_13(VAR_4, VAR_10);
  FUNC_14(VAR_9, VAR_8, FUNC_4(VAR_4));

  FUNC_15(VAR_4, VAR_2);
  FUNC_15(VAR_4, VAR_1);

  FUNC_16(VAR_10);
  FUNC_9(VAR_10, 1);
  return 1;
 }

 if (FUNC_8(VAR_4)) {
  VAR_10 = FUNC_7(VAR_6, VAR_4->i_ino);
  FUNC_6(VAR_6, FUNC_2(VAR_10));
  FUNC_11(VAR_4, VAR_10, 0);
  FUNC_5(VAR_4, VAR_2);
  FUNC_9(VAR_10, 1);
 } else if (VAR_7 && (VAR_7->i_inline & VAR_0)) {
  if (FUNC_10(VAR_4, 0, 0))
   return 0;
  goto process_inline;
 }
 return 0;
}
