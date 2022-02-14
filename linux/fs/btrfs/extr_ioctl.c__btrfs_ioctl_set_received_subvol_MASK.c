
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct timespec64 {int tv_nsec; int tv_sec; } ;
struct inode {int i_sb; } ;
struct file {int dummy; } ;
struct btrfs_trans_handle {int transid; } ;
struct btrfs_root_item {int rtime; int stime; int received_uuid; } ;
struct TYPE_8__ {int objectid; } ;
struct btrfs_root {TYPE_3__ root_key; struct btrfs_root_item root_item; } ;
struct TYPE_7__ {int nsec; int sec; } ;
struct TYPE_6__ {int nsec; int sec; } ;
struct btrfs_ioctl_received_subvol_args {int uuid; TYPE_2__ rtime; TYPE_1__ stime; int rtransid; int stransid; } ;
struct btrfs_fs_info {int subvol_sem; int tree_root; } ;
struct TYPE_9__ {struct btrfs_root* root; } ;


 scalar_t__ VAR_0 ;
 TYPE_4__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 long VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct btrfs_trans_handle*) ;
 int FUNC_2 (struct btrfs_trans_handle*) ;
 int FUNC_3 (struct btrfs_trans_handle*,int) ;
 int FUNC_4 (struct btrfs_trans_handle*) ;
 int FUNC_5 (struct btrfs_trans_handle*) ;
 scalar_t__ FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct btrfs_root*) ;
 struct btrfs_fs_info* FUNC_9 (int ) ;
 int FUNC_10 (struct btrfs_root_item*,int ) ;
 int FUNC_11 (struct btrfs_root_item*,int ) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int ) ;
 struct btrfs_trans_handle* FUNC_14 (struct btrfs_root*,int) ;
 int FUNC_15 (struct btrfs_trans_handle*,int ,TYPE_3__*,struct btrfs_root_item*) ;
 int FUNC_16 (struct btrfs_trans_handle*,int ,int ,int ) ;
 int FUNC_17 (struct btrfs_trans_handle*,int ,int ,int ) ;
 struct timespec64 FUNC_18 (struct inode*) ;
 int FUNC_19 (int *) ;
 struct inode* FUNC_20 (struct file*) ;
 int FUNC_21 (struct inode*) ;
 int FUNC_22 (int ,int ,int ) ;
 int FUNC_23 (int ,int ,int ) ;
 int FUNC_24 (struct file*) ;
 int FUNC_25 (struct file*) ;
 int FUNC_26 (int *) ;

__attribute__((used)) static long FUNC_27(struct file *VAR_8,
         struct btrfs_ioctl_received_subvol_args *VAR_9)
{
 struct inode *VAR_10 = FUNC_20(VAR_8);
 struct btrfs_fs_info *VAR_11 = FUNC_9(VAR_10->i_sb);
 struct btrfs_root *VAR_12 = FUNC_0(VAR_10)->root;
 struct btrfs_root_item *VAR_13 = &VAR_12->root_item;
 struct btrfs_trans_handle *VAR_14;
 struct timespec64 VAR_15 = FUNC_18(VAR_10);
 int VAR_16 = 0;
 int VAR_17;

 if (!FUNC_21(VAR_10))
  return -VAR_6;

 VAR_16 = FUNC_25(VAR_8);
 if (VAR_16 < 0)
  return VAR_16;

 FUNC_19(&VAR_11->subvol_sem);

 if (FUNC_6(FUNC_0(VAR_10)) != VAR_0) {
  VAR_16 = -VAR_4;
  goto out;
 }

 if (FUNC_8(VAR_12)) {
  VAR_16 = -VAR_7;
  goto out;
 }





 VAR_14 = FUNC_14(VAR_12, 3);
 if (FUNC_1(VAR_14)) {
  VAR_16 = FUNC_2(VAR_14);
  VAR_14 = ((void*)0);
  goto out;
 }

 VAR_9->rtransid = VAR_14->transid;
 VAR_9->rtime.sec = VAR_15.tv_sec;
 VAR_9->rtime.nsec = VAR_15.tv_nsec;

 VAR_17 = FUNC_22(VAR_13->received_uuid, VAR_9->uuid,
           VAR_2);
 if (VAR_17 &&
     !FUNC_7(VAR_13->received_uuid)) {
  VAR_16 = FUNC_17(VAR_14, VAR_13->received_uuid,
       VAR_1,
       VAR_12->root_key.objectid);
  if (VAR_16 && VAR_16 != -VAR_5) {
          FUNC_3(VAR_14, VAR_16);
          FUNC_5(VAR_14);
          goto out;
  }
 }
 FUNC_23(VAR_13->received_uuid, VAR_9->uuid, VAR_2);
 FUNC_11(VAR_13, VAR_9->stransid);
 FUNC_10(VAR_13, VAR_9->rtransid);
 FUNC_13(&VAR_13->stime, VAR_9->stime.sec);
 FUNC_12(&VAR_13->stime, VAR_9->stime.nsec);
 FUNC_13(&VAR_13->rtime, VAR_9->rtime.sec);
 FUNC_12(&VAR_13->rtime, VAR_9->rtime.nsec);

 VAR_16 = FUNC_15(VAR_14, VAR_11->tree_root,
    &VAR_12->root_key, &VAR_12->root_item);
 if (VAR_16 < 0) {
  FUNC_5(VAR_14);
  goto out;
 }
 if (VAR_17 && !FUNC_7(VAR_9->uuid)) {
  VAR_16 = FUNC_16(VAR_14, VAR_9->uuid,
       VAR_1,
       VAR_12->root_key.objectid);
  if (VAR_16 < 0 && VAR_16 != -VAR_3) {
   FUNC_3(VAR_14, VAR_16);
   FUNC_5(VAR_14);
   goto out;
  }
 }
 VAR_16 = FUNC_4(VAR_14);
out:
 FUNC_26(&VAR_11->subvol_sem);
 FUNC_24(VAR_8);
 return VAR_16;
}
