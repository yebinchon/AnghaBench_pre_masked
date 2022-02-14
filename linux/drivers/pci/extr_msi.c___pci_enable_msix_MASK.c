
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {scalar_t__ msi_enabled; } ;
struct msix_entry {int entry; } ;
struct irq_affinity {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*,struct msix_entry*,int,struct irq_affinity*) ;
 int FUNC_1 (struct pci_dev*,char*) ;
 int FUNC_2 (struct pci_dev*,int) ;
 int FUNC_3 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_4(struct pci_dev *VAR_2, struct msix_entry *VAR_3,
        int VAR_4, struct irq_affinity *VAR_5, int VAR_6)
{
 int VAR_7;
 int VAR_8, VAR_9;

 if (!FUNC_2(VAR_2, VAR_4))
  return -VAR_0;

 VAR_7 = FUNC_3(VAR_2);
 if (VAR_7 < 0)
  return VAR_7;
 if (VAR_4 > VAR_7 && !(VAR_6 & VAR_1))
  return VAR_7;

 if (VAR_3) {

  for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
   if (VAR_3[VAR_8].entry >= VAR_7)
    return -VAR_0;
   for (VAR_9 = VAR_8 + 1; VAR_9 < VAR_4; VAR_9++) {
    if (VAR_3[VAR_8].entry == VAR_3[VAR_9].entry)
     return -VAR_0;
   }
  }
 }


 if (VAR_2->msi_enabled) {
  FUNC_1(VAR_2, "can't enable MSI-X (MSI IRQ already assigned)\n");
  return -VAR_0;
 }
 return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);
}
