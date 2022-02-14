
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qtnf_pearl_tx_bd {int dummy; } ;
struct qtnf_pearl_rx_bd {int dummy; } ;
struct qtnf_pcie_bus_priv {int tx_bd_num; int rx_bd_num; scalar_t__ tx_bd_w_index; scalar_t__ tx_bd_r_index; TYPE_1__* pdev; } ;
struct qtnf_pcie_pearl_state {int bd_table_paddr; int bd_table_len; int tx_bd_pbase; int rx_bd_pbase; int pcie_reg_base; void* rx_bd_vbase; void* tx_bd_vbase; void* bd_table_vaddr; struct qtnf_pcie_bus_priv base; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 void* FUNC_5 (int *,int,int*,int ) ;
 int FUNC_6 (void*,int ,int) ;
 int FUNC_7 (char*,void*,int*) ;
 int FUNC_8 (int,int ) ;

__attribute__((used)) static int FUNC_9(struct qtnf_pcie_pearl_state *VAR_2)
{
 struct qtnf_pcie_bus_priv *VAR_3 = &VAR_2->base;
 dma_addr_t VAR_4;
 void *VAR_5;
 int VAR_6;

 VAR_6 = VAR_3->tx_bd_num * sizeof(struct qtnf_pearl_tx_bd) +
  VAR_3->rx_bd_num * sizeof(struct qtnf_pearl_rx_bd);

 VAR_5 = FUNC_5(&VAR_3->pdev->dev, VAR_6, &VAR_4, VAR_1);
 if (!VAR_5)
  return -VAR_0;



 FUNC_6(VAR_5, 0, VAR_6);

 VAR_2->bd_table_vaddr = VAR_5;
 VAR_2->bd_table_paddr = VAR_4;
 VAR_2->bd_table_len = VAR_6;

 VAR_2->tx_bd_vbase = VAR_5;
 VAR_2->tx_bd_pbase = VAR_4;

 FUNC_7("TX descriptor table: vaddr=0x%p paddr=%pad\n", VAR_5, &VAR_4);

 VAR_3->tx_bd_r_index = 0;
 VAR_3->tx_bd_w_index = 0;



 VAR_5 = ((struct qtnf_pearl_tx_bd *)VAR_5) + VAR_3->tx_bd_num;
 VAR_4 += VAR_3->tx_bd_num * sizeof(struct qtnf_pearl_tx_bd);

 VAR_2->rx_bd_vbase = VAR_5;
 VAR_2->rx_bd_pbase = VAR_4;





 FUNC_8(FUNC_4(VAR_4),
        FUNC_1(VAR_2->pcie_reg_base));
 FUNC_8(VAR_3->rx_bd_num | (sizeof(struct qtnf_pearl_rx_bd)) << 16,
        FUNC_2(VAR_2->pcie_reg_base));

 FUNC_7("RX descriptor table: vaddr=0x%p paddr=%pad\n", VAR_5, &VAR_4);

 return 0;
}
