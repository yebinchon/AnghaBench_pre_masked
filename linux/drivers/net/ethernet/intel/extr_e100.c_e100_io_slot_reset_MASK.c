
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int devfn; } ;
struct nic {int dummy; } ;
struct net_device {int dummy; } ;
typedef int pci_ers_result_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct nic*) ;
 int FUNC_2 (struct nic*) ;
 struct nic* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct pci_dev*) ;
 struct net_device* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static pci_ers_result_t FUNC_8(struct pci_dev *VAR_2)
{
 struct net_device *VAR_3 = FUNC_5(VAR_2);
 struct nic *VAR_4 = FUNC_3(VAR_3);

 if (FUNC_4(VAR_2)) {
  FUNC_7("Cannot re-enable PCI device after reset\n");
  return VAR_0;
 }
 FUNC_6(VAR_2);


 if (0 != FUNC_0(VAR_2->devfn))
  return VAR_1;
 FUNC_1(VAR_4);
 FUNC_2(VAR_4);

 return VAR_1;
}
