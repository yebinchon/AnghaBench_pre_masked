
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_tx_ring {int phys; void* dma; } ;



__attribute__((used)) static inline void *FUNC_0(struct mtk_tx_ring *VAR_0, u32 VAR_1)
{
 void *VAR_2 = VAR_0->dma;

 return VAR_2 + (VAR_1 - VAR_0->phys);
}
