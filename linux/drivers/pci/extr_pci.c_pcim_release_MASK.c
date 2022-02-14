
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_devres {int region_mask; int pinned; scalar_t__ enabled; int orig_intx; scalar_t__ restore_intx; scalar_t__ mwi; } ;
struct pci_dev {scalar_t__ msix_enabled; scalar_t__ msi_enabled; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,int ) ;
 int FUNC_5 (struct pci_dev*,int) ;
 struct pci_dev* FUNC_6 (struct device*) ;

__attribute__((used)) static void FUNC_7(struct device *VAR_1, void *VAR_2)
{
 struct pci_dev *VAR_3 = FUNC_6(VAR_1);
 struct pci_devres *VAR_4 = VAR_2;
 int VAR_5;

 if (VAR_3->msi_enabled)
  FUNC_2(VAR_3);
 if (VAR_3->msix_enabled)
  FUNC_3(VAR_3);

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  if (VAR_4->region_mask & (1 << VAR_5))
   FUNC_5(VAR_3, VAR_5);

 if (VAR_4->mwi)
  FUNC_0(VAR_3);

 if (VAR_4->restore_intx)
  FUNC_4(VAR_3, VAR_4->orig_intx);

 if (VAR_4->enabled && !VAR_4->pinned)
  FUNC_1(VAR_3);
}
