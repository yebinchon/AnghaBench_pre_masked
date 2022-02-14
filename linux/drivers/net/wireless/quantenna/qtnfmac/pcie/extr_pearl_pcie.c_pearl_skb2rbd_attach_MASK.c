
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct sk_buff {int data; } ;
struct qtnf_pearl_rx_bd {int info; void* addr_h; void* addr; } ;
struct qtnf_pcie_bus_priv {size_t rx_bd_w_index; int pdev; struct sk_buff** rx_skb; } ;
struct qtnf_pcie_pearl_state {int pcie_reg_base; struct qtnf_pearl_rx_bd* rx_bd_vbase; struct qtnf_pcie_bus_priv base; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 size_t FUNC_3 (int ) ;
 size_t FUNC_4 (int ) ;
 int VAR_3 ;
 struct sk_buff* FUNC_5 (int *,int ,int ) ;
 void* FUNC_6 (size_t) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int ,int ) ;
 int FUNC_9 (char*,int *) ;
 int FUNC_10 () ;
 int FUNC_11 (size_t,int ) ;

__attribute__((used)) static int FUNC_12(struct qtnf_pcie_pearl_state *VAR_4, u16 VAR_5)
{
 struct qtnf_pcie_bus_priv *VAR_6 = &VAR_4->base;
 struct qtnf_pearl_rx_bd *VAR_7;
 struct sk_buff *VAR_8;
 dma_addr_t VAR_9;

 VAR_8 = FUNC_5(((void*)0), VAR_3, VAR_1);
 if (!VAR_8) {
  VAR_6->rx_skb[VAR_5] = ((void*)0);
  return -VAR_0;
 }

 VAR_6->rx_skb[VAR_5] = VAR_8;
 VAR_7 = &VAR_4->rx_bd_vbase[VAR_5];

 VAR_9 = FUNC_8(VAR_6->pdev, VAR_8->data,
          VAR_3, VAR_2);
 if (FUNC_7(VAR_6->pdev, VAR_9)) {
  FUNC_9("skb DMA mapping error: %pad\n", &VAR_9);
  return -VAR_0;
 }


 VAR_7->addr = FUNC_6(FUNC_4(VAR_9));
 VAR_7->addr_h = FUNC_6(FUNC_3(VAR_9));
 VAR_7->info = 0x0;

 VAR_6->rx_bd_w_index = VAR_5;


 FUNC_10();





 FUNC_11(FUNC_4(VAR_9),
        FUNC_0(VAR_4->pcie_reg_base));

 FUNC_11(VAR_5, FUNC_2(VAR_4->pcie_reg_base));
 return 0;
}
