
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct qtnf_topaz_tx_bd {scalar_t__ info; scalar_t__ addr; } ;
struct qtnf_topaz_rx_bd {scalar_t__ info; scalar_t__ addr; } ;
struct qtnf_pcie_bus_priv {int rx_bd_num; int tx_bd_num; struct sk_buff** tx_skb; int pdev; struct sk_buff** rx_skb; } ;
struct qtnf_pcie_topaz_state {struct qtnf_topaz_tx_bd* tx_bd_vbase; struct qtnf_topaz_rx_bd* rx_bd_vbase; struct qtnf_pcie_bus_priv base; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct qtnf_pcie_topaz_state *VAR_3)
{
 struct qtnf_pcie_bus_priv *VAR_4 = &VAR_3->base;
 struct qtnf_topaz_rx_bd *VAR_5;
 struct qtnf_topaz_tx_bd *VAR_6;
 struct sk_buff *VAR_7;
 dma_addr_t VAR_8;
 int VAR_9;


 for (VAR_9 = 0; VAR_9 < VAR_4->rx_bd_num; VAR_9++) {
  if (VAR_4->rx_skb && VAR_4->rx_skb[VAR_9]) {
   VAR_5 = &VAR_3->rx_bd_vbase[VAR_9];
   VAR_7 = VAR_4->rx_skb[VAR_9];
   VAR_8 = FUNC_0(0x0, FUNC_2(VAR_5->addr));
   FUNC_3(VAR_4->pdev, VAR_8, VAR_2,
      VAR_0);
   FUNC_1(VAR_7);
   VAR_4->rx_skb[VAR_9] = ((void*)0);
   VAR_5->addr = 0;
   VAR_5->info = 0;
  }
 }


 for (VAR_9 = 0; VAR_9 < VAR_4->tx_bd_num; VAR_9++) {
  if (VAR_4->tx_skb && VAR_4->tx_skb[VAR_9]) {
   VAR_6 = &VAR_3->tx_bd_vbase[VAR_9];
   VAR_7 = VAR_4->tx_skb[VAR_9];
   VAR_8 = FUNC_0(0x0, FUNC_2(VAR_6->addr));
   FUNC_3(VAR_4->pdev, VAR_8, VAR_2,
      VAR_1);
   FUNC_1(VAR_7);
   VAR_4->tx_skb[VAR_9] = ((void*)0);
   VAR_6->addr = 0;
   VAR_6->info = 0;
  }
 }
}
