
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {scalar_t__ msix_cap; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*,scalar_t__,int *) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_1, int VAR_2)
{
 u32 VAR_3;

 if (VAR_1->msix_cap) {
  FUNC_0(VAR_1, VAR_1->msix_cap, &VAR_3);
  if (VAR_2)
   VAR_3 |= VAR_0;
  else
   VAR_3 = 0;
  FUNC_1(VAR_1, VAR_1->msix_cap, VAR_3);
 }
}
