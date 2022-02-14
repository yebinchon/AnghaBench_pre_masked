
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; } ;
struct f2fs_sb_info {int dummy; } ;
struct f2fs_io_info {int old_blkaddr; int page; } ;


 struct f2fs_sb_info* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 scalar_t__ FUNC_5 (struct f2fs_sb_info*,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct f2fs_sb_info*,int ) ;
 scalar_t__ FUNC_8 (struct f2fs_sb_info*,int ) ;
 scalar_t__ FUNC_9 (int) ;

bool FUNC_10(struct inode *VAR_2, struct f2fs_io_info *VAR_3)
{
 struct f2fs_sb_info *VAR_4 = FUNC_0(VAR_2);

 if (FUNC_8(VAR_4, VAR_0))
  return 1;
 if (FUNC_3(VAR_2->i_mode))
  return 1;
 if (FUNC_2(VAR_2))
  return 1;
 if (FUNC_4(VAR_2))
  return 1;
 if (VAR_3) {
  if (FUNC_6(VAR_3->page))
   return 1;
  if (FUNC_1(VAR_3->page))
   return 1;
  if (FUNC_9(FUNC_7(VAR_4, VAR_1) &&
   FUNC_5(VAR_4, VAR_3->old_blkaddr)))
   return 1;
 }
 return 0;
}
