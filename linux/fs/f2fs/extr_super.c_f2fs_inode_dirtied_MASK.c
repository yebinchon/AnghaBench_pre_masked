
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct f2fs_sb_info {int * inode_lock; int * inode_list; } ;
struct TYPE_2__ {int gdirty_list; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 struct f2fs_sb_info* FUNC_1 (struct inode*) ;
 int VAR_2 ;
 int FUNC_2 (struct f2fs_sb_info*,int ) ;
 scalar_t__ FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct inode*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct f2fs_sb_info*,size_t) ;

int FUNC_10(struct inode *VAR_3, bool VAR_4)
{
 struct f2fs_sb_info *VAR_5 = FUNC_1(VAR_3);
 int VAR_6 = 0;

 FUNC_7(&VAR_5->inode_lock[VAR_0]);
 if (FUNC_3(VAR_3, VAR_2)) {
  VAR_6 = 1;
 } else {
  FUNC_6(VAR_3, VAR_2);
  FUNC_9(VAR_5, VAR_0);
 }
 if (VAR_4 && FUNC_5(&FUNC_0(VAR_3)->gdirty_list)) {
  FUNC_4(&FUNC_0(VAR_3)->gdirty_list,
    &VAR_5->inode_list[VAR_0]);
  FUNC_2(VAR_5, VAR_1);
 }
 FUNC_8(&VAR_5->inode_lock[VAR_0]);
 return VAR_6;
}
