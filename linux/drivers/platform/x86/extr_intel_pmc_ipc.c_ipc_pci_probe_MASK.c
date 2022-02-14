
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; int irq; } ;
struct intel_pmc_ipc_dev {int * dev; int ipc_base; int cmd_complete; int gcr_lock; int irq_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int ,int ,int ,char*,struct intel_pmc_ipc_dev*) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 struct intel_pmc_ipc_dev VAR_3 ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,struct intel_pmc_ipc_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,int,int ) ;
 int * FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct pci_dev *VAR_4, const struct pci_device_id *VAR_5)
{
 struct intel_pmc_ipc_dev *VAR_6 = &VAR_3;
 int VAR_7;


 if (VAR_6->dev)
  return -VAR_0;

 VAR_6->irq_mode = VAR_1;

 FUNC_8(&VAR_3.gcr_lock);

 VAR_7 = FUNC_5(VAR_4);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_6(VAR_4, 1 << 0, FUNC_3(VAR_4));
 if (VAR_7)
  return VAR_7;

 FUNC_2(&VAR_6->cmd_complete);

 VAR_6->ipc_base = FUNC_7(VAR_4)[0];

 VAR_7 = FUNC_1(&VAR_4->dev, VAR_4->irq, VAR_2, 0, "intel_pmc_ipc",
    VAR_6);
 if (VAR_7) {
  FUNC_0(&VAR_4->dev, "Failed to request irq\n");
  return VAR_7;
 }

 VAR_6->dev = &VAR_4->dev;

 FUNC_4(VAR_4, VAR_6);

 return 0;
}
