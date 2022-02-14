
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msb_data {int zone_count; int block_count; int read_only; int used_blocks_bitmap; scalar_t__* free_block_count; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct msb_data *VAR_2)
{
 int VAR_3 = 0;
 int VAR_4;

 if (!VAR_1)
  return 0;

 for (VAR_4 = 0; VAR_4 < VAR_2->zone_count; VAR_4++)
  VAR_3 += VAR_2->free_block_count[VAR_4];

 if (VAR_2->block_count - FUNC_0(VAR_2->used_blocks_bitmap,
     VAR_2->block_count) == VAR_3)
  return 0;

 FUNC_1("BUG: free block counts don't match the bitmap");
 VAR_2->read_only = 1;
 return -VAR_0;
}
