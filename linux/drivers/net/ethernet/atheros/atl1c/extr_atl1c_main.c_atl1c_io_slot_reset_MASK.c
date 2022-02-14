
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct net_device {int dummy; } ;
struct atl1c_adapter {int hw; } ;
typedef int pci_ers_result_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 struct atl1c_adapter* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct atl1c_adapter*) ;
 scalar_t__ FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int ,int ) ;
 struct net_device* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;

__attribute__((used)) static pci_ers_result_t FUNC_8(struct pci_dev *VAR_4)
{
 struct net_device *VAR_5 = FUNC_6(VAR_4);
 struct atl1c_adapter *VAR_6 = FUNC_2(VAR_5);

 if (FUNC_4(VAR_4)) {
  if (FUNC_3(VAR_6))
   FUNC_1(&VAR_4->dev,
    "Cannot re-enable PCI device after reset\n");
  return VAR_2;
 }
 FUNC_7(VAR_4);

 FUNC_5(VAR_4, VAR_1, 0);
 FUNC_5(VAR_4, VAR_0, 0);

 FUNC_0(&VAR_6->hw);

 return VAR_3;
}
