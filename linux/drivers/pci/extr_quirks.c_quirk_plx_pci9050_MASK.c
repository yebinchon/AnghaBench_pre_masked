
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int end; scalar_t__ start; int flags; } ;
struct pci_dev {int revision; struct resource* resource; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*,char*,unsigned int) ;
 int FUNC_1 (struct pci_dev*,unsigned int) ;
 int FUNC_2 (struct pci_dev*,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_1)
{
 unsigned int VAR_2;


 if (VAR_1->revision >= 2)
  return;
 for (VAR_2 = 0; VAR_2 <= 1; VAR_2++)
  if (FUNC_1(VAR_1, VAR_2) == 0x80 &&
      (FUNC_2(VAR_1, VAR_2) & 0x80)) {
   struct resource *VAR_3 = &VAR_1->resource[VAR_2];
   FUNC_0(VAR_1, "Re-allocating PLX PCI 9050 BAR %u to length 256 to avoid bit 7 bug\n",
     VAR_2);
   VAR_3->flags |= VAR_0;
   VAR_3->start = 0;
   VAR_3->end = 0xff;
  }
}
