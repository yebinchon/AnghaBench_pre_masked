
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct btrfs_block_rsv {scalar_t__ reserved; int lock; int size; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct btrfs_block_rsv *VAR_1, int VAR_2)
{
 u64 VAR_3 = 0;
 int VAR_4 = -VAR_0;

 if (!VAR_1)
  return 0;

 FUNC_1(&VAR_1->lock);
 VAR_3 = FUNC_0(VAR_1->size, VAR_2);
 if (VAR_1->reserved >= VAR_3)
  VAR_4 = 0;
 FUNC_2(&VAR_1->lock);

 return VAR_4;
}
