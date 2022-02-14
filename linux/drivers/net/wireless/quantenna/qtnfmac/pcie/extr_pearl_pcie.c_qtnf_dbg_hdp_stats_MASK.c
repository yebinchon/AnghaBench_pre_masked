
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int private; } ;
struct qtnf_pcie_bus_priv {int tx_full_count; int tx_done_count; int tx_reclaim_done; int tx_reclaim_req; int tx_bd_r_index; int tx_bd_num; int tx_bd_w_index; int rx_bd_r_index; int rx_bd_num; int rx_bd_w_index; } ;
struct qtnf_pcie_pearl_state {int pcie_reg_base; struct qtnf_pcie_bus_priv base; } ;
struct qtnf_bus {int dummy; } ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct qtnf_bus* FUNC_4 (int ) ;
 struct qtnf_pcie_pearl_state* FUNC_5 (struct qtnf_bus*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct seq_file*,char*,int) ;

__attribute__((used)) static int FUNC_8(struct seq_file *VAR_0, void *VAR_1)
{
 struct qtnf_bus *VAR_2 = FUNC_4(VAR_0->private);
 struct qtnf_pcie_pearl_state *VAR_3 = FUNC_5(VAR_2);
 struct qtnf_pcie_bus_priv *VAR_4 = &VAR_3->base;

 FUNC_7(VAR_0, "tx_full_count(%u)\n", VAR_4->tx_full_count);
 FUNC_7(VAR_0, "tx_done_count(%u)\n", VAR_4->tx_done_count);
 FUNC_7(VAR_0, "tx_reclaim_done(%u)\n", VAR_4->tx_reclaim_done);
 FUNC_7(VAR_0, "tx_reclaim_req(%u)\n", VAR_4->tx_reclaim_req);

 FUNC_7(VAR_0, "tx_bd_r_index(%u)\n", VAR_4->tx_bd_r_index);
 FUNC_7(VAR_0, "tx_bd_p_index(%u)\n",
     FUNC_6(FUNC_2(VAR_3->pcie_reg_base))
   & (VAR_4->tx_bd_num - 1));
 FUNC_7(VAR_0, "tx_bd_w_index(%u)\n", VAR_4->tx_bd_w_index);
 FUNC_7(VAR_0, "tx queue len(%u)\n",
     FUNC_0(VAR_4->tx_bd_w_index, VAR_4->tx_bd_r_index,
       VAR_4->tx_bd_num));

 FUNC_7(VAR_0, "rx_bd_r_index(%u)\n", VAR_4->rx_bd_r_index);
 FUNC_7(VAR_0, "rx_bd_p_index(%u)\n",
     FUNC_6(FUNC_3(VAR_3->pcie_reg_base))
   & (VAR_4->rx_bd_num - 1));
 FUNC_7(VAR_0, "rx_bd_w_index(%u)\n", VAR_4->rx_bd_w_index);
 FUNC_7(VAR_0, "rx alloc queue len(%u)\n",
     FUNC_1(VAR_4->rx_bd_w_index, VAR_4->rx_bd_r_index,
         VAR_4->rx_bd_num));

 return 0;
}
