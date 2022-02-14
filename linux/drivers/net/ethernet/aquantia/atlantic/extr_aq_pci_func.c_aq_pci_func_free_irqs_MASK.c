
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {scalar_t__ msix_enabled; } ;
struct TYPE_2__ {unsigned int link_irq_vec; } ;
struct aq_nic_s {unsigned int msix_entry_mask; void** aq_vec; TYPE_1__ aq_nic_cfg; struct pci_dev* pdev; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,void*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct pci_dev*,unsigned int) ;

void FUNC_3(struct aq_nic_s *VAR_1)
{
 struct pci_dev *VAR_2 = VAR_1->pdev;
 unsigned int VAR_3;
 void *VAR_4;

 for (VAR_3 = 32U; VAR_3--;) {
  if (!((1U << VAR_3) & VAR_1->msix_entry_mask))
   continue;
  if (VAR_1->aq_nic_cfg.link_irq_vec &&
      VAR_3 == VAR_1->aq_nic_cfg.link_irq_vec)
   VAR_4 = VAR_1;
  else if (VAR_3 < VAR_0)
   VAR_4 = VAR_1->aq_vec[VAR_3];
  else
   continue;

  if (VAR_2->msix_enabled)
   FUNC_1(FUNC_2(VAR_2, VAR_3), ((void*)0));
  FUNC_0(FUNC_2(VAR_2, VAR_3), VAR_4);
  VAR_1->msix_entry_mask &= ~(1U << VAR_3);
 }
}
