
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct net_device {int dummy; } ;
struct atl1c_adapter {int dummy; } ;


 scalar_t__ FUNC_0 (struct atl1c_adapter*) ;
 int FUNC_1 (int *,char*) ;
 struct atl1c_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct atl1c_adapter*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 struct net_device* FUNC_6 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_7(struct pci_dev *VAR_0)
{
 struct net_device *VAR_1 = FUNC_6(VAR_0);
 struct atl1c_adapter *VAR_2 = FUNC_2(VAR_1);

 if (FUNC_5(VAR_1)) {
  if (FUNC_0(VAR_2)) {
   if (FUNC_4(VAR_2))
    FUNC_1(&VAR_0->dev,
     "Cannot bring device back up after reset\n");
   return;
  }
 }

 FUNC_3(VAR_1);
}
