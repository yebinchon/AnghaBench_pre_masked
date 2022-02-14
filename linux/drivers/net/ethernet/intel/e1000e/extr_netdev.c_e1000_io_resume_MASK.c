
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct e1000_adapter {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct e1000_adapter*) ;
 int FUNC_1 (struct e1000_adapter*) ;
 int FUNC_2 (struct e1000_adapter*) ;
 struct e1000_adapter* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 struct net_device* FUNC_6 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_7(struct pci_dev *VAR_1)
{
 struct net_device *VAR_2 = FUNC_6(VAR_1);
 struct e1000_adapter *VAR_3 = FUNC_3(VAR_2);

 FUNC_0(VAR_3);

 if (FUNC_5(VAR_2))
  FUNC_2(VAR_3);

 FUNC_4(VAR_2);





 if (!(VAR_3->flags & VAR_0))
  FUNC_1(VAR_3);
}
