
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_flags; scalar_t__ s_root; int s_id; struct btrfs_fs_devices* fs_devices; } ;
struct file_system_type {int dummy; } ;
struct dentry {int dummy; } ;
struct btrfs_fs_info {int flags; struct btrfs_fs_devices* fs_devices; void* super_for_commit; void* super_copy; } ;
struct btrfs_fs_devices {scalar_t__ rw_devices; struct block_device* latest_bdev; } ;
struct btrfs_device {int s_flags; scalar_t__ s_root; int s_id; struct btrfs_fs_devices* fs_devices; } ;
struct block_device {int dummy; } ;
typedef int fmode_t ;
struct TYPE_2__ {struct file_system_type* bdev_holder; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct dentry* FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct super_block*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct btrfs_fs_devices*) ;
 int FUNC_4 (struct super_block*,struct btrfs_fs_devices*,void*) ;
 int FUNC_5 (struct btrfs_fs_devices*,int ,struct file_system_type*) ;
 int FUNC_6 (void*,int ,struct file_system_type*) ;
 TYPE_1__* FUNC_7 (struct super_block*) ;
 struct super_block* FUNC_8 (char const*,int ,struct file_system_type*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_9 () ;
 int FUNC_10 (struct super_block*) ;
 struct dentry* FUNC_11 (scalar_t__) ;
 int FUNC_12 (struct btrfs_fs_info*) ;
 struct btrfs_fs_info* FUNC_13 (int,int ) ;
 void* FUNC_14 (int ,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (void**) ;
 int FUNC_18 (void*,void**) ;
 int FUNC_19 (struct super_block*,void*,int ,int *) ;
 int FUNC_20 (int ,int *) ;
 struct super_block* FUNC_21 (struct file_system_type*,int ,int ,int,struct btrfs_fs_info*) ;
 int FUNC_22 (int ,int,char*,struct block_device*) ;
 int FUNC_23 (int ,char*) ;
 int VAR_12 ;

__attribute__((used)) static struct dentry *FUNC_24(struct file_system_type *VAR_13,
  int VAR_14, const char *VAR_15, void *VAR_16)
{
 struct block_device *VAR_17 = ((void*)0);
 struct super_block *VAR_18;
 struct btrfs_device *VAR_19 = ((void*)0);
 struct btrfs_fs_devices *VAR_20 = ((void*)0);
 struct btrfs_fs_info *VAR_21 = ((void*)0);
 void *VAR_22 = ((void*)0);
 fmode_t VAR_23 = VAR_5;
 int VAR_24 = 0;

 if (!(VAR_14 & VAR_9))
  VAR_23 |= VAR_6;

 if (VAR_16) {
  VAR_24 = FUNC_18(VAR_16, &VAR_22);
  if (VAR_24)
   return FUNC_0(VAR_24);
 }







 VAR_21 = FUNC_13(sizeof(struct btrfs_fs_info), VAR_7);
 if (!VAR_21) {
  VAR_24 = -VAR_4;
  goto error_sec_opts;
 }

 VAR_21->super_copy = FUNC_14(VAR_1, VAR_7);
 VAR_21->super_for_commit = FUNC_14(VAR_1, VAR_7);
 if (!VAR_21->super_copy || !VAR_21->super_for_commit) {
  VAR_24 = -VAR_4;
  goto error_fs_info;
 }

 FUNC_15(&VAR_12);
 VAR_24 = FUNC_6(VAR_16, VAR_23, VAR_13);
 if (VAR_24) {
  FUNC_16(&VAR_12);
  goto error_fs_info;
 }

 VAR_19 = FUNC_8(VAR_15, VAR_23, VAR_13);
 if (FUNC_1(VAR_19)) {
  FUNC_16(&VAR_12);
  VAR_24 = FUNC_2(VAR_19);
  goto error_fs_info;
 }

 VAR_20 = VAR_19->fs_devices;
 VAR_21->fs_devices = VAR_20;

 VAR_24 = FUNC_5(VAR_20, VAR_23, VAR_13);
 FUNC_16(&VAR_12);
 if (VAR_24)
  goto error_fs_info;

 if (!(VAR_14 & VAR_9) && VAR_20->rw_devices == 0) {
  VAR_24 = -VAR_2;
  goto error_close_devices;
 }

 VAR_17 = VAR_20->latest_bdev;
 VAR_18 = FUNC_21(VAR_13, VAR_11, VAR_10, VAR_14 | VAR_8,
   VAR_21);
 if (FUNC_1(VAR_18)) {
  VAR_24 = FUNC_2(VAR_18);
  goto error_close_devices;
 }

 if (VAR_18->s_root) {
  FUNC_3(VAR_20);
  FUNC_12(VAR_21);
  if ((VAR_14 ^ VAR_18->s_flags) & VAR_9)
   VAR_24 = -VAR_3;
 } else {
  FUNC_22(VAR_18->s_id, sizeof(VAR_18->s_id), "%pg", VAR_17);
  FUNC_7(VAR_18)->bdev_holder = VAR_13;
  if (!FUNC_23(FUNC_9(), "generic"))
   FUNC_20(VAR_0, &VAR_21->flags);
  VAR_24 = FUNC_4(VAR_18, VAR_20, VAR_16);
 }
 if (!VAR_24)
  VAR_24 = FUNC_19(VAR_18, VAR_22, 0, ((void*)0));
 FUNC_17(&VAR_22);
 if (VAR_24) {
  FUNC_10(VAR_18);
  return FUNC_0(VAR_24);
 }

 return FUNC_11(VAR_18->s_root);

error_close_devices:
 FUNC_3(VAR_20);
error_fs_info:
 FUNC_12(VAR_21);
error_sec_opts:
 FUNC_17(&VAR_22);
 return FUNC_0(VAR_24);
}
