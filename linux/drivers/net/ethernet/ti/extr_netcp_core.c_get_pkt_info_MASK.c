
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct knav_dma_desc {int next_desc; int buff; int buff_len; } ;
typedef void* dma_addr_t ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(dma_addr_t *VAR_0, u32 *VAR_1, dma_addr_t *VAR_2,
    struct knav_dma_desc *VAR_3)
{
 *VAR_1 = FUNC_0(VAR_3->buff_len);
 *VAR_0 = FUNC_0(VAR_3->buff);
 *VAR_2 = FUNC_0(VAR_3->next_desc);
}
