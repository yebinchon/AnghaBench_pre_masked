
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int aer_cap; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,int) ;
 scalar_t__ FUNC_2 (struct pci_dev*) ;

void FUNC_3(struct pci_dev *VAR_2)
{
 int VAR_3;
 u32 VAR_4, VAR_5;

 VAR_3 = VAR_2->aer_cap;
 if (!VAR_3)
  return;

 if (FUNC_2(VAR_2))
  return;


 FUNC_0(VAR_2, VAR_3 + VAR_1, &VAR_4);
 FUNC_0(VAR_2, VAR_3 + VAR_0, &VAR_5);
 VAR_4 &= VAR_5;
 if (VAR_4)
  FUNC_1(VAR_2, VAR_3 + VAR_1, VAR_4);
}
