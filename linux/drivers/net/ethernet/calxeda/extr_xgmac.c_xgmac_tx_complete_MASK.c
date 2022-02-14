
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgmac_priv {unsigned int tx_tail; int dev; struct sk_buff** tx_skbuff; int device; int tx_head; struct xgmac_dma_desc* dma_tx; } ;
struct xgmac_dma_desc {int dummy; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct xgmac_dma_desc*) ;
 int FUNC_1 (struct xgmac_dma_desc*) ;
 scalar_t__ FUNC_2 (struct xgmac_dma_desc*) ;
 scalar_t__ FUNC_3 (struct xgmac_dma_desc*) ;
 scalar_t__ FUNC_4 (struct xgmac_dma_desc*) ;
 int FUNC_5 (struct xgmac_priv*,struct xgmac_dma_desc*) ;
 int FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (int ,unsigned int,int ) ;
 unsigned int FUNC_8 (unsigned int,int ) ;
 int FUNC_9 (int ,int ,int ,int ) ;
 int FUNC_10 (int ,int ,int ,int ) ;
 int FUNC_11 (int ,char*,int ,unsigned int) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 () ;
 scalar_t__ FUNC_15 (struct xgmac_priv*) ;
 scalar_t__ FUNC_16 (int) ;

__attribute__((used)) static void FUNC_17(struct xgmac_priv *VAR_3)
{
 while (FUNC_7(VAR_3->tx_head, VAR_3->tx_tail, VAR_1)) {
  unsigned int VAR_4 = VAR_3->tx_tail;
  struct sk_buff *VAR_5 = VAR_3->tx_skbuff[VAR_4];
  struct xgmac_dma_desc *VAR_6 = VAR_3->dma_tx + VAR_4;


  if (FUNC_2(VAR_6))
   break;

  FUNC_11(VAR_3->dev, "tx ring: curr %d, dirty %d\n",
   VAR_3->tx_head, VAR_3->tx_tail);

  if (FUNC_3(VAR_6))
   FUNC_10(VAR_3->device, FUNC_0(VAR_6),
      FUNC_1(VAR_6), VAR_0);
  else
   FUNC_9(VAR_3->device, FUNC_0(VAR_6),
           FUNC_1(VAR_6), VAR_0);


  if (FUNC_4(VAR_6)) {
   FUNC_5(VAR_3, VAR_6);
   FUNC_6(VAR_5);
  }

  VAR_3->tx_skbuff[VAR_4] = ((void*)0);
  VAR_3->tx_tail = FUNC_8(VAR_4, VAR_1);
 }


 FUNC_14();
 if (FUNC_16(FUNC_12(VAR_3->dev) &&
     (FUNC_15(VAR_3) > VAR_2)))
  FUNC_13(VAR_3->dev);
}
