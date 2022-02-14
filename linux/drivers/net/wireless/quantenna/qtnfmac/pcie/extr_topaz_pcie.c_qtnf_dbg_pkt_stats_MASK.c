
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct seq_file {int private; } ;
struct qtnf_pcie_bus_priv {int rx_bd_num; int rx_bd_r_index; int rx_bd_w_index; int tx_bd_num; int tx_bd_w_index; int tx_bd_r_index; int tx_eapol; int tx_reclaim_req; int tx_reclaim_done; int tx_done_count; int tx_full_count; } ;
struct qtnf_pcie_topaz_state {int ep_next_rx_pkt; struct qtnf_pcie_bus_priv base; } ;
struct qtnf_bus {int dummy; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 struct qtnf_bus* FUNC_2 (int ) ;
 struct qtnf_pcie_topaz_state* FUNC_3 (struct qtnf_bus*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_6(struct seq_file *VAR_0, void *VAR_1)
{
 struct qtnf_bus *VAR_2 = FUNC_2(VAR_0->private);
 struct qtnf_pcie_topaz_state *VAR_3 = FUNC_3(VAR_2);
 struct qtnf_pcie_bus_priv *VAR_4 = &VAR_3->base;
 u32 VAR_5 = FUNC_4(VAR_3->ep_next_rx_pkt);

 FUNC_5(VAR_0, "tx_full_count(%u)\n", VAR_4->tx_full_count);
 FUNC_5(VAR_0, "tx_done_count(%u)\n", VAR_4->tx_done_count);
 FUNC_5(VAR_0, "tx_reclaim_done(%u)\n", VAR_4->tx_reclaim_done);
 FUNC_5(VAR_0, "tx_reclaim_req(%u)\n", VAR_4->tx_reclaim_req);
 FUNC_5(VAR_0, "tx_eapol(%u)\n", VAR_4->tx_eapol);

 FUNC_5(VAR_0, "tx_bd_r_index(%u)\n", VAR_4->tx_bd_r_index);
 FUNC_5(VAR_0, "tx_done_index(%u)\n", VAR_5);
 FUNC_5(VAR_0, "tx_bd_w_index(%u)\n", VAR_4->tx_bd_w_index);

 FUNC_5(VAR_0, "tx host queue len(%u)\n",
     FUNC_0(VAR_4->tx_bd_w_index, VAR_4->tx_bd_r_index,
       VAR_4->tx_bd_num));
 FUNC_5(VAR_0, "tx reclaim queue len(%u)\n",
     FUNC_0(VAR_5, VAR_4->tx_bd_r_index,
       VAR_4->tx_bd_num));
 FUNC_5(VAR_0, "tx card queue len(%u)\n",
     FUNC_0(VAR_4->tx_bd_w_index, VAR_5,
       VAR_4->tx_bd_num));

 FUNC_5(VAR_0, "rx_bd_r_index(%u)\n", VAR_4->rx_bd_r_index);
 FUNC_5(VAR_0, "rx_bd_w_index(%u)\n", VAR_4->rx_bd_w_index);
 FUNC_5(VAR_0, "rx alloc queue len(%u)\n",
     FUNC_1(VAR_4->rx_bd_w_index, VAR_4->rx_bd_r_index,
         VAR_4->rx_bd_num));

 return 0;
}
