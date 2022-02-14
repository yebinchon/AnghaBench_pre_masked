
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mvs_prd {int len; int addr; } ;
struct mvs_info {int bulk_buffer_dma; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct mvs_info *VAR_1, u32 VAR_2,
    int VAR_3, int VAR_4, void *VAR_5)
{
 int VAR_6;
 struct mvs_prd *VAR_7 = VAR_5;
 dma_addr_t VAR_8 = VAR_1->bulk_buffer_dma;

 VAR_7 += VAR_4;
 for (VAR_6 = 0; VAR_6 < VAR_0 - VAR_4; VAR_6++) {
  VAR_7->addr = FUNC_1(VAR_8);
  VAR_7->len = FUNC_0(VAR_3);
  ++VAR_7;
 }
}
