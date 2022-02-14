
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int hw_addr; } ;
struct atl1e_adapter {TYPE_1__ hw; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct atl1e_adapter*) ;
 int FUNC_1 (struct atl1e_adapter*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct atl1e_adapter*) ;
 int FUNC_4 (struct net_device*) ;
 struct atl1e_adapter* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct pci_dev*) ;
 struct net_device* FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*,int ) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (struct net_device*) ;

__attribute__((used)) static void FUNC_12(struct pci_dev *VAR_1)
{
 struct net_device *VAR_2 = FUNC_7(VAR_1);
 struct atl1e_adapter *VAR_3 = FUNC_5(VAR_2);





 FUNC_10(VAR_0, &VAR_3->flags);

 FUNC_1(VAR_3);
 FUNC_0(VAR_3);

 FUNC_11(VAR_2);
 FUNC_3(VAR_3);
 FUNC_2(&VAR_3->hw);
 FUNC_8(VAR_1, VAR_3->hw.hw_addr);
 FUNC_9(VAR_1);
 FUNC_4(VAR_2);
 FUNC_6(VAR_1);
}
