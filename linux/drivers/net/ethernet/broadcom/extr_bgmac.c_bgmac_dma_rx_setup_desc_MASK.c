
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct bgmac_dma_ring {int end; TYPE_1__* slots; struct bgmac_dma_desc* cpu_base; } ;
struct bgmac_dma_desc {void* ctl1; void* ctl0; void* addr_high; void* addr_low; } ;
struct bgmac {int dummy; } ;
struct TYPE_2__ {int dma_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct bgmac *VAR_4,
        struct bgmac_dma_ring *VAR_5, int VAR_6)
{
 struct bgmac_dma_desc *VAR_7 = VAR_5->cpu_base + VAR_6;
 u32 VAR_8 = 0, VAR_9 = 0;

 if (VAR_6 == VAR_3 - 1)
  VAR_8 |= VAR_0;
 VAR_9 |= VAR_2 & VAR_1;





 VAR_7->addr_low = FUNC_0(FUNC_1(VAR_5->slots[VAR_6].dma_addr));
 VAR_7->addr_high = FUNC_0(FUNC_2(VAR_5->slots[VAR_6].dma_addr));
 VAR_7->ctl0 = FUNC_0(VAR_8);
 VAR_7->ctl1 = FUNC_0(VAR_9);

 VAR_5->end = VAR_6;
}
