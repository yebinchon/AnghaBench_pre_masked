
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uuid_tmp ;
typedef int u8 ;
typedef int u64 ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_dev_replace {scalar_t__ replace_state; int item_needs_writeback; int lock_finishing_cancel_unmount; int rwsem; int time_stopped; struct btrfs_device* srcdev; struct btrfs_device* tgtdev; } ;
struct btrfs_fs_info {TYPE_1__* fs_devices; int chunk_mutex; struct btrfs_root* tree_root; struct btrfs_dev_replace dev_replace; } ;
struct btrfs_device {int dev_stats_ccnt; int dev_alloc_list; int bytes_used; int commit_bytes_used; int disk_total_bytes; int total_bytes; int * uuid; int devid; int dev_state; int name; int post_commit_list; } ;
struct TYPE_2__ {int device_list_mutex; int rw_devices; int alloc_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct btrfs_trans_handle*) ;
 int FUNC_1 (struct btrfs_trans_handle*) ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct btrfs_device*,struct btrfs_device*) ;
 int FUNC_5 (struct btrfs_trans_handle*) ;
 int FUNC_6 (struct btrfs_device*) ;
 int FUNC_7 (struct btrfs_device*) ;
 int FUNC_8 (struct btrfs_fs_info*,struct btrfs_device*,struct btrfs_device*) ;
 int FUNC_9 (struct btrfs_device*,int ) ;
 int FUNC_10 (struct btrfs_device*,int ) ;
 int FUNC_11 (struct btrfs_device*,int ) ;
 int FUNC_12 (struct btrfs_fs_info*,char*,int ,int ,int ,int) ;
 int FUNC_13 (struct btrfs_fs_info*,char*,int ,int ,int ) ;
 int FUNC_14 (struct btrfs_fs_info*) ;
 int FUNC_15 (struct btrfs_device*) ;
 int FUNC_16 (struct btrfs_device*) ;
 int FUNC_17 (struct btrfs_fs_info*) ;
 int FUNC_18 (struct btrfs_fs_info*,int) ;
 struct btrfs_trans_handle* FUNC_19 (struct btrfs_root*,int ) ;
 int FUNC_20 (TYPE_1__*,struct btrfs_device*) ;
 int FUNC_21 (struct btrfs_fs_info*,int ,int ,int ) ;
 int FUNC_22 (int ,int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 () ;
 int FUNC_26 (int *,int *) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int *,int *,int) ;
 int FUNC_29 (int *) ;
 int FUNC_30 (int *) ;
 int FUNC_31 (int ) ;
 int FUNC_32 (int *) ;
 int FUNC_33 (int *) ;

__attribute__((used)) static int FUNC_34(struct btrfs_fs_info *VAR_8,
           int VAR_9)
{
 struct btrfs_dev_replace *VAR_10 = &VAR_8->dev_replace;
 struct btrfs_device *VAR_11;
 struct btrfs_device *VAR_12;
 struct btrfs_root *VAR_13 = VAR_8->tree_root;
 u8 VAR_14[VAR_5];
 struct btrfs_trans_handle *VAR_15;
 int VAR_16 = 0;


 FUNC_29(&VAR_10->lock_finishing_cancel_unmount);

 FUNC_23(&VAR_10->rwsem);

 if (VAR_10->replace_state !=
     VAR_4) {
  FUNC_32(&VAR_10->rwsem);
  FUNC_30(&VAR_10->lock_finishing_cancel_unmount);
  return 0;
 }

 VAR_11 = VAR_10->tgtdev;
 VAR_12 = VAR_10->srcdev;
 FUNC_32(&VAR_10->rwsem);





 VAR_16 = FUNC_18(VAR_8, -1);
 if (VAR_16) {
  FUNC_30(&VAR_10->lock_finishing_cancel_unmount);
  return VAR_16;
 }
 FUNC_21(VAR_8, VAR_7, 0, (u64)-1);






 while (1) {
  VAR_15 = FUNC_19(VAR_13, 0);
  if (FUNC_0(VAR_15)) {
   FUNC_30(&VAR_10->lock_finishing_cancel_unmount);
   return FUNC_1(VAR_15);
  }
  VAR_16 = FUNC_5(VAR_15);
  FUNC_2(VAR_16);


  FUNC_29(&VAR_8->fs_devices->device_list_mutex);

  FUNC_29(&VAR_8->chunk_mutex);

  if (!FUNC_27(&VAR_12->post_commit_list)) {
   FUNC_30(&VAR_8->fs_devices->device_list_mutex);
   FUNC_30(&VAR_8->chunk_mutex);
  } else {
   break;
  }
 }

 FUNC_24(&VAR_10->rwsem);
 VAR_10->replace_state =
  VAR_9 ? VAR_2
     : VAR_3;
 VAR_10->tgtdev = ((void*)0);
 VAR_10->srcdev = ((void*)0);
 VAR_10->time_stopped = FUNC_25();
 VAR_10->item_needs_writeback = 1;


 if (!VAR_9) {
  FUNC_8(VAR_8,
        VAR_12,
        VAR_11);
 } else {
  if (VAR_9 != -VAR_6)
   FUNC_12(VAR_8,
     "btrfs_scrub_dev(%s, %llu, %s) failed %d",
     FUNC_7(VAR_12),
     VAR_12->devid,
     FUNC_31(VAR_11->name), VAR_9);
  FUNC_33(&VAR_10->rwsem);
  FUNC_30(&VAR_8->chunk_mutex);
  FUNC_30(&VAR_8->fs_devices->device_list_mutex);
  FUNC_14(VAR_8);
  if (VAR_11)
   FUNC_6(VAR_11);
  FUNC_17(VAR_8);
  FUNC_30(&VAR_10->lock_finishing_cancel_unmount);

  return VAR_9;
 }

 FUNC_13(VAR_8,
     "dev_replace from %s (devid %llu) to %s finished",
     FUNC_7(VAR_12),
     VAR_12->devid,
     FUNC_31(VAR_11->name));
 FUNC_22(VAR_1, &VAR_11->dev_state);
 VAR_11->devid = VAR_12->devid;
 VAR_12->devid = VAR_0;
 FUNC_28(VAR_14, VAR_11->uuid, sizeof(VAR_14));
 FUNC_28(VAR_11->uuid, VAR_12->uuid, sizeof(VAR_11->uuid));
 FUNC_28(VAR_12->uuid, VAR_14, sizeof(VAR_12->uuid));
 FUNC_11(VAR_11, VAR_12->total_bytes);
 FUNC_10(VAR_11,
       VAR_12->disk_total_bytes);
 FUNC_9(VAR_11, VAR_12->bytes_used);
 VAR_11->commit_bytes_used = VAR_12->bytes_used;

 FUNC_4(VAR_12, VAR_11);

 FUNC_26(&VAR_11->dev_alloc_list, &VAR_8->fs_devices->alloc_list);
 VAR_8->fs_devices->rw_devices++;

 FUNC_33(&VAR_10->rwsem);
 FUNC_14(VAR_8);

 FUNC_16(VAR_12);

 FUNC_17(VAR_8);





 FUNC_3(&VAR_11->dev_stats_ccnt);
 FUNC_30(&VAR_8->chunk_mutex);
 FUNC_30(&VAR_8->fs_devices->device_list_mutex);


 FUNC_20(VAR_8->fs_devices, VAR_12);
 FUNC_15(VAR_12);


 VAR_15 = FUNC_19(VAR_13, 0);
 if (!FUNC_0(VAR_15))
  FUNC_5(VAR_15);

 FUNC_30(&VAR_10->lock_finishing_cancel_unmount);

 return 0;
}
