
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct btrfs_trans_handle {TYPE_1__* transaction; } ;
struct btrfs_space_info {scalar_t__ total_bytes; int lock; int flags; int total_bytes_pinned; int force_alloc; int full; } ;
struct btrfs_root {struct btrfs_fs_info* fs_info; } ;
struct btrfs_inode {struct btrfs_root* root; } ;
struct btrfs_fs_info {int sectorsize; struct btrfs_space_info* data_sinfo; } ;
struct TYPE_4__ {int journal_info; } ;
struct TYPE_3__ {int flags; } ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct btrfs_trans_handle*) ;
 int FUNC_3 (struct btrfs_trans_handle*) ;
 int VAR_5 ;
 int FUNC_4 (int *,scalar_t__,int ) ;
 int FUNC_5 (struct btrfs_trans_handle*,scalar_t__,int ) ;
 int FUNC_6 (struct btrfs_trans_handle*) ;
 scalar_t__ FUNC_7 (struct btrfs_fs_info*) ;
 int FUNC_8 (struct btrfs_trans_handle*) ;
 scalar_t__ FUNC_9 (struct btrfs_inode*) ;
 struct btrfs_trans_handle* FUNC_10 (struct btrfs_root*) ;
 int FUNC_11 (struct btrfs_fs_info*,struct btrfs_space_info*,scalar_t__) ;
 scalar_t__ FUNC_12 (struct btrfs_space_info*,int) ;
 int FUNC_13 (struct btrfs_fs_info*,int) ;
 int FUNC_14 (struct btrfs_fs_info*) ;
 int FUNC_15 (struct btrfs_fs_info*,int ,int ,scalar_t__) ;
 TYPE_2__* VAR_6 ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (int ,int *) ;
 int FUNC_19 (struct btrfs_fs_info*,char*,int ,scalar_t__,int) ;

int FUNC_20(struct btrfs_inode *VAR_7, u64 VAR_8)
{
 struct btrfs_root *VAR_9 = VAR_7->root;
 struct btrfs_fs_info *VAR_10 = VAR_9->fs_info;
 struct btrfs_space_info *VAR_11 = VAR_10->data_sinfo;
 u64 VAR_12;
 int VAR_13 = 0;
 int VAR_14 = 2;
 int VAR_15;


 VAR_8 = FUNC_0(VAR_8, VAR_10->sectorsize);

 if (FUNC_9(VAR_7)) {
  VAR_14 = 0;
  FUNC_1(VAR_6->journal_info);
 }

again:

 FUNC_16(&VAR_11->lock);
 VAR_12 = FUNC_12(VAR_11, 1);

 if (VAR_12 + VAR_8 > VAR_11->total_bytes) {
  struct btrfs_trans_handle *VAR_16;





  if (!VAR_11->full) {
   u64 VAR_17;

   VAR_11->force_alloc = VAR_2;
   FUNC_17(&VAR_11->lock);

   VAR_17 = FUNC_7(VAR_10);
   VAR_16 = FUNC_10(VAR_9);
   if (FUNC_2(VAR_16))
    return FUNC_3(VAR_16);

   VAR_13 = FUNC_5(VAR_16, VAR_17,
      VAR_3);
   FUNC_8(VAR_16);
   if (VAR_13 < 0) {
    if (VAR_13 != -VAR_4)
     return VAR_13;
    else {
     VAR_15 = 1;
     goto commit_trans;
    }
   }

   goto again;
  }






  VAR_15 = FUNC_4(
   &VAR_11->total_bytes_pinned,
   VAR_12 + VAR_8 - VAR_11->total_bytes,
   VAR_0);
  FUNC_17(&VAR_11->lock);


commit_trans:
  if (VAR_14) {
   VAR_14--;

   if (VAR_14 > 0) {
    FUNC_13(VAR_10, -1);
    FUNC_15(VAR_10, VAR_5, 0,
        (u64)-1);
   }

   VAR_16 = FUNC_10(VAR_9);
   if (FUNC_2(VAR_16))
    return FUNC_3(VAR_16);
   if (VAR_15 >= 0 ||
       FUNC_18(VAR_1,
         &VAR_16->transaction->flags) ||
       VAR_14 > 0) {
    VAR_13 = FUNC_6(VAR_16);
    if (VAR_13)
     return VAR_13;
    VAR_13 = FUNC_14(VAR_10);
    if (VAR_13)
     return VAR_13;
    goto again;
   } else {
    FUNC_8(VAR_16);
   }
  }

  FUNC_19(VAR_10,
           "space_info:enospc",
           VAR_11->flags, VAR_8, 1);
  return -VAR_4;
 }
 FUNC_11(VAR_10, VAR_11, VAR_8);
 FUNC_17(&VAR_11->lock);

 return 0;
}
