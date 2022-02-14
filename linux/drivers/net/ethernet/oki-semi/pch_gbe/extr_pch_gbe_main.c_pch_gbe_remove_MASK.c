
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct pch_gbe_adapter {int hw; int reset_task; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct net_device*) ;
 struct pch_gbe_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 struct net_device* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_0)
{
 struct net_device *VAR_1 = FUNC_4(VAR_0);
 struct pch_gbe_adapter *VAR_2 = FUNC_2(VAR_1);

 FUNC_0(&VAR_2->reset_task);
 FUNC_5(VAR_1);

 FUNC_3(&VAR_2->hw);

 FUNC_1(VAR_1);
}
