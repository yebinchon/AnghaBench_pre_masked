
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qtnf_pcie_bus_priv {int reclaim_tq; int shm_ipc_ep_out; int shm_ipc_ep_in; int pcie_irq_count; int msi_enabled; } ;
struct qtnf_pcie_topaz_state {struct qtnf_pcie_bus_priv base; } ;
struct qtnf_bus {int mux_napi; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct qtnf_pcie_topaz_state*) ;
 scalar_t__ FUNC_2 (struct qtnf_bus*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct qtnf_pcie_topaz_state*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct qtnf_pcie_topaz_state*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_2, void *VAR_3)
{
 struct qtnf_bus *VAR_4 = (struct qtnf_bus *)VAR_3;
 struct qtnf_pcie_topaz_state *VAR_5 = (void *)FUNC_2(VAR_4);
 struct qtnf_pcie_bus_priv *VAR_6 = &VAR_5->base;

 if (!VAR_6->msi_enabled && !FUNC_6(VAR_5))
  return VAR_1;

 if (!VAR_6->msi_enabled)
  FUNC_4(VAR_5);

 VAR_6->pcie_irq_count++;

 FUNC_5(&VAR_6->shm_ipc_ep_in);
 FUNC_5(&VAR_6->shm_ipc_ep_out);

 if (FUNC_3(&VAR_4->mux_napi)) {
  FUNC_1(VAR_5);
  FUNC_0(&VAR_4->mux_napi);
 }

 FUNC_7(&VAR_6->reclaim_tq);

 return VAR_0;
}
