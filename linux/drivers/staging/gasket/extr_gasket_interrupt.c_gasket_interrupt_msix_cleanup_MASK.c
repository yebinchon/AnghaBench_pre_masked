
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gasket_interrupt_data {int num_configured; TYPE_1__* msix_entries; scalar_t__ msix_configured; int pci_dev; } ;
struct TYPE_2__ {int vector; } ;


 int FUNC_0 (int ,struct gasket_interrupt_data*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct gasket_interrupt_data *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_configured; VAR_1++)
  FUNC_0(VAR_0->msix_entries[VAR_1].vector,
    VAR_0);
 VAR_0->num_configured = 0;

 if (VAR_0->msix_configured)
  FUNC_2(VAR_0->pci_dev);
 VAR_0->msix_configured = 0;
 FUNC_1(VAR_0->msix_entries);
}
