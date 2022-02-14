
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlgmac_ring {int dma_desc_head_addr; unsigned int dma_desc_count; scalar_t__ dirty; scalar_t__ cur; struct xlgmac_dma_desc* dma_desc_head; } ;
struct xlgmac_hw_ops {int (* rx_desc_init ) (struct xlgmac_channel*) ;} ;
struct xlgmac_pdata {unsigned int channel_count; struct xlgmac_channel* channel_head; struct xlgmac_hw_ops hw_ops; } ;
struct xlgmac_dma_desc {int dummy; } ;
struct xlgmac_desc_data {int dma_desc_addr; struct xlgmac_dma_desc* dma_desc; } ;
struct xlgmac_channel {struct xlgmac_ring* rx_ring; } ;
typedef int dma_addr_t ;


 struct xlgmac_desc_data* FUNC_0 (struct xlgmac_ring*,unsigned int) ;
 int FUNC_1 (struct xlgmac_channel*) ;
 scalar_t__ FUNC_2 (struct xlgmac_pdata*,struct xlgmac_ring*,struct xlgmac_desc_data*) ;

__attribute__((used)) static void FUNC_3(struct xlgmac_pdata *VAR_0)
{
 struct xlgmac_hw_ops *VAR_1 = &VAR_0->hw_ops;
 struct xlgmac_desc_data *VAR_2;
 struct xlgmac_dma_desc *VAR_3;
 struct xlgmac_channel *VAR_4;
 struct xlgmac_ring *VAR_5;
 dma_addr_t VAR_6;
 unsigned int VAR_7, VAR_8;

 VAR_4 = VAR_0->channel_head;
 for (VAR_7 = 0; VAR_7 < VAR_0->channel_count; VAR_7++, VAR_4++) {
  VAR_5 = VAR_4->rx_ring;
  if (!VAR_5)
   break;

  VAR_3 = VAR_5->dma_desc_head;
  VAR_6 = VAR_5->dma_desc_head_addr;

  for (VAR_8 = 0; VAR_8 < VAR_5->dma_desc_count; VAR_8++) {
   VAR_2 = FUNC_0(VAR_5, VAR_8);

   VAR_2->dma_desc = VAR_3;
   VAR_2->dma_desc_addr = VAR_6;

   if (FUNC_2(VAR_0, VAR_5, VAR_2))
    break;

   VAR_3++;
   VAR_6 += sizeof(struct xlgmac_dma_desc);
  }

  VAR_5->cur = 0;
  VAR_5->dirty = 0;

  VAR_1->rx_desc_init(VAR_4);
 }
}
