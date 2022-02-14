
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_trans_pcie {int alloc_vecs; TYPE_2__* pci_dev; TYPE_1__* msix_entries; scalar_t__ msix_enabled; } ;
struct iwl_trans {int dummy; } ;
struct TYPE_4__ {int irq; } ;
struct TYPE_3__ {int vector; } ;


 struct iwl_trans_pcie* FUNC_0 (struct iwl_trans*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct iwl_trans *VAR_0)
{
 struct iwl_trans_pcie *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->msix_enabled) {
  int VAR_2;

  for (VAR_2 = 0; VAR_2 < VAR_1->alloc_vecs; VAR_2++)
   FUNC_1(VAR_1->msix_entries[VAR_2].vector);
 } else {
  FUNC_1(VAR_1->pci_dev->irq);
 }
}
