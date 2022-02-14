
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hinic_wqs {int num_pages; int return_blk_pos; int num_free_blks; int alloc_blocks_lock; scalar_t__ alloc_blk_pos; TYPE_1__* free_blocks; } ;
struct TYPE_2__ {int page_idx; int block_idx; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;

__attribute__((used)) static void FUNC_1(struct hinic_wqs *VAR_1)
{
 int VAR_2, VAR_3, VAR_4 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_pages; VAR_2++) {
  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
   VAR_1->free_blocks[VAR_4].page_idx = VAR_2;
   VAR_1->free_blocks[VAR_4].block_idx = VAR_3;
   VAR_4++;
  }
 }

 VAR_1->alloc_blk_pos = 0;
 VAR_1->return_blk_pos = VAR_4;
 VAR_1->num_free_blks = VAR_4;

 FUNC_0(&VAR_1->alloc_blocks_lock, 1);
}
