
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct stmmac_priv {int dev; int hw; int adv_ts; int hwts_tx_en; } ;
struct skb_shared_hwtstamps {int hwtstamp; } ;
struct sk_buff {int dummy; } ;
struct dma_desc {int dummy; } ;
struct TYPE_2__ {int tx_flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct skb_shared_hwtstamps*,int ,int) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,struct skb_shared_hwtstamps*) ;
 int FUNC_6 (struct stmmac_priv*,int ,int *) ;
 int FUNC_7 (struct stmmac_priv*,struct dma_desc*,int ,int *) ;
 scalar_t__ FUNC_8 (struct stmmac_priv*,struct dma_desc*) ;

__attribute__((used)) static void FUNC_9(struct stmmac_priv *VAR_1,
       struct dma_desc *VAR_2, struct sk_buff *VAR_3)
{
 struct skb_shared_hwtstamps VAR_4;
 bool VAR_5 = 0;
 u64 VAR_6 = 0;

 if (!VAR_1->hwts_tx_en)
  return;


 if (FUNC_0(!VAR_3 || !(FUNC_4(VAR_3)->tx_flags & VAR_0)))
  return;


 if (FUNC_8(VAR_1, VAR_2)) {
  FUNC_7(VAR_1, VAR_2, VAR_1->adv_ts, &VAR_6);
  VAR_5 = 1;
 } else if (!FUNC_6(VAR_1, VAR_1->hw, &VAR_6)) {
  VAR_5 = 1;
 }

 if (VAR_5) {
  FUNC_1(&VAR_4, 0, sizeof(struct skb_shared_hwtstamps));
  VAR_4.hwtstamp = FUNC_3(VAR_6);

  FUNC_2(VAR_1->dev, "get valid TX hw timestamp %llu\n", VAR_6);

  FUNC_5(VAR_3, &VAR_4);
 }
}
