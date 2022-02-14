
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct extent_buffer {int start; } ;
struct btrfs_trans_handle {scalar_t__ transid; } ;
struct btrfs_root {scalar_t__ last_trans; int state; struct btrfs_fs_info* fs_info; } ;
struct btrfs_fs_info {TYPE_2__* fs_devices; TYPE_1__* running_transaction; } ;
struct btrfs_disk_key {int dummy; } ;
struct TYPE_4__ {int metadata_uuid; } ;
struct TYPE_3__ {scalar_t__ transid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct extent_buffer*) ;
 int FUNC_1 (struct extent_buffer*) ;
 int FUNC_2 (int) ;
 struct extent_buffer* FUNC_3 (struct btrfs_trans_handle*,struct btrfs_root*,int ,int ,struct btrfs_disk_key*,int,int ,int ) ;
 int FUNC_4 (struct extent_buffer*,int) ;
 scalar_t__ FUNC_5 (struct extent_buffer*) ;
 int FUNC_6 (struct extent_buffer*) ;
 int FUNC_7 (struct btrfs_trans_handle*,struct btrfs_root*,struct extent_buffer*,int) ;
 int FUNC_8 (struct extent_buffer*,struct btrfs_disk_key*,int ) ;
 int FUNC_9 (struct extent_buffer*) ;
 int FUNC_10 (struct extent_buffer*,struct btrfs_disk_key*,int ) ;
 int FUNC_11 (struct extent_buffer*,int ) ;
 int FUNC_12 (struct extent_buffer*,int ) ;
 int FUNC_13 (struct extent_buffer*,int) ;
 int FUNC_14 (struct extent_buffer*,scalar_t__) ;
 int FUNC_15 (struct extent_buffer*,int ) ;
 int FUNC_16 (struct extent_buffer*,struct extent_buffer*) ;
 scalar_t__ FUNC_17 (int ,int *) ;
 int FUNC_18 (struct extent_buffer*,int ) ;

int FUNC_19(struct btrfs_trans_handle *VAR_5,
        struct btrfs_root *VAR_6,
        struct extent_buffer *VAR_7,
        struct extent_buffer **VAR_8, u64 VAR_9)
{
 struct btrfs_fs_info *VAR_10 = VAR_6->fs_info;
 struct extent_buffer *VAR_11;
 int VAR_12 = 0;
 int VAR_13;
 struct btrfs_disk_key VAR_14;

 FUNC_2(FUNC_17(VAR_3, &VAR_6->state) &&
  VAR_5->transid != VAR_10->running_transaction->transid);
 FUNC_2(FUNC_17(VAR_3, &VAR_6->state) &&
  VAR_5->transid != VAR_6->last_trans);

 VAR_13 = FUNC_6(VAR_7);
 if (VAR_13 == 0)
  FUNC_8(VAR_7, &VAR_14, 0);
 else
  FUNC_10(VAR_7, &VAR_14, 0);

 VAR_11 = FUNC_3(VAR_5, VAR_6, 0, VAR_9,
   &VAR_14, VAR_13, VAR_7->start, 0);
 if (FUNC_0(VAR_11))
  return FUNC_1(VAR_11);

 FUNC_16(VAR_11, VAR_7);
 FUNC_12(VAR_11, VAR_11->start);
 FUNC_14(VAR_11, VAR_5->transid);
 FUNC_11(VAR_11, VAR_2);
 FUNC_4(VAR_11, VAR_1 |
         VAR_0);
 if (VAR_9 == VAR_4)
  FUNC_13(VAR_11, VAR_0);
 else
  FUNC_15(VAR_11, VAR_9);

 FUNC_18(VAR_11, VAR_10->fs_devices->metadata_uuid);

 FUNC_2(FUNC_5(VAR_7) > VAR_5->transid);
 if (VAR_9 == VAR_4)
  VAR_12 = FUNC_7(VAR_5, VAR_6, VAR_11, 1);
 else
  VAR_12 = FUNC_7(VAR_5, VAR_6, VAR_11, 0);

 if (VAR_12)
  return VAR_12;

 FUNC_9(VAR_11);
 *VAR_8 = VAR_11;
 return 0;
}
