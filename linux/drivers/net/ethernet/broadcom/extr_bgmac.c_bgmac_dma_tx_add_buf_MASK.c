
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bgmac_slot_info {int dma_addr; } ;
struct bgmac_dma_ring {struct bgmac_dma_desc* cpu_base; struct bgmac_slot_info* slots; } ;
struct bgmac_dma_desc {void* ctl1; void* ctl0; void* addr_high; void* addr_low; } ;
struct bgmac {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct bgmac *VAR_3, struct bgmac_dma_ring *VAR_4,
       int VAR_5, int VAR_6, u32 VAR_7)
{
 struct bgmac_slot_info *VAR_8;
 struct bgmac_dma_desc *VAR_9;
 u32 VAR_10;

 if (VAR_5 == VAR_2 - 1)
  VAR_7 |= VAR_0;

 VAR_10 = VAR_6 & VAR_1;

 VAR_8 = &VAR_4->slots[VAR_5];
 VAR_9 = &VAR_4->cpu_base[VAR_5];
 VAR_9->addr_low = FUNC_0(FUNC_1(VAR_8->dma_addr));
 VAR_9->addr_high = FUNC_0(FUNC_2(VAR_8->dma_addr));
 VAR_9->ctl0 = FUNC_0(VAR_7);
 VAR_9->ctl1 = FUNC_0(VAR_10);
}
