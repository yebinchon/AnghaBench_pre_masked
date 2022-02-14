
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct btrfs_root {int dummy; } ;
struct btrfs_block_rsv {scalar_t__ reserved; int lock; } ;
typedef enum btrfs_reserve_flush_enum { ____Placeholder_btrfs_reserve_flush_enum } btrfs_reserve_flush_enum ;


 int VAR_0 ;
 int FUNC_0 (struct btrfs_block_rsv*,scalar_t__,int) ;
 int FUNC_1 (struct btrfs_root*,struct btrfs_block_rsv*,scalar_t__,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct btrfs_root *VAR_1,
      struct btrfs_block_rsv *VAR_2, u64 VAR_3,
      enum btrfs_reserve_flush_enum VAR_4)
{
 u64 VAR_5 = 0;
 int VAR_6 = -VAR_0;

 if (!VAR_2)
  return 0;

 FUNC_2(&VAR_2->lock);
 VAR_5 = VAR_3;
 if (VAR_2->reserved >= VAR_5)
  VAR_6 = 0;
 else
  VAR_5 -= VAR_2->reserved;
 FUNC_3(&VAR_2->lock);

 if (!VAR_6)
  return 0;

 VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_5, VAR_4);
 if (!VAR_6) {
  FUNC_0(VAR_2, VAR_5, 0);
  return 0;
 }

 return VAR_6;
}
