
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {scalar_t__ dev; int len; } ;
struct qtnf_topaz_tx_bd {int addr; } ;
struct qtnf_pcie_bus_priv {int tx_bd_r_index; int tx_bd_w_index; int tx_bd_num; int tx_reclaim_done; int tx_reclaim_lock; int tx_reclaim_req; struct sk_buff** tx_skb; scalar_t__ tx_stopped; int pdev; int sysctl_bar; } ;
struct qtnf_pcie_topaz_state {struct qtnf_topaz_tx_bd* tx_bd_vbase; int ep_next_rx_pkt; struct qtnf_pcie_bus_priv base; } ;
typedef int dma_addr_t ;


 scalar_t__ FUNC_0 (int,int,int) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (scalar_t__,struct sk_buff*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 int FUNC_14 (int ,int ) ;

__attribute__((used)) static void FUNC_15(struct qtnf_pcie_topaz_state *VAR_2)
{
 struct qtnf_pcie_bus_priv *VAR_3 = &VAR_2->base;
 struct qtnf_topaz_tx_bd *VAR_4;
 struct sk_buff *VAR_5;
 unsigned long VAR_6;
 dma_addr_t VAR_7;
 u32 VAR_8;
 int VAR_9 = 0;
 int VAR_10;

 FUNC_11(&VAR_3->tx_reclaim_lock, VAR_6);

 VAR_8 = FUNC_10(VAR_2->ep_next_rx_pkt);
 VAR_10 = VAR_3->tx_bd_r_index;

 if (FUNC_0(VAR_3->tx_bd_w_index, VAR_8, VAR_3->tx_bd_num))
  FUNC_14(FUNC_2(VAR_1),
         FUNC_3(VAR_3->sysctl_bar));

 while (FUNC_0(VAR_8, VAR_10, VAR_3->tx_bd_num)) {
  VAR_5 = VAR_3->tx_skb[VAR_10];

  if (FUNC_6(VAR_5)) {
   VAR_4 = &VAR_2->tx_bd_vbase[VAR_10];
   VAR_7 = FUNC_1(0x0, FUNC_5(VAR_4->addr));
   FUNC_7(VAR_3->pdev, VAR_7, VAR_5->len,
      VAR_0);

   if (VAR_5->dev) {
    FUNC_8(VAR_5->dev, VAR_5);
    if (FUNC_13(VAR_3->tx_stopped)) {
     FUNC_9(VAR_5->dev);
     VAR_3->tx_stopped = 0;
    }
   }

   FUNC_4(VAR_5);
  }

  VAR_3->tx_skb[VAR_10] = ((void*)0);
  VAR_9++;

  if (++VAR_10 >= VAR_3->tx_bd_num)
   VAR_10 = 0;
 }

 VAR_3->tx_reclaim_done += VAR_9;
 VAR_3->tx_reclaim_req++;
 VAR_3->tx_bd_r_index = VAR_10;

 FUNC_12(&VAR_3->tx_reclaim_lock, VAR_6);
}
