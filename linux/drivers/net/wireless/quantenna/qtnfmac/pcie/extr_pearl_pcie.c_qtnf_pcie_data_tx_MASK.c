
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int len; TYPE_2__* dev; int data; } ;
struct qtnf_pearl_tx_bd {void* info; void* addr_h; void* addr; } ;
struct qtnf_pcie_bus_priv {int tx_stopped; int tx_bd_w_index; int tx_bd_num; int tx_lock; int tx_done_count; int pdev; struct sk_buff** tx_skb; } ;
struct qtnf_pcie_pearl_state {int pcie_reg_base; scalar_t__ tx_bd_pbase; struct qtnf_pearl_tx_bd* tx_bd_vbase; struct qtnf_pcie_bus_priv base; } ;
struct qtnf_bus {int dummy; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_3__ {int tx_dropped; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_4 (int) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 () ;
 struct qtnf_pcie_pearl_state* FUNC_7 (struct qtnf_bus*) ;
 int FUNC_8 (TYPE_2__*) ;
 scalar_t__ FUNC_9 (int ,scalar_t__) ;
 scalar_t__ FUNC_10 (int ,int ,int,int ) ;
 int FUNC_11 (char*,scalar_t__*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (struct qtnf_pcie_pearl_state*) ;
 int FUNC_14 (struct qtnf_pcie_pearl_state*) ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (int *,unsigned long) ;
 int FUNC_17 (int,int ) ;

__attribute__((used)) static int FUNC_18(struct qtnf_bus *VAR_6, struct sk_buff *VAR_7)
{
 struct qtnf_pcie_pearl_state *VAR_8 = FUNC_7(VAR_6);
 struct qtnf_pcie_bus_priv *VAR_9 = &VAR_8->base;
 dma_addr_t VAR_10, VAR_11;
 struct qtnf_pearl_tx_bd *VAR_12;
 unsigned long VAR_13;
 int VAR_14, VAR_15;
 u32 VAR_16;
 int VAR_17 = 0;

 FUNC_15(&VAR_9->tx_lock, VAR_13);

 if (!FUNC_14(VAR_8)) {
  if (VAR_7->dev) {
   FUNC_8(VAR_7->dev);
   VAR_9->tx_stopped = 1;
  }

  FUNC_16(&VAR_9->tx_lock, VAR_13);
  return VAR_1;
 }

 VAR_15 = VAR_9->tx_bd_w_index;
 VAR_9->tx_skb[VAR_15] = VAR_7;
 VAR_14 = VAR_7->len;

 VAR_11 = FUNC_10(VAR_9->pdev, VAR_7->data,
       VAR_7->len, VAR_3);
 if (FUNC_9(VAR_9->pdev, VAR_11)) {
  FUNC_11("skb DMA mapping error: %pad\n", &VAR_11);
  VAR_17 = -VAR_0;
  goto tx_done;
 }

 VAR_12 = &VAR_8->tx_bd_vbase[VAR_15];
 VAR_12->addr = FUNC_4(FUNC_3(VAR_11));
 VAR_12->addr_h = FUNC_4(FUNC_2(VAR_11));

 VAR_16 = (VAR_14 & VAR_4) << VAR_5;
 VAR_12->info = FUNC_4(VAR_16);


 FUNC_6();


 VAR_10 = VAR_8->tx_bd_pbase + VAR_15 * sizeof(struct qtnf_pearl_tx_bd);





 FUNC_17(FUNC_3(VAR_10),
        FUNC_0(VAR_8->pcie_reg_base));

 if (++VAR_15 >= VAR_9->tx_bd_num)
  VAR_15 = 0;

 VAR_9->tx_bd_w_index = VAR_15;

tx_done:
 if (VAR_17 && VAR_7) {
  FUNC_12("drop skb\n");
  if (VAR_7->dev)
   VAR_7->dev->stats.tx_dropped++;
  FUNC_5(VAR_7);
 }

 VAR_9->tx_done_count++;
 FUNC_16(&VAR_9->tx_lock, VAR_13);

 FUNC_13(VAR_8);

 return VAR_2;
}
