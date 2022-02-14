
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int irq; } ;
struct net_device {int name; } ;
struct atl1e_adapter {struct net_device* netdev; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,char*,...) ;
 int FUNC_1 (int ,int ,int ,int ,struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct atl1e_adapter *VAR_2)
{
 struct pci_dev *VAR_3 = VAR_2->pdev;
 struct net_device *VAR_4 = VAR_2->netdev;
 int VAR_5 = 0;

 VAR_5 = FUNC_1(VAR_3->irq, VAR_1, VAR_0, VAR_4->name,
     VAR_4);
 if (VAR_5) {
  FUNC_0(VAR_2->netdev,
      "Unable to allocate interrupt Error: %d\n", VAR_5);
  return VAR_5;
 }
 FUNC_0(VAR_4, "atl1e_request_irq OK\n");
 return VAR_5;
}
