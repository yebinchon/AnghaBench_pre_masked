
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct net_device {int dummy; } ;
struct igb_adapter {int state; struct pci_dev* pdev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct igb_adapter*) ;
 int FUNC_2 (struct igb_adapter*) ;
 int FUNC_3 (struct igb_adapter*) ;
 int FUNC_4 (struct igb_adapter*) ;
 struct igb_adapter* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_1, bool VAR_2)
{
 struct igb_adapter *VAR_3 = FUNC_5(VAR_1);
 struct pci_dev *VAR_4 = VAR_3->pdev;

 FUNC_0(FUNC_8(VAR_0, &VAR_3->state));

 if (!VAR_2)
  FUNC_6(&VAR_4->dev);

 FUNC_1(VAR_3);
 FUNC_4(VAR_3);

 FUNC_3(VAR_3);
 FUNC_2(VAR_3);

 if (!VAR_2)
  FUNC_7(&VAR_4->dev);
 return 0;
}
