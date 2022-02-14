
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct sk_buff {scalar_t__ len; } ;
struct mtk_tx_ring {size_t cpu_idx; int dma_size; int free_count; struct mtk_tx_dma* last_free; struct mtk_tx_dma* dma; struct mtk_tx_buf* buf; } ;
struct mtk_tx_dma {int dummy; } ;
struct mtk_tx_buf {struct sk_buff* skb; } ;
struct mtk_eth {struct mtk_tx_ring tx_ring; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_0 (size_t,int ) ;
 int FUNC_1 (int *) ;
 size_t FUNC_2 (struct mtk_eth*,int ) ;
 int FUNC_3 (struct mtk_eth*,struct mtk_tx_buf*) ;

__attribute__((used)) static int FUNC_4(struct mtk_eth *VAR_2, int VAR_3,
       unsigned int *VAR_4, unsigned int *VAR_5)
{
 struct mtk_tx_ring *VAR_6 = &VAR_2->tx_ring;
 struct mtk_tx_dma *VAR_7;
 struct sk_buff *VAR_8;
 struct mtk_tx_buf *VAR_9;
 u32 VAR_10, VAR_11;

 VAR_10 = VAR_6->cpu_idx;
 VAR_11 = FUNC_2(VAR_2, VAR_0);

 while ((VAR_10 != VAR_11) && VAR_3) {
  VAR_9 = &VAR_6->buf[VAR_10];
  VAR_8 = VAR_9->skb;
  if (!VAR_8)
   break;

  if (VAR_8 != (struct sk_buff *)VAR_1) {
   VAR_5[0] += VAR_8->len;
   VAR_4[0]++;
   VAR_3--;
  }

  FUNC_3(VAR_2, VAR_9);

  VAR_7 = &VAR_6->dma[VAR_10];
  VAR_6->last_free = VAR_7;
  FUNC_1(&VAR_6->free_count);

  VAR_10 = FUNC_0(VAR_10, VAR_6->dma_size);
 }

 VAR_6->cpu_idx = VAR_10;

 return VAR_3;
}
