
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hinic_wqs {scalar_t__ num_free_blks; int alloc_blocks_lock; TYPE_1__* free_blocks; int alloc_blk_pos; } ;
struct TYPE_2__ {int page_idx; int block_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct hinic_wqs *VAR_2, int *VAR_3,
     int *VAR_4)
{
 int VAR_5;

 FUNC_0(&VAR_2->alloc_blocks_lock);

 VAR_2->num_free_blks--;

 if (VAR_2->num_free_blks < 0) {
  VAR_2->num_free_blks++;
  FUNC_1(&VAR_2->alloc_blocks_lock);
  return -VAR_0;
 }

 VAR_5 = VAR_2->alloc_blk_pos++;
 VAR_5 &= VAR_1 - 1;

 *VAR_3 = VAR_2->free_blocks[VAR_5].page_idx;
 *VAR_4 = VAR_2->free_blocks[VAR_5].block_idx;

 VAR_2->free_blocks[VAR_5].page_idx = -1;
 VAR_2->free_blocks[VAR_5].block_idx = -1;

 FUNC_1(&VAR_2->alloc_blocks_lock);
 return 0;
}
