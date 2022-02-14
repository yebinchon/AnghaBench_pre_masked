
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct net_device {int dummy; } ;
struct igc_adapter {struct pci_dev* pdev; struct net_device* netdev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct igc_adapter*,int) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct igc_adapter*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;

int FUNC_6(struct igc_adapter *VAR_1)
{
 struct net_device *VAR_2 = VAR_1->netdev;
 struct pci_dev *VAR_3 = VAR_1->pdev;
 int VAR_4 = 0;

 if (FUNC_5(VAR_2))
  FUNC_1(VAR_2);

 FUNC_4(VAR_1);

 if (FUNC_2(VAR_1, 1)) {
  FUNC_0(&VAR_3->dev, "Unable to allocate memory for queues\n");
  return -VAR_0;
 }

 if (FUNC_5(VAR_2))
  VAR_4 = FUNC_3(VAR_2);

 return VAR_4;
}
