
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {scalar_t__ msix_cap; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,int *) ;

int FUNC_2(struct pci_dev *VAR_2)
{
 u16 VAR_3;

 if (!VAR_2->msix_cap)
  return -VAR_0;

 FUNC_1(VAR_2, VAR_2->msix_cap + VAR_1, &VAR_3);
 return FUNC_0(VAR_3);
}
