
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int devfn; } ;
struct net_device {int perm_addr; int addr_len; int dev_addr; } ;
struct ixgb_adapter {int netdev; int hw; } ;
typedef int pci_ers_result_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct ixgb_adapter*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int ) ;
 struct ixgb_adapter* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct ixgb_adapter*,int ,int ,char*) ;
 int FUNC_9 (struct net_device*) ;
 scalar_t__ FUNC_10 (struct pci_dev*) ;
 struct net_device* FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (struct pci_dev*) ;
 int VAR_2 ;

__attribute__((used)) static pci_ers_result_t FUNC_13(struct pci_dev *VAR_3)
{
 struct net_device *VAR_4 = FUNC_11(VAR_3);
 struct ixgb_adapter *VAR_5 = FUNC_6(VAR_4);

 if (FUNC_10(VAR_3)) {
  FUNC_8(VAR_5, VAR_2, VAR_5->netdev,
     "Cannot re-enable PCI device after reset\n");
  return VAR_0;
 }


 if (0 != FUNC_0 (VAR_3->devfn))
  return VAR_1;

 FUNC_12(VAR_3);

 FUNC_7(VAR_4);
 FUNC_9(VAR_4);
 FUNC_3(VAR_5);


 if (!FUNC_4(&VAR_5->hw)) {
  FUNC_8(VAR_5, VAR_2, VAR_5->netdev,
     "After reset, the EEPROM checksum is not valid\n");
  return VAR_0;
 }
 FUNC_2(&VAR_5->hw, VAR_4->dev_addr);
 FUNC_5(VAR_4->perm_addr, VAR_4->dev_addr, VAR_4->addr_len);

 if (!FUNC_1(VAR_4->perm_addr)) {
  FUNC_8(VAR_5, VAR_2, VAR_5->netdev,
     "After reset, invalid MAC address\n");
  return VAR_0;
 }

 return VAR_1;
}
