
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct stmmac_tx_queue {int cur_tx; struct dma_desc* dma_tx; } ;
struct TYPE_2__ {int vlins; } ;
struct stmmac_priv {TYPE_1__ dma_cap; } ;
struct sk_buff {scalar_t__ vlan_proto; } ;
struct dma_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct stmmac_priv*,struct dma_desc*,int,int,int) ;
 int FUNC_5 (struct stmmac_priv*,struct dma_desc*) ;

__attribute__((used)) static bool FUNC_6(struct stmmac_priv *VAR_3, struct sk_buff *VAR_4,
          struct stmmac_tx_queue *VAR_5)
{
 u16 VAR_6 = 0x0, VAR_7 = 0x0;
 u32 VAR_8 = 0x0;
 struct dma_desc *VAR_9;

 if (!VAR_3->dma_cap.vlins)
  return 0;
 if (!FUNC_3(VAR_4))
  return 0;
 if (VAR_4->vlan_proto == FUNC_1(VAR_1)) {
  VAR_7 = FUNC_2(VAR_4);
  VAR_8 = VAR_2;
 }

 VAR_6 = FUNC_2(VAR_4);

 VAR_9 = VAR_5->dma_tx + VAR_5->cur_tx;
 if (FUNC_4(VAR_3, VAR_9, VAR_6, VAR_7, VAR_8))
  return 0;

 FUNC_5(VAR_3, VAR_9);
 VAR_5->cur_tx = FUNC_0(VAR_5->cur_tx, VAR_0);
 return 1;
}
