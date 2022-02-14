
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct qlcnic_adapter {int * mac_addr; TYPE_1__* ahw; struct pci_dev* pdev; struct net_device* netdev; } ;
struct pci_dev {int dev; } ;
struct net_device {int addr_len; int * dev_addr; } ;
struct TYPE_2__ {int pci_func; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (struct qlcnic_adapter*,int *,int ) ;

int FUNC_4(struct qlcnic_adapter *VAR_1)
{
 struct net_device *VAR_2 = VAR_1->netdev;
 struct pci_dev *VAR_3 = VAR_1->pdev;
 u8 VAR_4[VAR_0];
 int VAR_5;

 VAR_5 = FUNC_3(VAR_1, VAR_4,
         VAR_1->ahw->pci_func);
 if (VAR_5)
  return VAR_5;

 FUNC_2(VAR_2->dev_addr, VAR_4, VAR_0);
 FUNC_2(VAR_1->mac_addr, VAR_2->dev_addr, VAR_2->addr_len);



 if (!FUNC_1(VAR_2->dev_addr))
  FUNC_0(&VAR_3->dev, "Bad MAC address %pM.\n",
     VAR_2->dev_addr);

 return 0;
}
