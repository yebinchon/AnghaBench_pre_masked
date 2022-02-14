
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int aer_cap; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,int) ;
 scalar_t__ FUNC_2 (struct pci_dev*) ;

int FUNC_3(struct pci_dev *VAR_3)
{
 int VAR_4;
 u32 VAR_5, VAR_6;

 VAR_4 = VAR_3->aer_cap;
 if (!VAR_4)
  return -VAR_0;

 if (FUNC_2(VAR_3))
  return -VAR_0;


 FUNC_0(VAR_3, VAR_4 + VAR_2, &VAR_5);
 FUNC_0(VAR_3, VAR_4 + VAR_1, &VAR_6);
 VAR_5 &= ~VAR_6;
 if (VAR_5)
  FUNC_1(VAR_3, VAR_4 + VAR_2, VAR_5);

 return 0;
}
