
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlgmac_ring {unsigned int dma_desc_count; } ;
struct xlgmac_desc_ops {int (* unmap_desc_data ) (struct xlgmac_pdata*,struct xlgmac_desc_data*) ;} ;
struct xlgmac_pdata {unsigned int channel_count; struct xlgmac_channel* channel_head; struct xlgmac_desc_ops desc_ops; } ;
struct xlgmac_desc_data {int dummy; } ;
struct xlgmac_channel {struct xlgmac_ring* tx_ring; } ;


 struct xlgmac_desc_data* FUNC_0 (struct xlgmac_ring*,unsigned int) ;
 int FUNC_1 (struct xlgmac_pdata*,struct xlgmac_desc_data*) ;

__attribute__((used)) static void FUNC_2(struct xlgmac_pdata *VAR_0)
{
 struct xlgmac_desc_ops *VAR_1 = &VAR_0->desc_ops;
 struct xlgmac_desc_data *VAR_2;
 struct xlgmac_channel *VAR_3;
 struct xlgmac_ring *VAR_4;
 unsigned int VAR_5, VAR_6;

 VAR_3 = VAR_0->channel_head;
 for (VAR_5 = 0; VAR_5 < VAR_0->channel_count; VAR_5++, VAR_3++) {
  VAR_4 = VAR_3->tx_ring;
  if (!VAR_4)
   break;

  for (VAR_6 = 0; VAR_6 < VAR_4->dma_desc_count; VAR_6++) {
   VAR_2 = FUNC_0(VAR_4, VAR_6);
   VAR_1->unmap_desc_data(VAR_0, VAR_2);
  }
 }
}
