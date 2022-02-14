
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct pci_dev {int dev; } ;
struct megasas_instance {int msix_vectors; int msix_load_balance; struct pci_dev* pdev; TYPE_2__* irq_context; TYPE_1__* instancet; } ;
struct TYPE_5__ {int MSIxIndex; struct megasas_instance* instance; } ;
struct TYPE_4__ {int service_isr; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (struct megasas_instance*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,int) ;
 scalar_t__ FUNC_5 (int ,int ,int ,char*,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_6(struct megasas_instance *VAR_0, u8 VAR_1)
{
 int VAR_2, VAR_3;
 struct pci_dev *VAR_4;

 VAR_4 = VAR_0->pdev;


 for (VAR_2 = 0; VAR_2 < VAR_0->msix_vectors; VAR_2++) {
  VAR_0->irq_context[VAR_2].instance = VAR_0;
  VAR_0->irq_context[VAR_2].MSIxIndex = VAR_2;
  if (FUNC_5(FUNC_4(VAR_4, VAR_2),
   VAR_0->instancet->service_isr, 0, "megasas",
   &VAR_0->irq_context[VAR_2])) {
   FUNC_0(&VAR_0->pdev->dev,
    "Failed to register IRQ for vector %d.\n", VAR_2);
   for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
    FUNC_1(FUNC_4(VAR_4, VAR_3),
      &VAR_0->irq_context[VAR_3]);

   VAR_0->msix_vectors = 0;
   VAR_0->msix_load_balance = 0;
   if (VAR_1) {
    FUNC_3(VAR_0->pdev);
    return FUNC_2(VAR_0);
   } else {
    return -1;
   }
  }
 }

 return 0;
}
