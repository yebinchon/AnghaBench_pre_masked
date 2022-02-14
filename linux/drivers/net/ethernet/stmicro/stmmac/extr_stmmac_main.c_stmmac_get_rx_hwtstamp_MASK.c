
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct stmmac_priv {int dev; int adv_ts; TYPE_1__* plat; int hwts_rx_en; } ;
struct skb_shared_hwtstamps {int hwtstamp; } ;
struct sk_buff {int dummy; } ;
struct dma_desc {int dummy; } ;
struct TYPE_2__ {scalar_t__ has_xgmac; scalar_t__ has_gmac4; } ;


 int FUNC_0 (struct skb_shared_hwtstamps*,int ,int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ) ;
 struct skb_shared_hwtstamps* FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct stmmac_priv*,struct dma_desc*,struct dma_desc*,int ) ;
 int FUNC_5 (struct stmmac_priv*,struct dma_desc*,int ,int *) ;

__attribute__((used)) static void FUNC_6(struct stmmac_priv *VAR_0, struct dma_desc *VAR_1,
       struct dma_desc *VAR_2, struct sk_buff *VAR_3)
{
 struct skb_shared_hwtstamps *VAR_4 = ((void*)0);
 struct dma_desc *VAR_5 = VAR_1;
 u64 VAR_6 = 0;

 if (!VAR_0->hwts_rx_en)
  return;

 if (VAR_0->plat->has_gmac4 || VAR_0->plat->has_xgmac)
  VAR_5 = VAR_2;


 if (FUNC_4(VAR_0, VAR_1, VAR_2, VAR_0->adv_ts)) {
  FUNC_5(VAR_0, VAR_5, VAR_0->adv_ts, &VAR_6);
  FUNC_1(VAR_0->dev, "get valid RX hw timestamp %llu\n", VAR_6);
  VAR_4 = FUNC_3(VAR_3);
  FUNC_0(VAR_4, 0, sizeof(struct skb_shared_hwtstamps));
  VAR_4->hwtstamp = FUNC_2(VAR_6);
 } else {
  FUNC_1(VAR_0->dev, "cannot get RX hw timestamp\n");
 }
}
