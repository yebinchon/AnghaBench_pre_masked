
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bio_counter; } ;
struct btrfs_fs_info {int subvol_srcu; TYPE_1__ dev_replace; int dio_bytes; int delalloc_bytes; int dirty_metadata_bytes; int fs_devices; int mapping_tree; TYPE_2__* btree_inode; int flags; int delalloc_roots; int delayed_iputs; int cleaner_kthread; int transaction_kthread; int fs_state; int sb; int async_reclaim_work; int defrag_running; int transaction_wait; int uuid_tree_rescan_sem; } ;
struct TYPE_4__ {int i_mapping; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct btrfs_fs_info*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct btrfs_fs_info*) ;
 int FUNC_5 (struct btrfs_fs_info*) ;
 int FUNC_6 (struct btrfs_fs_info*) ;
 int FUNC_7 (struct btrfs_fs_info*,char*,int) ;
 int FUNC_8 (struct btrfs_fs_info*) ;
 int FUNC_9 (struct btrfs_fs_info*) ;
 int FUNC_10 (struct btrfs_fs_info*) ;
 int FUNC_11 (struct btrfs_fs_info*) ;
 int FUNC_12 (struct btrfs_fs_info*) ;
 int FUNC_13 (struct btrfs_fs_info*) ;
 int FUNC_14 (struct btrfs_fs_info*) ;
 int FUNC_15 (struct btrfs_fs_info*,char*,scalar_t__) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct btrfs_fs_info*) ;
 int FUNC_18 (struct btrfs_fs_info*) ;
 int FUNC_19 (struct btrfs_fs_info*,int) ;
 int FUNC_20 (struct btrfs_fs_info*) ;
 int FUNC_21 (struct btrfs_fs_info*) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (struct btrfs_fs_info*) ;
 scalar_t__ FUNC_24 (struct btrfs_fs_info*,int ) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int ,int *) ;
 int FUNC_29 (int *) ;
 int FUNC_30 (struct btrfs_fs_info*,int) ;
 int FUNC_31 (int ) ;
 int FUNC_32 (TYPE_2__*) ;
 int FUNC_33 (int ) ;
 int FUNC_34 (int ) ;
 int FUNC_35 (int *) ;
 int FUNC_36 (int *) ;
 scalar_t__ FUNC_37 (int *) ;
 int FUNC_38 (int ) ;
 int FUNC_39 (int ,int *) ;
 scalar_t__ FUNC_40 (int ,int *) ;
 int FUNC_41 (int *) ;
 int FUNC_42 (int ,int) ;

void FUNC_43(struct btrfs_fs_info *VAR_6)
{
 int VAR_7;

 FUNC_39(VAR_1, &VAR_6->flags);






 FUNC_33(VAR_6->cleaner_kthread);


 FUNC_19(VAR_6, 0);


 FUNC_29(&VAR_6->uuid_tree_rescan_sem);

 FUNC_41(&VAR_6->uuid_tree_rescan_sem);


 FUNC_17(VAR_6);

 FUNC_6(VAR_6);

 FUNC_20(VAR_6);


 FUNC_42(VAR_6->transaction_wait,
     (FUNC_1(&VAR_6->defrag_running) == 0));


 FUNC_2(VAR_6);

 FUNC_26(&VAR_6->async_reclaim_work);

 if (!FUNC_38(VAR_6->sb)) {




  FUNC_5(VAR_6);

  VAR_7 = FUNC_4(VAR_6);
  if (VAR_7)
   FUNC_7(VAR_6, "commit super ret %d", VAR_7);
 }

 if (FUNC_40(VAR_3, &VAR_6->fs_state) ||
     FUNC_40(VAR_4, &VAR_6->fs_state))
  FUNC_8(VAR_6);

 FUNC_34(VAR_6->transaction_kthread);
 FUNC_34(VAR_6->cleaner_kthread);

 FUNC_0(FUNC_35(&VAR_6->delayed_iputs));
 FUNC_39(VAR_0, &VAR_6->flags);

 FUNC_12(VAR_6);
 FUNC_0(FUNC_35(&VAR_6->delalloc_roots));

 if (FUNC_37(&VAR_6->delalloc_bytes)) {
  FUNC_15(VAR_6, "at unmount delalloc count %lld",
         FUNC_37(&VAR_6->delalloc_bytes));
 }

 if (FUNC_37(&VAR_6->dio_bytes))
  FUNC_15(VAR_6, "at unmount dio bytes count %lld",
      FUNC_37(&VAR_6->dio_bytes));

 FUNC_23(VAR_6);
 FUNC_22(VAR_6->fs_devices);

 FUNC_11(VAR_6);

 FUNC_18(VAR_6);





 FUNC_31(VAR_6->btree_inode->i_mapping);
 FUNC_21(VAR_6);

 FUNC_9(VAR_6);

 FUNC_28(VAR_2, &VAR_6->flags);
 FUNC_30(VAR_6, 1);

 FUNC_32(VAR_6->btree_inode);






 FUNC_16(&VAR_6->mapping_tree);
 FUNC_3(VAR_6->fs_devices);

 FUNC_36(&VAR_6->dirty_metadata_bytes);
 FUNC_36(&VAR_6->delalloc_bytes);
 FUNC_36(&VAR_6->dio_bytes);
 FUNC_36(&VAR_6->dev_replace.bio_counter);
 FUNC_27(&VAR_6->subvol_srcu);

 FUNC_10(VAR_6);
 FUNC_14(VAR_6);
 FUNC_13(VAR_6);
}
