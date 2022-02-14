
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {scalar_t__ nr_to_write; } ;
struct inode {scalar_t__ i_ino; } ;
struct f2fs_sb_info {int dummy; } ;


 int VAR_0 ;
 struct f2fs_sb_info* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_2 (struct f2fs_sb_info*) ;
 int VAR_1 ;
 int FUNC_3 (struct f2fs_sb_info*,int) ;
 int FUNC_4 (struct f2fs_sb_info*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*,int ) ;

int FUNC_7(struct inode *VAR_2, struct writeback_control *VAR_3)
{
 struct f2fs_sb_info *VAR_4 = FUNC_0(VAR_2);

 if (VAR_2->i_ino == FUNC_2(VAR_4) ||
   VAR_2->i_ino == FUNC_1(VAR_4))
  return 0;

 if (!FUNC_6(VAR_2, VAR_1))
  return 0;

 if (!FUNC_4(VAR_4))
  return -VAR_0;





 FUNC_5(VAR_2);
 if (VAR_3 && VAR_3->nr_to_write)
  FUNC_3(VAR_4, 1);
 return 0;
}
