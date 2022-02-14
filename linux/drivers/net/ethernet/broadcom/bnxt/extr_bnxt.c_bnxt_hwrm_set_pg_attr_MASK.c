
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bnxt_ring_mem_info {int depth; int * dma_arr; int pg_tbl_map; } ;
typedef int __le64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct bnxt_ring_mem_info *VAR_2, u8 *VAR_3,
      __le64 *VAR_4)
{
 u8 VAR_5 = 0;

 if (VAR_0 == 13)
  VAR_5 = 1 << 4;
 else if (VAR_1 == 16)
  VAR_5 = 2 << 4;

 *VAR_3 = VAR_5;
 if (VAR_2->depth >= 1) {
  if (VAR_2->depth == 2)
   *VAR_3 |= 2;
  else
   *VAR_3 |= 1;
  *VAR_4 = FUNC_0(VAR_2->pg_tbl_map);
 } else {
  *VAR_4 = FUNC_0(VAR_2->dma_arr[0]);
 }
}
