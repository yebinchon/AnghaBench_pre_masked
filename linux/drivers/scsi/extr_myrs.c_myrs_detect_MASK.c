
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {scalar_t__ driver_data; } ;
struct pci_dev {int dev; int irq; } ;
struct myrs_privdata {unsigned int mmio_size; scalar_t__ (* hw_init ) (struct pci_dev*,struct myrs_hba*,int *) ;int irq_handler; } ;
struct myrs_hba {int pci_addr; int irq; int * io_base; int * mmio_base; int queue_lock; struct pci_dev* pdev; } ;
typedef int irq_handler_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int *,char*,...) ;
 int * FUNC_1 (int,unsigned int) ;
 struct myrs_hba* FUNC_2 (struct pci_dev*,struct pci_device_id const*) ;
 int FUNC_3 (struct myrs_hba*) ;
 scalar_t__ FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int ) ;
 int FUNC_6 (struct pci_dev*,struct myrs_hba*) ;
 scalar_t__ FUNC_7 (int ,int ,int ,char*,struct myrs_hba*) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (struct pci_dev*,struct myrs_hba*,int *) ;

__attribute__((used)) static struct myrs_hba *FUNC_10(struct pci_dev *VAR_3,
  const struct pci_device_id *VAR_4)
{
 struct myrs_privdata *VAR_5 =
  (struct myrs_privdata *)VAR_4->driver_data;
 irq_handler_t VAR_6 = VAR_5->irq_handler;
 unsigned int VAR_7 = VAR_5->mmio_size;
 struct myrs_hba *VAR_8 = ((void*)0);

 VAR_8 = FUNC_2(VAR_3, VAR_4);
 if (!VAR_8) {
  FUNC_0(&VAR_3->dev, "Unable to allocate Controller\n");
  return ((void*)0);
 }
 VAR_8->pdev = VAR_3;

 if (FUNC_4(VAR_3))
  goto Failure;

 VAR_8->pci_addr = FUNC_5(VAR_3, 0);

 FUNC_6(VAR_3, VAR_8);
 FUNC_8(&VAR_8->queue_lock);

 if (VAR_7 < VAR_2)
  VAR_7 = VAR_2;
 VAR_8->mmio_base = FUNC_1(VAR_8->pci_addr & VAR_1, VAR_7);
 if (VAR_8->mmio_base == ((void*)0)) {
  FUNC_0(&VAR_3->dev,
   "Unable to map Controller Register Window\n");
  goto Failure;
 }

 VAR_8->io_base = VAR_8->mmio_base + (VAR_8->pci_addr & ~VAR_1);
 if (VAR_5->hw_init(VAR_3, VAR_8, VAR_8->io_base))
  goto Failure;


 if (FUNC_7(VAR_3->irq, VAR_6, VAR_0, "myrs", VAR_8) < 0) {
  FUNC_0(&VAR_3->dev,
   "Unable to acquire IRQ Channel %d\n", VAR_3->irq);
  goto Failure;
 }
 VAR_8->irq = VAR_3->irq;
 return VAR_8;

Failure:
 FUNC_0(&VAR_3->dev,
  "Failed to initialize Controller\n");
 FUNC_3(VAR_8);
 return ((void*)0);
}
