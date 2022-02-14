
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; int irq; } ;
struct net_device {int name; } ;
struct atl1c_adapter {int have_msi; struct pci_dev* pdev; struct net_device* netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int) ;
 scalar_t__ FUNC_2 (struct atl1c_adapter*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (int ,int ,int,int ,struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct atl1c_adapter *VAR_2)
{
 struct pci_dev *VAR_3 = VAR_2->pdev;
 struct net_device *VAR_4 = VAR_2->netdev;
 int VAR_5 = 0;
 int VAR_6 = 0;

 VAR_2->have_msi = 1;
 VAR_6 = FUNC_4(VAR_2->pdev);
 if (VAR_6) {
  if (FUNC_2(VAR_2))
   FUNC_1(&VAR_3->dev,
    "Unable to allocate MSI interrupt Error: %d\n",
    VAR_6);
  VAR_2->have_msi = 0;
 }

 if (!VAR_2->have_msi)
  VAR_5 |= VAR_0;
 VAR_6 = FUNC_5(VAR_2->pdev->irq, VAR_1, VAR_5,
   VAR_4->name, VAR_4);
 if (VAR_6) {
  if (FUNC_2(VAR_2))
   FUNC_1(&VAR_3->dev,
    "Unable to allocate interrupt Error: %d\n",
    VAR_6);
  if (VAR_2->have_msi)
   FUNC_3(VAR_2->pdev);
  return VAR_6;
 }
 if (FUNC_2(VAR_2))
  FUNC_0(&VAR_3->dev, "atl1c_request_irq OK\n");
 return VAR_6;
}
