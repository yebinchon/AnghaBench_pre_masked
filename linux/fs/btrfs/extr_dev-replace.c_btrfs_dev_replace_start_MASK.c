
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_trans_handle {int devid; int fs_devices; int name; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_dev_replace {int replace_state; int cont_reading_from_srcdev_mode; int is_valid; int item_needs_writeback; int scrub_progress; int rwsem; struct btrfs_trans_handle* tgtdev; struct btrfs_trans_handle* srcdev; int num_uncorrectable_read_errors; int num_write_errors; scalar_t__ cursor_right; scalar_t__ cursor_left_last_write_of_item; scalar_t__ committed_cursor_left; scalar_t__ cursor_left; int time_started; } ;
struct btrfs_fs_info {struct btrfs_dev_replace dev_replace; struct btrfs_root* dev_root; } ;
struct btrfs_device {int devid; int fs_devices; int name; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct btrfs_trans_handle*) ;
 int FUNC_2 (struct btrfs_trans_handle*) ;
 int VAR_6 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int ) ;
 struct btrfs_trans_handle* FUNC_5 (struct btrfs_root*) ;
 int FUNC_6 (struct btrfs_trans_handle*) ;
 int FUNC_7 (struct btrfs_trans_handle*) ;
 int FUNC_8 (struct btrfs_trans_handle*) ;
 int FUNC_9 (struct btrfs_fs_info*,int) ;
 int FUNC_10 (struct btrfs_trans_handle*) ;
 int FUNC_11 (struct btrfs_fs_info*,char*,int) ;
 struct btrfs_trans_handle* FUNC_12 (struct btrfs_fs_info*,int ,char const*) ;
 int FUNC_13 (struct btrfs_fs_info*,char*,int ,int ,int ) ;
 int FUNC_14 (struct btrfs_fs_info*,char const*,struct btrfs_trans_handle*,struct btrfs_trans_handle**) ;
 scalar_t__ FUNC_15 (struct btrfs_fs_info*,struct btrfs_trans_handle*) ;
 int FUNC_16 (struct btrfs_fs_info*,int ,int ,int ,int *,int ,int) ;
 struct btrfs_trans_handle* FUNC_17 (struct btrfs_root*,int) ;
 int FUNC_18 (int ,struct btrfs_trans_handle*) ;
 int FUNC_19 (struct btrfs_fs_info*,int ,int ,int ) ;
 int FUNC_20 (struct btrfs_fs_info*,char*,int ,int ) ;
 int FUNC_21 (int *) ;
 int FUNC_22 () ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int *) ;

__attribute__((used)) static int FUNC_25(struct btrfs_fs_info *VAR_7,
  const char *VAR_8, u64 VAR_9, const char *VAR_10,
  int VAR_11)
{
 struct btrfs_root *VAR_12 = VAR_7->dev_root;
 struct btrfs_trans_handle *VAR_13;
 struct btrfs_dev_replace *VAR_14 = &VAR_7->dev_replace;
 int VAR_15;
 struct btrfs_device *VAR_16 = ((void*)0);
 struct btrfs_device *VAR_17 = ((void*)0);

 VAR_17 = FUNC_12(VAR_7, VAR_9,
        VAR_10);
 if (FUNC_1(VAR_17))
  return FUNC_2(VAR_17);

 if (FUNC_15(VAR_7, VAR_17)) {
  FUNC_20(VAR_7,
   "cannot replace device %s (devid %llu) due to active swapfile",
   FUNC_8(VAR_17), VAR_17->devid);
  return -VAR_5;
 }





 VAR_13 = FUNC_5(VAR_12);
 if (!FUNC_1(VAR_13)) {
  VAR_15 = FUNC_6(VAR_13);
  if (VAR_15)
   return VAR_15;
 } else if (FUNC_2(VAR_13) != -VAR_4) {
  return FUNC_2(VAR_13);
 }

 VAR_15 = FUNC_14(VAR_7, VAR_8,
         VAR_17, &VAR_16);
 if (VAR_15)
  return VAR_15;

 FUNC_21(&VAR_14->rwsem);
 switch (VAR_14->replace_state) {
 case 130:
 case 131:
 case 132:
  break;
 case 129:
 case 128:
  FUNC_0(0);
  VAR_15 = VAR_0;
  FUNC_24(&VAR_14->rwsem);
  goto leave;
 }

 VAR_14->cont_reading_from_srcdev_mode = VAR_11;
 VAR_14->srcdev = VAR_17;
 VAR_14->tgtdev = VAR_16;

 FUNC_13(VAR_7,
        "dev_replace from %s (devid %llu) to %s started",
        FUNC_8(VAR_17),
        VAR_17->devid,
        FUNC_23(VAR_16->name));





 VAR_14->replace_state = 129;
 VAR_14->time_started = FUNC_22();
 VAR_14->cursor_left = 0;
 VAR_14->committed_cursor_left = 0;
 VAR_14->cursor_left_last_write_of_item = 0;
 VAR_14->cursor_right = 0;
 VAR_14->is_valid = 1;
 VAR_14->item_needs_writeback = 1;
 FUNC_4(&VAR_14->num_write_errors, 0);
 FUNC_4(&VAR_14->num_uncorrectable_read_errors, 0);
 FUNC_24(&VAR_14->rwsem);

 VAR_15 = FUNC_18(VAR_16->fs_devices, VAR_16);
 if (VAR_15)
  FUNC_11(VAR_7, "kobj add dev failed %d", VAR_15);

 FUNC_19(VAR_7, VAR_6, 0, (u64)-1);


 VAR_13 = FUNC_17(VAR_12, 1);
 if (FUNC_1(VAR_13)) {
  VAR_15 = FUNC_2(VAR_13);
  FUNC_21(&VAR_14->rwsem);
  VAR_14->replace_state =
   130;
  VAR_14->srcdev = ((void*)0);
  VAR_14->tgtdev = ((void*)0);
  FUNC_24(&VAR_14->rwsem);
  goto leave;
 }

 VAR_15 = FUNC_6(VAR_13);
 FUNC_3(VAR_15);


 VAR_15 = FUNC_16(VAR_7, VAR_17->devid, 0,
         FUNC_10(VAR_17),
         &VAR_14->scrub_progress, 0, 1);

 VAR_15 = FUNC_9(VAR_7, VAR_15);
 if (VAR_15 == -VAR_3) {
  VAR_15 = VAR_1;
 } else if (VAR_15 != -VAR_2) {
  FUNC_3(VAR_15);
 }

 return VAR_15;

leave:
 FUNC_7(VAR_16);
 return VAR_15;
}
