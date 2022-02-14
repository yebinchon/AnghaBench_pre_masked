
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_dev_replace {int replace_state; int item_needs_writeback; int lock_finishing_cancel_unmount; int rwsem; int time_stopped; struct btrfs_device* srcdev; struct btrfs_device* tgtdev; } ;
struct btrfs_fs_info {int sb; struct btrfs_root* tree_root; struct btrfs_dev_replace dev_replace; } ;
struct btrfs_device {int devid; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct btrfs_trans_handle*) ;
 int FUNC_2 (struct btrfs_trans_handle*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct btrfs_trans_handle*) ;
 int FUNC_5 (struct btrfs_device*) ;
 int FUNC_6 (struct btrfs_device*) ;
 int FUNC_7 (struct btrfs_fs_info*,char*,int ,int ,int ) ;
 int FUNC_8 (struct btrfs_fs_info*) ;
 struct btrfs_trans_handle* FUNC_9 (struct btrfs_root*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 () ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (int *) ;

int FUNC_16(struct btrfs_fs_info *VAR_5)
{
 struct btrfs_dev_replace *VAR_6 = &VAR_5->dev_replace;
 struct btrfs_device *VAR_7 = ((void*)0);
 struct btrfs_device *VAR_8 = ((void*)0);
 struct btrfs_trans_handle *VAR_9;
 struct btrfs_root *VAR_10 = VAR_5->tree_root;
 int VAR_11;
 int VAR_12;

 if (FUNC_14(VAR_5->sb))
  return -VAR_4;

 FUNC_12(&VAR_6->lock_finishing_cancel_unmount);
 FUNC_10(&VAR_6->rwsem);
 switch (VAR_6->replace_state) {
 case 130:
 case 131:
 case 132:
  VAR_11 = VAR_0;
  FUNC_15(&VAR_6->rwsem);
  break;
 case 129:
  VAR_7 = VAR_6->tgtdev;
  VAR_8 = VAR_6->srcdev;
  FUNC_15(&VAR_6->rwsem);
  VAR_12 = FUNC_8(VAR_5);
  if (VAR_12 < 0) {
   VAR_11 = VAR_0;
  } else {
   VAR_11 = VAR_1;




   FUNC_7(VAR_5,
    "dev_replace from %s (devid %llu) to %s canceled",
    FUNC_6(VAR_8), VAR_8->devid,
    FUNC_6(VAR_7));
  }
  break;
 case 128:




  VAR_11 = VAR_1;
  VAR_7 = VAR_6->tgtdev;
  VAR_8 = VAR_6->srcdev;
  VAR_6->tgtdev = ((void*)0);
  VAR_6->srcdev = ((void*)0);
  VAR_6->replace_state =
    132;
  VAR_6->time_stopped = FUNC_11();
  VAR_6->item_needs_writeback = 1;

  FUNC_15(&VAR_6->rwsem);


  VAR_12 = FUNC_8(VAR_5);
  FUNC_0(VAR_12 != -VAR_3);

  VAR_9 = FUNC_9(VAR_10, 0);
  if (FUNC_1(VAR_9)) {
   FUNC_13(&VAR_6->lock_finishing_cancel_unmount);
   return FUNC_2(VAR_9);
  }
  VAR_12 = FUNC_4(VAR_9);
  FUNC_3(VAR_12);

  FUNC_7(VAR_5,
  "suspended dev_replace from %s (devid %llu) to %s canceled",
   FUNC_6(VAR_8), VAR_8->devid,
   FUNC_6(VAR_7));

  if (VAR_7)
   FUNC_5(VAR_7);
  break;
 default:
  FUNC_15(&VAR_6->rwsem);
  VAR_11 = -VAR_2;
 }

 FUNC_13(&VAR_6->lock_finishing_cancel_unmount);
 return VAR_11;
}
