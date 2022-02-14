
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgmac_priv {struct sk_buff** rx_skbuff; scalar_t__ dma_buf_sz; int device; struct xgmac_dma_desc* dma_rx; } ;
struct xgmac_dma_desc {int dummy; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct xgmac_dma_desc*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_3(struct xgmac_priv *VAR_3)
{
 int VAR_4;
 struct xgmac_dma_desc *VAR_5;

 if (!VAR_3->rx_skbuff)
  return;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  struct sk_buff *VAR_6 = VAR_3->rx_skbuff[VAR_4];
  if (VAR_6 == ((void*)0))
   continue;

  VAR_5 = VAR_3->dma_rx + VAR_4;
  FUNC_2(VAR_3->device, FUNC_0(VAR_5),
     VAR_3->dma_buf_sz - VAR_2, VAR_0);
  FUNC_1(VAR_6);
  VAR_3->rx_skbuff[VAR_4] = ((void*)0);
 }
}
