
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct btrfs_block_rsv {scalar_t__ reserved; scalar_t__ size; int lock; } ;
struct btrfs_fs_info {int extent_root; struct btrfs_block_rsv delayed_refs_rsv; } ;
typedef enum btrfs_reserve_flush_enum { ____Placeholder_btrfs_reserve_flush_enum } btrfs_reserve_flush_enum ;


 int VAR_0 ;
 int FUNC_0 (struct btrfs_block_rsv*,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (struct btrfs_fs_info*,int) ;
 int FUNC_2 (int ,struct btrfs_block_rsv*,scalar_t__,int) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct btrfs_fs_info*,char*,int ,scalar_t__,int) ;

int FUNC_7(struct btrfs_fs_info *VAR_1,
      enum btrfs_reserve_flush_enum VAR_2)
{
 struct btrfs_block_rsv *VAR_3 = &VAR_1->delayed_refs_rsv;
 u64 VAR_4 = FUNC_1(VAR_1, 1);
 u64 VAR_5 = 0;
 int VAR_6 = -VAR_0;

 FUNC_4(&VAR_3->lock);
 if (VAR_3->reserved < VAR_3->size) {
  VAR_5 = VAR_3->size - VAR_3->reserved;
  VAR_5 = FUNC_3(VAR_5, VAR_4);
 }
 FUNC_5(&VAR_3->lock);

 if (!VAR_5)
  return 0;

 VAR_6 = FUNC_2(VAR_1->extent_root, VAR_3,
        VAR_5, VAR_2);
 if (VAR_6)
  return VAR_6;
 FUNC_0(VAR_3, VAR_5, 0);
 FUNC_6(VAR_1, "delayed_refs_rsv",
          0, VAR_5, 1);
 return 0;
}
