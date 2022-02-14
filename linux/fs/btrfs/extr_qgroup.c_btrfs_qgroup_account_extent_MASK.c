
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ulist {scalar_t__ nnodes; } ;
struct btrfs_trans_handle {int transid; struct btrfs_fs_info* fs_info; } ;
struct TYPE_2__ {scalar_t__ objectid; } ;
struct btrfs_fs_info {int qgroup_flags; scalar_t__ qgroup_seq; int qgroup_lock; int qgroup_rescan_lock; TYPE_1__ qgroup_rescan_progress; int quota_root; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (struct ulist*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct btrfs_fs_info*,struct ulist*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_6 (struct btrfs_fs_info*,struct ulist*,struct ulist*,struct ulist*,scalar_t__,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (struct btrfs_fs_info*,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 struct ulist* FUNC_11 (int ) ;
 int FUNC_12 (struct ulist*) ;

int FUNC_13(struct btrfs_trans_handle *VAR_6, u64 VAR_7,
    u64 VAR_8, struct ulist *VAR_9,
    struct ulist *VAR_10)
{
 struct btrfs_fs_info *VAR_11 = VAR_6->fs_info;
 struct ulist *VAR_12 = ((void*)0);
 struct ulist *VAR_13 = ((void*)0);
 u64 VAR_14;
 u64 VAR_15 = 0;
 u64 VAR_16 = 0;
 int VAR_17 = 0;

 if (!FUNC_9(VAR_0, &VAR_11->flags))
  return 0;

 if (VAR_10) {
  if (!FUNC_2(VAR_10))
   goto out_free;
  VAR_15 = VAR_10->nnodes;
 }
 if (VAR_9) {
  if (!FUNC_2(VAR_9))
   goto out_free;
  VAR_16 = VAR_9->nnodes;
 }


 if (VAR_16 == 0 && VAR_15 == 0)
  goto out_free;

 FUNC_0(!VAR_11->quota_root);

 FUNC_10(VAR_11, VAR_6->transid, VAR_7,
     VAR_8, VAR_16, VAR_15);

 VAR_12 = FUNC_11(VAR_3);
 if (!VAR_12) {
  VAR_17 = -VAR_2;
  goto out_free;
 }
 VAR_13 = FUNC_11(VAR_3);
 if (!VAR_13) {
  VAR_17 = -VAR_2;
  goto out_free;
 }

 FUNC_3(&VAR_11->qgroup_rescan_lock);
 if (VAR_11->qgroup_flags & VAR_1) {
  if (VAR_11->qgroup_rescan_progress.objectid <= VAR_7) {
   FUNC_4(&VAR_11->qgroup_rescan_lock);
   VAR_17 = 0;
   goto out_free;
  }
 }
 FUNC_4(&VAR_11->qgroup_rescan_lock);

 FUNC_7(&VAR_11->qgroup_lock);
 VAR_14 = VAR_11->qgroup_seq;


 VAR_17 = FUNC_6(VAR_11, VAR_9, VAR_13, VAR_12, VAR_14,
       VAR_5);
 if (VAR_17 < 0)
  goto out;


 VAR_17 = FUNC_6(VAR_11, VAR_10, VAR_13, VAR_12, VAR_14,
       VAR_4);
 if (VAR_17 < 0)
  goto out;

 FUNC_5(VAR_11, VAR_12, VAR_16, VAR_15,
          VAR_8, VAR_14);




 VAR_11->qgroup_seq += FUNC_1(VAR_16, VAR_15) + 1;
out:
 FUNC_8(&VAR_11->qgroup_lock);
out_free:
 FUNC_12(VAR_13);
 FUNC_12(VAR_12);
 FUNC_12(VAR_9);
 FUNC_12(VAR_10);
 return VAR_17;
}
