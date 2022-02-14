
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qtnf_shm_ipc_int {struct qtnf_pcie_topaz_state* arg; int fn; } ;
struct TYPE_4__ {int reclaim_tq; scalar_t__ msi_enabled; TYPE_1__* epmem_bar; struct pci_dev* pdev; } ;
struct qtnf_pcie_topaz_state {TYPE_1__* bda; TYPE_2__ base; } ;
struct qtnf_bus {int mux_napi; int mux_dev; int fw_work; int * bus_ops; } ;
struct pci_dev {int irq; int dev; } ;
struct TYPE_3__ {int bda_shm_reg2; int bda_shm_reg1; } ;


 int FUNC_0 (int *,int ) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_1 (int *,int ,int *,unsigned long,char*,void*) ;
 int FUNC_2 (int ) ;
 struct qtnf_pcie_topaz_state* FUNC_3 (struct qtnf_bus*) ;
 int FUNC_4 (int *,int *,int ,int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (TYPE_2__*,int *,int *,struct qtnf_shm_ipc_int*) ;
 int VAR_2 ;
 int FUNC_7 (struct qtnf_pcie_topaz_state*,unsigned int) ;
 int VAR_3 ;
 int FUNC_8 (struct qtnf_bus*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (int *,int ,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct qtnf_bus *VAR_8, unsigned int VAR_9)
{
 struct qtnf_pcie_topaz_state *VAR_10 = FUNC_3(VAR_8);
 struct pci_dev *VAR_11 = VAR_10->base.pdev;
 struct qtnf_shm_ipc_int VAR_12;
 unsigned long VAR_13;
 int VAR_14;

 VAR_8->bus_ops = &VAR_2;
 FUNC_0(&VAR_8->fw_work, VAR_5);
 VAR_10->bda = VAR_10->base.epmem_bar;


 if (VAR_10->base.msi_enabled)
  VAR_13 = VAR_0;
 else
  VAR_13 = VAR_0 | VAR_1;

 VAR_14 = FUNC_1(&VAR_11->dev, VAR_11->irq,
          &VAR_3,
          VAR_13, "qtnf_topaz_irq", (void *)VAR_8);
 if (VAR_14) {
  FUNC_5("failed to request pcie irq %d\n", VAR_11->irq);
  return VAR_14;
 }

 FUNC_2(VAR_11->irq);

 VAR_14 = FUNC_8(VAR_8);
 if (VAR_14) {
  FUNC_5("failed to init card\n");
  return VAR_14;
 }

 VAR_14 = FUNC_7(VAR_10, VAR_9);
 if (VAR_14) {
  FUNC_5("PCIE xfer init failed\n");
  return VAR_14;
 }

 FUNC_9(&VAR_10->base.reclaim_tq, VAR_4,
       (unsigned long)VAR_10);
 FUNC_4(&VAR_8->mux_dev, &VAR_8->mux_napi,
         VAR_7, 10);

 VAR_12.fn = VAR_6;
 VAR_12.arg = VAR_10;
 FUNC_6(&VAR_10->base, &VAR_10->bda->bda_shm_reg1,
          &VAR_10->bda->bda_shm_reg2, &VAR_12);

 return 0;
}
