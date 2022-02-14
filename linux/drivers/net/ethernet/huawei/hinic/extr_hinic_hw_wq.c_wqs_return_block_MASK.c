
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hinic_wqs {int alloc_blocks_lock; int num_free_blks; TYPE_1__* free_blocks; int return_blk_pos; } ;
struct TYPE_2__ {int page_idx; int block_idx; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct hinic_wqs *VAR_1, int VAR_2,
        int VAR_3)
{
 int VAR_4;

 FUNC_0(&VAR_1->alloc_blocks_lock);

 VAR_4 = VAR_1->return_blk_pos++;
 VAR_4 &= VAR_0 - 1;

 VAR_1->free_blocks[VAR_4].page_idx = VAR_2;
 VAR_1->free_blocks[VAR_4].block_idx = VAR_3;

 VAR_1->num_free_blks++;

 FUNC_1(&VAR_1->alloc_blocks_lock);
}
