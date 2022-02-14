
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct knav_dma_desc {int orig_len; int orig_buff; } ;
typedef void* dma_addr_t ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(dma_addr_t *VAR_0, u32 *VAR_1,
        struct knav_dma_desc *VAR_2)
{
 *VAR_0 = FUNC_0(VAR_2->orig_buff);
 *VAR_1 = FUNC_0(VAR_2->orig_len);
}
