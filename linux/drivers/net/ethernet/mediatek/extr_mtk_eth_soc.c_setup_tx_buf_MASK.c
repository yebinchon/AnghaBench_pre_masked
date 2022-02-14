
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct mtk_tx_dma {int txd2; void* txd1; void* txd3; } ;
struct mtk_tx_buf {struct sk_buff* skb; } ;
struct mtk_eth {TYPE_1__* soc; } ;
typedef void* dma_addr_t ;
struct TYPE_2__ {int caps; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (size_t) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct mtk_tx_buf*,int ,void*) ;
 int FUNC_4 (struct mtk_tx_buf*,int ,size_t) ;

__attribute__((used)) static void FUNC_5(struct mtk_eth *VAR_6, struct mtk_tx_buf *VAR_7,
    struct mtk_tx_dma *VAR_8, dma_addr_t VAR_9,
    size_t VAR_10, int VAR_11)
{
 if (FUNC_0(VAR_6->soc->caps, VAR_1)) {
  FUNC_3(VAR_7, VAR_2, VAR_9);
  FUNC_4(VAR_7, VAR_4, VAR_10);
 } else {
  if (VAR_11 & 1) {
   VAR_8->txd3 = VAR_9;
   VAR_8->txd2 |= FUNC_2(VAR_10);
   FUNC_3(VAR_7, VAR_3, VAR_9);
   FUNC_4(VAR_7, VAR_5, VAR_10);
  } else {
   VAR_7->skb = (struct sk_buff *)VAR_0;
   VAR_8->txd1 = VAR_9;
   VAR_8->txd2 = FUNC_1(VAR_10);
   FUNC_3(VAR_7, VAR_2, VAR_9);
   FUNC_4(VAR_7, VAR_4, VAR_10);
  }
 }
}
