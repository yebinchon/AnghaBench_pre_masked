
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {scalar_t__ dev; int len; } ;
struct qtnf_pearl_tx_bd {int addr; int addr_h; } ;
struct qtnf_pcie_bus_priv {int tx_bd_num; int tx_bd_r_index; int tx_reclaim_done; int tx_reclaim_lock; int tx_reclaim_req; struct sk_buff** tx_skb; scalar_t__ tx_stopped; int pdev; } ;
struct qtnf_pcie_pearl_state {struct qtnf_pearl_tx_bd* tx_bd_vbase; int pcie_reg_base; struct qtnf_pcie_bus_priv base; } ;
typedef int dma_addr_t ;


 scalar_t__ FUNC_0 (int,int,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (scalar_t__,struct sk_buff*) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 scalar_t__ FUNC_12 (scalar_t__) ;

__attribute__((used)) static void FUNC_13(struct qtnf_pcie_pearl_state *VAR_1)
{
 struct qtnf_pcie_bus_priv *VAR_2 = &VAR_1->base;
 struct qtnf_pearl_tx_bd *VAR_3;
 struct sk_buff *VAR_4;
 unsigned long VAR_5;
 dma_addr_t VAR_6;
 u32 VAR_7;
 int VAR_8 = 0;
 int VAR_9;

 FUNC_10(&VAR_2->tx_reclaim_lock, VAR_5);

 VAR_7 = FUNC_9(FUNC_1(VAR_1->pcie_reg_base))
   & (VAR_2->tx_bd_num - 1);

 VAR_9 = VAR_2->tx_bd_r_index;

 while (FUNC_0(VAR_7, VAR_9, VAR_2->tx_bd_num)) {
  VAR_4 = VAR_2->tx_skb[VAR_9];
  if (FUNC_5(VAR_4)) {
   VAR_3 = &VAR_1->tx_bd_vbase[VAR_9];
   VAR_6 = FUNC_2(FUNC_4(VAR_3->addr_h),
           FUNC_4(VAR_3->addr));
   FUNC_6(VAR_2->pdev, VAR_6, VAR_4->len,
      VAR_0);

   if (VAR_4->dev) {
    FUNC_7(VAR_4->dev, VAR_4);
    if (FUNC_12(VAR_2->tx_stopped)) {
     FUNC_8(VAR_4->dev);
     VAR_2->tx_stopped = 0;
    }
   }

   FUNC_3(VAR_4);
  }

  VAR_2->tx_skb[VAR_9] = ((void*)0);
  VAR_8++;

  if (++VAR_9 >= VAR_2->tx_bd_num)
   VAR_9 = 0;
 }

 VAR_2->tx_reclaim_done += VAR_8;
 VAR_2->tx_reclaim_req++;
 VAR_2->tx_bd_r_index = VAR_9;

 FUNC_11(&VAR_2->tx_reclaim_lock, VAR_5);
}
