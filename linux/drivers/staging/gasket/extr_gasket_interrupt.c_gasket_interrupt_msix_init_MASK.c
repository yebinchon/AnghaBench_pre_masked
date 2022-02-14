
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct gasket_interrupt_data {int num_interrupts; int msix_configured; int num_configured; TYPE_2__* msix_entries; TYPE_1__* pci_dev; int name; int ** eventfd_ctxs; } ;
struct TYPE_5__ {int entry; scalar_t__ vector; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int,scalar_t__,int) ;
 int VAR_4 ;
 TYPE_2__* FUNC_1 (int,int,int ) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*,int) ;
 int FUNC_3 (scalar_t__,int ,int ,int ,struct gasket_interrupt_data*) ;

__attribute__((used)) static int
FUNC_4(struct gasket_interrupt_data *VAR_5)
{
 int VAR_6 = 1;
 int VAR_7;

 VAR_5->msix_entries =
  FUNC_1(VAR_5->num_interrupts,
   sizeof(*VAR_5->msix_entries), VAR_2);
 if (!VAR_5->msix_entries)
  return -VAR_1;

 for (VAR_7 = 0; VAR_7 < VAR_5->num_interrupts; VAR_7++) {
  VAR_5->msix_entries[VAR_7].entry = VAR_7;
  VAR_5->msix_entries[VAR_7].vector = 0;
  VAR_5->eventfd_ctxs[VAR_7] = ((void*)0);
 }


 for (VAR_7 = 0; VAR_7 < VAR_3 && VAR_6 > 0; VAR_7++)
  VAR_6 = FUNC_2(VAR_5->pci_dev,
         VAR_5->msix_entries,
         VAR_5->num_interrupts);

 if (VAR_6)
  return VAR_6 > 0 ? -VAR_0 : VAR_6;
 VAR_5->msix_configured = 1;

 for (VAR_7 = 0; VAR_7 < VAR_5->num_interrupts; VAR_7++) {
  VAR_6 = FUNC_3(VAR_5->msix_entries[VAR_7].vector,
      VAR_4, 0,
      VAR_5->name, VAR_5);

  if (VAR_6) {
   FUNC_0(&VAR_5->pci_dev->dev,
    "Cannot get IRQ for interrupt %d, vector %d; "
    "%d\n",
    VAR_7, VAR_5->msix_entries[VAR_7].vector, VAR_6);
   return VAR_6;
  }

  VAR_5->num_configured++;
 }

 return 0;
}
