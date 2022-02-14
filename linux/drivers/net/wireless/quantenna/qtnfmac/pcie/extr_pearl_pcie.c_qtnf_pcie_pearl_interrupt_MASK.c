
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qtnf_pcie_bus_priv {int msi_enabled; int reclaim_tq; int shm_ipc_ep_out; int shm_ipc_ep_in; int pcie_irq_count; } ;
struct qtnf_pcie_pearl_state {int pcie_irq_mask; int pcie_reg_base; int pcie_irq_uf_count; int pcie_irq_tx_count; int pcie_irq_rx_count; struct qtnf_pcie_bus_priv base; } ;
struct qtnf_bus {int mux_napi; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 struct qtnf_pcie_pearl_state* FUNC_1 (struct qtnf_bus*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct qtnf_pcie_pearl_state*) ;
 int FUNC_4 (struct qtnf_pcie_pearl_state*) ;
 int FUNC_5 (struct qtnf_pcie_pearl_state*) ;
 int FUNC_6 (unsigned int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_4, void *VAR_5)
{
 struct qtnf_bus *VAR_6 = (struct qtnf_bus *)VAR_5;
 struct qtnf_pcie_pearl_state *VAR_7 = FUNC_1(VAR_6);
 struct qtnf_pcie_bus_priv *VAR_8 = &VAR_7->base;
 u32 VAR_9;

 VAR_8->pcie_irq_count++;
 VAR_9 = FUNC_8(FUNC_0(VAR_7->pcie_reg_base));

 FUNC_7(&VAR_8->shm_ipc_ep_in);
 FUNC_7(&VAR_8->shm_ipc_ep_out);

 if (!(VAR_9 & VAR_7->pcie_irq_mask))
  goto irq_done;

 if (VAR_9 & VAR_2)
  VAR_7->pcie_irq_rx_count++;

 if (VAR_9 & VAR_3)
  VAR_7->pcie_irq_tx_count++;

 if (VAR_9 & VAR_1)
  VAR_7->pcie_irq_uf_count++;

 if (VAR_9 & VAR_2) {
  FUNC_4(VAR_7);
  FUNC_2(&VAR_6->mux_napi);
 }

 if (VAR_9 & VAR_3) {
  FUNC_5(VAR_7);
  FUNC_9(&VAR_8->reclaim_tq);
 }

irq_done:

 FUNC_6(~0U, FUNC_0(VAR_7->pcie_reg_base));

 if (!VAR_8->msi_enabled)
  FUNC_3(VAR_7);

 return VAR_0;
}
