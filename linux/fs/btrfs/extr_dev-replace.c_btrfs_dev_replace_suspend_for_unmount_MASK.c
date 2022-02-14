
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_dev_replace {int replace_state; int item_needs_writeback; int lock_finishing_cancel_unmount; int rwsem; int time_stopped; } ;
struct btrfs_fs_info {struct btrfs_dev_replace dev_replace; } ;







 int FUNC_0 (struct btrfs_fs_info*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct btrfs_fs_info *VAR_0)
{
 struct btrfs_dev_replace *VAR_1 = &VAR_0->dev_replace;

 FUNC_3(&VAR_1->lock_finishing_cancel_unmount);
 FUNC_1(&VAR_1->rwsem);

 switch (VAR_1->replace_state) {
 case 130:
 case 131:
 case 132:
 case 128:
  break;
 case 129:
  VAR_1->replace_state =
   128;
  VAR_1->time_stopped = FUNC_2();
  VAR_1->item_needs_writeback = 1;
  FUNC_0(VAR_0, "suspending dev_replace for unmount");
  break;
 }

 FUNC_5(&VAR_1->rwsem);
 FUNC_4(&VAR_1->lock_finishing_cancel_unmount);
}
