
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int (* enable_interrupt ) (struct octeon_device*,int ) ;int (* disable_interrupt ) (struct octeon_device*,int ) ;} ;
struct octeon_device {int num_msix_irqs; TYPE_1__ fn_list; TYPE_2__* pci_dev; int * irq_name_storage; int * msix_entries; scalar_t__ vector; struct octeon_device* ioq_vector; scalar_t__ msix_on; } ;
struct msix_entry {int vector; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct octeon_device*) ;
 scalar_t__ FUNC_1 (struct octeon_device*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int ,struct octeon_device*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct octeon_device*,int ) ;
 scalar_t__ FUNC_8 (struct octeon_device*,int ) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (struct octeon_device*,int ) ;
 int FUNC_11 (struct octeon_device*,int ) ;

__attribute__((used)) static int
FUNC_12(struct octeon_device *VAR_1, uint32_t VAR_2)
{
 struct msix_entry *VAR_3;
 int VAR_4 = 0;
 int VAR_5;

 if (!VAR_1->msix_on)
  return 0;




 VAR_1->fn_list.disable_interrupt(VAR_1, VAR_0);

 if (VAR_1->msix_on) {
  if (FUNC_0(VAR_1))
   VAR_4 = VAR_1->num_msix_irqs - 1;
  else if (FUNC_1(VAR_1))
   VAR_4 = VAR_1->num_msix_irqs;

  VAR_3 = (struct msix_entry *)VAR_1->msix_entries;
  for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
   if (VAR_1->ioq_vector[VAR_5].vector) {

    FUNC_5(VAR_3[VAR_5].vector,
            ((void*)0));
    FUNC_4(VAR_3[VAR_5].vector,
      &VAR_1->ioq_vector[VAR_5]);
    VAR_1->ioq_vector[VAR_5].vector = 0;
   }
  }


  if (FUNC_0(VAR_1))
   FUNC_4(VAR_3[VAR_5].vector, VAR_1);

  FUNC_9(VAR_1->pci_dev);
  FUNC_6(VAR_1->msix_entries);
  VAR_1->msix_entries = ((void*)0);
 }

 FUNC_6(VAR_1->irq_name_storage);
 VAR_1->irq_name_storage = ((void*)0);

 if (FUNC_7(VAR_1, VAR_2)) {
  FUNC_2(&VAR_1->pci_dev->dev, "OCTEON: ioq vector allocation failed\n");
  return -1;
 }

 if (FUNC_8(VAR_1, VAR_2)) {
  FUNC_3(&VAR_1->pci_dev->dev, "Setup interrupt failed\n");
  return -1;
 }


 VAR_1->fn_list.enable_interrupt(VAR_1, VAR_0);

 return 0;
}
