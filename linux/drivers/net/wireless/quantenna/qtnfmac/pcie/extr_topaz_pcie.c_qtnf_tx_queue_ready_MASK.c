
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qtnf_pcie_bus_priv {int tx_full_count; int tx_bd_num; int tx_bd_r_index; int tx_bd_w_index; } ;
struct qtnf_pcie_topaz_state {struct qtnf_pcie_bus_priv base; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct qtnf_pcie_topaz_state*) ;

__attribute__((used)) static int FUNC_2(struct qtnf_pcie_topaz_state *VAR_0)
{
 struct qtnf_pcie_bus_priv *VAR_1 = &VAR_0->base;

 if (!FUNC_0(VAR_1->tx_bd_w_index, VAR_1->tx_bd_r_index,
   VAR_1->tx_bd_num)) {
  FUNC_1(VAR_0);

  if (!FUNC_0(VAR_1->tx_bd_w_index, VAR_1->tx_bd_r_index,
    VAR_1->tx_bd_num)) {
   VAR_1->tx_full_count++;
   return 0;
  }
 }

 return 1;
}
