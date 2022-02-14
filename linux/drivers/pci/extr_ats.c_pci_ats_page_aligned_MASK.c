
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {scalar_t__ ats_cap; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*,scalar_t__,int*) ;

int FUNC_1(struct pci_dev *VAR_2)
{
 u16 VAR_3;

 if (!VAR_2->ats_cap)
  return 0;

 FUNC_0(VAR_2, VAR_2->ats_cap + VAR_0, &VAR_3);

 if (VAR_3 & VAR_1)
  return 1;

 return 0;
}
