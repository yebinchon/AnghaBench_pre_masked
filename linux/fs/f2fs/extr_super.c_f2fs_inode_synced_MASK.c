
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct f2fs_sb_info {int * inode_lock; } ;
struct TYPE_2__ {int gdirty_list; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 struct f2fs_sb_info* FUNC_1 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct inode*,int ) ;
 int FUNC_3 (struct f2fs_sb_info*,int ) ;
 int FUNC_4 (struct inode*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct f2fs_sb_info*,size_t) ;

void FUNC_10(struct inode *VAR_4)
{
 struct f2fs_sb_info *VAR_5 = FUNC_1(VAR_4);

 FUNC_7(&VAR_5->inode_lock[VAR_0]);
 if (!FUNC_4(VAR_4, VAR_3)) {
  FUNC_8(&VAR_5->inode_lock[VAR_0]);
  return;
 }
 if (!FUNC_6(&FUNC_0(VAR_4)->gdirty_list)) {
  FUNC_5(&FUNC_0(VAR_4)->gdirty_list);
  FUNC_3(VAR_5, VAR_1);
 }
 FUNC_2(VAR_4, VAR_3);
 FUNC_2(VAR_4, VAR_2);
 FUNC_9(FUNC_1(VAR_4), VAR_0);
 FUNC_8(&VAR_5->inode_lock[VAR_0]);
}
