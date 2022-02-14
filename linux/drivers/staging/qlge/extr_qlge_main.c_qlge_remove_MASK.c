
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql_adapter {int timer; } ;
struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct net_device*) ;
 struct ql_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct pci_dev*) ;
 struct net_device* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct ql_adapter*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static void FUNC_8(struct pci_dev *VAR_0)
{
 struct net_device *VAR_1 = FUNC_4(VAR_0);
 struct ql_adapter *VAR_2 = FUNC_2(VAR_1);
 FUNC_0(&VAR_2->timer);
 FUNC_5(VAR_2);
 FUNC_7(VAR_1);
 FUNC_6(VAR_0);
 FUNC_3(VAR_0);
 FUNC_1(VAR_1);
}
