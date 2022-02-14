
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct btrfs_block_rsv {scalar_t__ reserved; scalar_t__ size; int full; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct btrfs_block_rsv *VAR_0,
          u64 VAR_1, bool VAR_2)
{
 FUNC_0(&VAR_0->lock);
 VAR_0->reserved += VAR_1;
 if (VAR_2)
  VAR_0->size += VAR_1;
 else if (VAR_0->reserved >= VAR_0->size)
  VAR_0->full = 1;
 FUNC_1(&VAR_0->lock);
}
