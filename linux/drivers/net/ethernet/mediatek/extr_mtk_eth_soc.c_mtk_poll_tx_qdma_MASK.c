
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sk_buff {scalar_t__ len; } ;
struct mtk_tx_ring {int free_count; struct mtk_tx_dma* last_free; } ;
struct mtk_tx_dma {scalar_t__ txd2; int txd3; } ;
struct mtk_tx_buf {int flags; struct sk_buff* skb; } ;
struct mtk_eth {struct mtk_tx_ring tx_ring; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 struct mtk_tx_buf* FUNC_1 (struct mtk_tx_ring*,struct mtk_tx_dma*) ;
 struct mtk_tx_dma* FUNC_2 (struct mtk_tx_ring*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct mtk_eth*,int ) ;
 int FUNC_4 (struct mtk_eth*,struct mtk_tx_buf*) ;
 int FUNC_5 (struct mtk_eth*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_6(struct mtk_eth *VAR_5, int VAR_6,
       unsigned int *VAR_7, unsigned int *VAR_8)
{
 struct mtk_tx_ring *VAR_9 = &VAR_5->tx_ring;
 struct mtk_tx_dma *VAR_10;
 struct sk_buff *VAR_11;
 struct mtk_tx_buf *VAR_12;
 u32 VAR_13, VAR_14;

 VAR_13 = FUNC_3(VAR_5, VAR_1);
 VAR_14 = FUNC_3(VAR_5, VAR_2);

 VAR_10 = FUNC_2(VAR_9, VAR_13);

 while ((VAR_13 != VAR_14) && VAR_6) {
  u32 VAR_15 = VAR_10->txd2;
  int VAR_16 = 0;

  VAR_10 = FUNC_2(VAR_9, VAR_10->txd2);
  if ((VAR_10->txd3 & VAR_4) == 0)
   break;

  VAR_12 = FUNC_1(VAR_9, VAR_10);
  if (VAR_12->flags & VAR_3)
   VAR_16 = 1;

  VAR_11 = VAR_12->skb;
  if (!VAR_11)
   break;

  if (VAR_11 != (struct sk_buff *)VAR_0) {
   VAR_8[VAR_16] += VAR_11->len;
   VAR_7[VAR_16]++;
   VAR_6--;
  }
  FUNC_4(VAR_5, VAR_12);

  VAR_9->last_free = VAR_10;
  FUNC_0(&VAR_9->free_count);

  VAR_13 = VAR_15;
 }

 FUNC_5(VAR_5, VAR_13, VAR_1);

 return VAR_6;
}
