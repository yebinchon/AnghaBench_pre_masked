
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sky2_hw {int ports; struct net_device** dev; } ;
struct pci_dev {int dev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 struct sky2_hw* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int ) ;
 int FUNC_6 (struct pci_dev*,int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct pci_dev *VAR_1)
{
 struct sky2_hw *VAR_2 = FUNC_4(VAR_1);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->ports; VAR_3++) {
  struct net_device *VAR_4 = VAR_2->dev[VAR_3];

  FUNC_7();
  if (FUNC_3(VAR_4)) {
   FUNC_0(VAR_4);
   FUNC_2(VAR_4);
  }
  FUNC_8();
 }
 FUNC_9(&VAR_1->dev);
 FUNC_6(VAR_1, FUNC_1(&VAR_1->dev));
 FUNC_5(VAR_1, VAR_0);
}
