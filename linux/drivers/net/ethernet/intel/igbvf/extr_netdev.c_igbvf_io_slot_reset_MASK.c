
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct net_device {int dummy; } ;
struct igbvf_adapter {int dummy; } ;
typedef int pci_ers_result_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct igbvf_adapter*) ;
 struct igbvf_adapter* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct pci_dev*) ;
 struct net_device* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;

__attribute__((used)) static pci_ers_result_t FUNC_6(struct pci_dev *VAR_2)
{
 struct net_device *VAR_3 = FUNC_4(VAR_2);
 struct igbvf_adapter *VAR_4 = FUNC_2(VAR_3);

 if (FUNC_3(VAR_2)) {
  FUNC_0(&VAR_2->dev,
   "Cannot re-enable PCI device after reset.\n");
  return VAR_0;
 }
 FUNC_5(VAR_2);

 FUNC_1(VAR_4);

 return VAR_1;
}
