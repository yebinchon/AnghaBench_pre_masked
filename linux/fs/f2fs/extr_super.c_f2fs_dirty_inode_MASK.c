
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {scalar_t__ i_ino; } ;
struct f2fs_sb_info {int dummy; } ;


 struct f2fs_sb_info* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_2 (struct f2fs_sb_info*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (struct inode*,int) ;
 scalar_t__ FUNC_5 (struct inode*,int ) ;

__attribute__((used)) static void FUNC_6(struct inode *VAR_2, int VAR_3)
{
 struct f2fs_sb_info *VAR_4 = FUNC_0(VAR_2);

 if (VAR_2->i_ino == FUNC_2(VAR_4) ||
   VAR_2->i_ino == FUNC_1(VAR_4))
  return;

 if (VAR_3 == VAR_1)
  return;

 if (FUNC_5(VAR_2, VAR_0))
  FUNC_3(VAR_2, VAR_0);

 FUNC_4(VAR_2, 0);
}
