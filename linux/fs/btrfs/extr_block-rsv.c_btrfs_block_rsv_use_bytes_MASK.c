
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct btrfs_block_rsv {scalar_t__ reserved; scalar_t__ size; int lock; scalar_t__ full; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct btrfs_block_rsv *VAR_1, u64 VAR_2)
{
 int VAR_3 = -VAR_0;

 FUNC_0(&VAR_1->lock);
 if (VAR_1->reserved >= VAR_2) {
  VAR_1->reserved -= VAR_2;
  if (VAR_1->reserved < VAR_1->size)
   VAR_1->full = 0;
  VAR_3 = 0;
 }
 FUNC_1(&VAR_1->lock);
 return VAR_3;
}
