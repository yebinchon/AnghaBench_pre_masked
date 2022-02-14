
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct msb_data {int* free_block_count; int read_only; int block_count; int used_blocks_bitmap; } ;
typedef int pos ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct msb_data*,int) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static u16 FUNC_6(struct msb_data *VAR_2, int VAR_3)
{
 u16 VAR_4;
 int VAR_5 = VAR_3 * VAR_0;
 int VAR_6;

 FUNC_2(&VAR_4, sizeof(VAR_4));

 if (!VAR_2->free_block_count[VAR_3]) {
  FUNC_5("NO free blocks in the zone %d, to use for a write, (media is WORN out) switching to RO mode", VAR_3);
  VAR_2->read_only = 1;
  return VAR_1;
 }

 VAR_4 %= VAR_2->free_block_count[VAR_3];

 FUNC_0("have %d choices for a free block, selected randomly: %d",
  VAR_2->free_block_count[VAR_3], VAR_4);

 VAR_5 = FUNC_1(VAR_2->used_blocks_bitmap,
       VAR_2->block_count, VAR_5);
 for (VAR_6 = 0; VAR_6 < VAR_4; ++VAR_6)
  VAR_5 = FUNC_1(VAR_2->used_blocks_bitmap,
      VAR_2->block_count, VAR_5 + 1);

 FUNC_0("result of the free blocks scan: pba %d", VAR_5);

 if (VAR_5 == VAR_2->block_count || (FUNC_3(VAR_5)) != VAR_3) {
  FUNC_5("BUG: cant get a free block");
  VAR_2->read_only = 1;
  return VAR_1;
 }

 FUNC_4(VAR_2, VAR_5);
 return VAR_5;
}
