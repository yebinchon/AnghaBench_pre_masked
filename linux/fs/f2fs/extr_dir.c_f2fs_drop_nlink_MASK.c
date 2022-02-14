
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {scalar_t__ i_nlink; int i_mode; int i_ctime; } ;
struct f2fs_sb_info {int dummy; } ;
struct TYPE_2__ {int i_sem; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 struct f2fs_sb_info* FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*,int) ;
 int FUNC_7 (struct inode*,int ) ;
 int FUNC_8 (struct f2fs_sb_info*) ;
 int FUNC_9 (int *) ;

void FUNC_10(struct inode *VAR_0, struct inode *VAR_1)
{
 struct f2fs_sb_info *VAR_2 = FUNC_1(VAR_0);

 FUNC_4(&FUNC_0(VAR_1)->i_sem);

 if (FUNC_2(VAR_1->i_mode))
  FUNC_6(VAR_0, 0);
 VAR_1->i_ctime = FUNC_3(VAR_1);

 FUNC_6(VAR_1, 0);
 if (FUNC_2(VAR_1->i_mode)) {
  FUNC_6(VAR_1, 0);
  FUNC_7(VAR_1, 0);
 }
 FUNC_9(&FUNC_0(VAR_1)->i_sem);

 if (VAR_1->i_nlink == 0)
  FUNC_5(VAR_1);
 else
  FUNC_8(VAR_2);
}
