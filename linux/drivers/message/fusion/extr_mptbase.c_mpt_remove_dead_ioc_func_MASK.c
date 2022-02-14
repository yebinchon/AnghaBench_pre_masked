
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_2__ {struct pci_dev* pcidev; } ;
typedef TYPE_1__ MPT_ADAPTER ;


 int FUNC_0 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_1(void *VAR_0)
{
 MPT_ADAPTER *VAR_1 = (MPT_ADAPTER *)VAR_0;
 struct pci_dev *VAR_2;

 if (!VAR_1)
  return -1;

 VAR_2 = VAR_1->pcidev;
 if (!VAR_2)
  return -1;

 FUNC_0(VAR_2);
 return 0;
}
