
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct device {int dummy; } ;
struct bgmac_slot_info {int dma_addr; scalar_t__ skb; } ;
struct bgmac_dma_ring {struct bgmac_slot_info* slots; struct bgmac_dma_desc* cpu_base; } ;
struct bgmac_dma_desc {int ctl1; } ;
struct bgmac {struct device* dma_dev; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct device*,int ,unsigned int,int ) ;
 int FUNC_2 (struct device*,int ,unsigned int,int ) ;
 unsigned int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct bgmac *VAR_3,
       struct bgmac_dma_ring *VAR_4)
{
 struct device *VAR_5 = VAR_3->dma_dev;
 struct bgmac_dma_desc *VAR_6 = VAR_4->cpu_base;
 struct bgmac_slot_info *VAR_7;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  u32 VAR_9 = FUNC_3(VAR_6[VAR_8].ctl1);
  unsigned int VAR_10 = VAR_9 & VAR_0;

  VAR_7 = &VAR_4->slots[VAR_8];
  FUNC_0(VAR_7->skb);

  if (!VAR_7->dma_addr)
   continue;

  if (VAR_7->skb)
   FUNC_2(VAR_5, VAR_7->dma_addr,
      VAR_10, VAR_2);
  else
   FUNC_1(VAR_5, VAR_7->dma_addr,
           VAR_10, VAR_2);
 }
}
