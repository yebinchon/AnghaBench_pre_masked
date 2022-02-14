
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct f2fs_sb_info {int * inode_list; } ;
typedef enum inode_type { ____Placeholder_inode_type } inode_type ;
struct TYPE_2__ {int dirty_list; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 struct f2fs_sb_info* FUNC_1 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (struct inode*,int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct inode*,int) ;
 int FUNC_6 (struct f2fs_sb_info*,int) ;

__attribute__((used)) static void FUNC_7(struct inode *VAR_3, enum inode_type VAR_4)
{
 struct f2fs_sb_info *VAR_5 = FUNC_1(VAR_3);
 int VAR_6 = (VAR_4 == VAR_0) ? VAR_1 : VAR_2;

 if (FUNC_3(VAR_3, VAR_6))
  return;

 FUNC_5(VAR_3, VAR_6);
 if (!FUNC_2(VAR_3))
  FUNC_4(&FUNC_0(VAR_3)->dirty_list,
      &VAR_5->inode_list[VAR_4]);
 FUNC_6(VAR_5, VAR_4);
}
