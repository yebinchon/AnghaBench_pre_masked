
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct sk_buff {int data; } ;
struct qtnf_topaz_rx_bd {void* info; void* addr; } ;
struct TYPE_2__ {size_t rx_bd_w_index; int pdev; struct sk_buff** rx_skb; } ;
struct qtnf_pcie_topaz_state {TYPE_1__ base; struct qtnf_topaz_rx_bd* rx_bd_vbase; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 struct sk_buff* FUNC_1 (int *,int ,int ) ;
 void* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (char*,int *) ;

__attribute__((used)) static int
FUNC_6(struct qtnf_pcie_topaz_state *VAR_5, u16 VAR_6, u32 VAR_7)
{
 struct qtnf_topaz_rx_bd *VAR_8 = &VAR_5->rx_bd_vbase[VAR_6];
 struct sk_buff *VAR_9;
 dma_addr_t VAR_10;

 VAR_9 = FUNC_1(((void*)0), VAR_4, VAR_1);
 if (!VAR_9) {
  VAR_5->base.rx_skb[VAR_6] = ((void*)0);
  return -VAR_0;
 }

 VAR_5->base.rx_skb[VAR_6] = VAR_9;

 VAR_10 = FUNC_4(VAR_5->base.pdev, VAR_9->data,
          VAR_4, VAR_2);
 if (FUNC_3(VAR_5->base.pdev, VAR_10)) {
  FUNC_5("skb mapping error: %pad\n", &VAR_10);
  return -VAR_0;
 }

 VAR_8->addr = FUNC_2(FUNC_0(VAR_10));
 VAR_8->info = FUNC_2(VAR_3 | VAR_7);

 VAR_5->base.rx_bd_w_index = VAR_6;

 return 0;
}
