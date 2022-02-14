
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {scalar_t__ msix_enabled; scalar_t__ msi_enabled; } ;
struct aq_nic_s {int msix_entry_mask; struct pci_dev* pdev; } ;
typedef int irq_handler_t ;
typedef int cpumask_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct pci_dev*,unsigned int) ;
 int FUNC_2 (int ,int ,int ,char*,void*) ;

int FUNC_3(struct aq_nic_s *VAR_2, unsigned int VAR_3,
     char *VAR_4, irq_handler_t VAR_5,
     void *VAR_6, cpumask_t *VAR_7)
{
 struct pci_dev *VAR_8 = VAR_2->pdev;
 int VAR_9;

 if (VAR_8->msix_enabled || VAR_8->msi_enabled)
  VAR_9 = FUNC_2(FUNC_1(VAR_8, VAR_3), VAR_5, 0,
      VAR_4, VAR_6);
 else
  VAR_9 = FUNC_2(FUNC_1(VAR_8, VAR_3), VAR_1,
      VAR_0, VAR_4, VAR_6);

 if (VAR_9 >= 0) {
  VAR_2->msix_entry_mask |= (1 << VAR_3);

  if (VAR_8->msix_enabled && VAR_7)
   FUNC_0(FUNC_1(VAR_8, VAR_3),
           VAR_7);
 }

 return VAR_9;
}
