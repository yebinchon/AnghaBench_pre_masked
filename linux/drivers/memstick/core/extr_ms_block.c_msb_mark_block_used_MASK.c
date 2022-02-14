
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msb_data {int read_only; int * free_block_count; int used_blocks_bitmap; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct msb_data*) ;
 int FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (int,int ) ;

__attribute__((used)) static void FUNC_5(struct msb_data *VAR_0, int VAR_1)
{
 int VAR_2 = FUNC_1(VAR_1);

 if (FUNC_4(VAR_1, VAR_0->used_blocks_bitmap)) {
  FUNC_3(
  "BUG: attempt to mark already used pba %d as used", VAR_1);
  VAR_0->read_only = 1;
  return;
 }

 if (FUNC_2(VAR_0))
  return;


 FUNC_0(VAR_1, VAR_0->used_blocks_bitmap);
 VAR_0->free_block_count[VAR_2]--;
}
