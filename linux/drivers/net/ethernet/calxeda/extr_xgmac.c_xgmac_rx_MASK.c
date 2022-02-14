
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgmac_priv {unsigned int rx_tail; int napi; int dev; scalar_t__ dma_buf_sz; int device; struct sk_buff** rx_skbuff; struct xgmac_dma_desc* dma_rx; int rx_head; } ;
struct xgmac_dma_desc {int dummy; } ;
struct sk_buff {int ip_summed; int protocol; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct xgmac_dma_desc*) ;
 scalar_t__ FUNC_1 (struct xgmac_dma_desc*) ;
 int FUNC_2 (struct xgmac_dma_desc*) ;
 int FUNC_3 (struct xgmac_priv*,struct xgmac_dma_desc*) ;
 int FUNC_4 (int ,unsigned int,int ) ;
 unsigned int FUNC_5 (unsigned int,int ) ;
 int FUNC_6 (int ,int ,scalar_t__,int ) ;
 int FUNC_7 (struct sk_buff*,int ) ;
 int FUNC_8 (int *,struct sk_buff*) ;
 int FUNC_9 (int ,char*,int,int) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*,int) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (struct xgmac_priv*) ;

__attribute__((used)) static int FUNC_15(struct xgmac_priv *VAR_4, int VAR_5)
{
 unsigned int VAR_6;
 unsigned int VAR_7 = 0;
 struct xgmac_dma_desc *VAR_8;

 while (VAR_7 < VAR_5) {
  int VAR_9;
  struct sk_buff *VAR_10;
  int VAR_11;

  if (!FUNC_4(VAR_4->rx_head, VAR_4->rx_tail, VAR_2))
   break;

  VAR_6 = VAR_4->rx_tail;
  VAR_8 = VAR_4->dma_rx + VAR_6;
  if (FUNC_1(VAR_8))
   break;

  VAR_7++;
  VAR_4->rx_tail = FUNC_5(VAR_4->rx_tail, VAR_2);


  VAR_9 = FUNC_3(VAR_4, VAR_8);
  if (VAR_9 < 0)
   continue;

  VAR_10 = VAR_4->rx_skbuff[VAR_6];
  if (FUNC_13(!VAR_10)) {
   FUNC_10(VAR_4->dev, "Inconsistent Rx descriptor chain\n");
   break;
  }
  VAR_4->rx_skbuff[VAR_6] = ((void*)0);

  VAR_11 = FUNC_2(VAR_8);
  FUNC_9(VAR_4->dev, "RX frame size %d, COE status: %d\n",
   VAR_11, VAR_9);

  FUNC_12(VAR_10, VAR_11);
  FUNC_6(VAR_4->device, FUNC_0(VAR_8),
     VAR_4->dma_buf_sz - VAR_3, VAR_1);

  VAR_10->protocol = FUNC_7(VAR_10, VAR_4->dev);
  VAR_10->ip_summed = VAR_9;
  if (VAR_9 == VAR_0)
   FUNC_11(VAR_10);
  else
   FUNC_8(&VAR_4->napi, VAR_10);
 }

 FUNC_14(VAR_4);

 return VAR_7;
}
