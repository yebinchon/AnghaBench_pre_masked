
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct btrfs_root {int dummy; } ;
struct btrfs_block_rsv {int dummy; } ;
typedef enum btrfs_reserve_flush_enum { ____Placeholder_btrfs_reserve_flush_enum } btrfs_reserve_flush_enum ;


 int FUNC_0 (struct btrfs_block_rsv*,scalar_t__,int) ;
 int FUNC_1 (struct btrfs_root*,struct btrfs_block_rsv*,scalar_t__,int) ;

int FUNC_2(struct btrfs_root *VAR_0,
   struct btrfs_block_rsv *VAR_1, u64 VAR_2,
   enum btrfs_reserve_flush_enum VAR_3)
{
 int VAR_4;

 if (VAR_2 == 0)
  return 0;

 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 if (!VAR_4)
  FUNC_0(VAR_1, VAR_2, 1);

 return VAR_4;
}
