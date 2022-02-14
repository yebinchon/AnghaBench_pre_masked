
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qtnf_shm_ipc_int {struct qtnf_pcie_pearl_state* arg; int fn; } ;
struct TYPE_4__ {int reclaim_tq; int msi_enabled; TYPE_1__* epmem_bar; int dmareg_bar; struct pci_dev* pdev; } ;
struct qtnf_pcie_pearl_state {TYPE_1__* bda; TYPE_2__ base; int pcie_reg_base; int irq_lock; } ;
struct qtnf_bus {int mux_napi; int mux_dev; int fw_work; int * bus_ops; } ;
struct pci_dev {int irq; int dev; } ;
struct TYPE_3__ {int bda_shm_reg2; int bda_shm_reg1; int bda_rc_msi_enabled; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int *,int ,char*,void*) ;
 struct qtnf_pcie_pearl_state* FUNC_2 (struct qtnf_bus*) ;
 int FUNC_3 (int *,int *,int ,int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (struct qtnf_pcie_pearl_state*) ;
 int FUNC_6 (struct qtnf_pcie_pearl_state*) ;
 int FUNC_7 (TYPE_2__*,int *,int *,struct qtnf_shm_ipc_int*) ;
 int VAR_0 ;
 int FUNC_8 (struct qtnf_pcie_pearl_state*,unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (struct qtnf_pcie_pearl_state*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ,unsigned long) ;
 int FUNC_12 (int ,int *) ;

__attribute__((used)) static int FUNC_13(struct qtnf_bus *VAR_6, unsigned int VAR_7)
{
 struct qtnf_shm_ipc_int VAR_8;
 struct qtnf_pcie_pearl_state *VAR_9 = FUNC_2(VAR_6);
 struct pci_dev *VAR_10 = VAR_9->base.pdev;
 int VAR_11;

 VAR_6->bus_ops = &VAR_0;
 FUNC_10(&VAR_9->irq_lock);
 FUNC_0(&VAR_6->fw_work, VAR_4);

 VAR_9->pcie_reg_base = VAR_9->base.dmareg_bar;
 VAR_9->bda = VAR_9->base.epmem_bar;
 FUNC_12(VAR_9->base.msi_enabled, &VAR_9->bda->bda_rc_msi_enabled);

 VAR_11 = FUNC_8(VAR_9, VAR_7);
 if (VAR_11) {
  FUNC_4("PCIE xfer init failed\n");
  return VAR_11;
 }


 FUNC_6(VAR_9);


 FUNC_5(VAR_9);

 VAR_11 = FUNC_1(&VAR_10->dev, VAR_10->irq,
          &VAR_1, 0,
          "qtnf_pearl_irq", (void *)VAR_6);
 if (VAR_11) {
  FUNC_4("failed to request pcie irq %d\n", VAR_10->irq);
  FUNC_9(VAR_9);
  return VAR_11;
 }

 FUNC_11(&VAR_9->base.reclaim_tq, VAR_5,
       (unsigned long)VAR_9);
 FUNC_3(&VAR_6->mux_dev, &VAR_6->mux_napi,
         VAR_3, 10);

 VAR_8.fn = VAR_2;
 VAR_8.arg = VAR_9;
 FUNC_7(&VAR_9->base, &VAR_9->bda->bda_shm_reg1,
          &VAR_9->bda->bda_shm_reg2, &VAR_8);

 return 0;
}
