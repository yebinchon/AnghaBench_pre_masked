
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {scalar_t__ is_virtfn; int devfn; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct pci_dev*,int) ;
 int FUNC_2 (struct pci_dev*) ;
 scalar_t__ FUNC_3 (struct pci_dev*) ;

void FUNC_4(struct pci_dev *VAR_3)
{
 if (!FUNC_2(VAR_3))
  return;


 if ((FUNC_3(VAR_3) != VAR_0) &&
     (FUNC_3(VAR_3) != VAR_1) &&
     (FUNC_3(VAR_3) != VAR_2))
  return;


 if (FUNC_0(VAR_3->devfn) != 0 || VAR_3->is_virtfn)
  return;


 FUNC_1(VAR_3, 0);
}
