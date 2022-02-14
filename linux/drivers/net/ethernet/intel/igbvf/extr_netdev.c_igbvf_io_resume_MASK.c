
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct net_device {int dummy; } ;
struct igbvf_adapter {int dummy; } ;


 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (struct igbvf_adapter*) ;
 struct igbvf_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 struct net_device* FUNC_5 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_0)
{
 struct net_device *VAR_1 = FUNC_5(VAR_0);
 struct igbvf_adapter *VAR_2 = FUNC_2(VAR_1);

 if (FUNC_4(VAR_1)) {
  if (FUNC_1(VAR_2)) {
   FUNC_0(&VAR_0->dev,
    "can't bring device back up after reset\n");
   return;
  }
 }

 FUNC_3(VAR_1);
}
