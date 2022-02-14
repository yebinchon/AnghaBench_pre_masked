
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int i_mode; } ;
struct f2fs_sb_info {int * inode_lock; } ;
typedef enum inode_type { ____Placeholder_inode_type } inode_type ;


 int VAR_0 ;
 int VAR_1 ;
 struct f2fs_sb_info* FUNC_0 (struct inode*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct inode*,int) ;
 int FUNC_5 (struct page*,int ) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (struct f2fs_sb_info*,int ) ;

void FUNC_11(struct inode *VAR_3, struct page *VAR_4)
{
 struct f2fs_sb_info *VAR_5 = FUNC_0(VAR_3);
 enum inode_type VAR_6 = FUNC_1(VAR_3->i_mode) ? VAR_1 : VAR_2;

 if (!FUNC_1(VAR_3->i_mode) && !FUNC_3(VAR_3->i_mode) &&
   !FUNC_2(VAR_3->i_mode))
  return;

 FUNC_8(&VAR_5->inode_lock[VAR_6]);
 if (VAR_6 != VAR_2 || FUNC_10(VAR_5, VAR_0))
  FUNC_4(VAR_3, VAR_6);
 FUNC_7(VAR_3);
 FUNC_9(&VAR_5->inode_lock[VAR_6]);

 FUNC_5(VAR_4, 0);
 FUNC_6(VAR_4);
}
