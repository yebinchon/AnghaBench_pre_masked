
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int aer_cap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*,int ,int ) ;

int FUNC_2(struct pci_dev *VAR_3)
{
 if (FUNC_0(VAR_3))
  return -VAR_0;

 if (!VAR_3->aer_cap)
  return -VAR_0;

 return FUNC_1(VAR_3, VAR_2, VAR_1);
}
