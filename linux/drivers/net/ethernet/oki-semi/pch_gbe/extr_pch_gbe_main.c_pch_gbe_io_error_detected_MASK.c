
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct pch_gbe_adapter {int dummy; } ;
struct net_device {int dummy; } ;
typedef int pci_ers_result_t ;
typedef int pci_channel_state_t ;


 int VAR_0 ;
 struct pch_gbe_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct pch_gbe_adapter*) ;
 int FUNC_4 (struct pci_dev*) ;
 struct net_device* FUNC_5 (struct pci_dev*) ;

__attribute__((used)) static pci_ers_result_t FUNC_6(struct pci_dev *VAR_1,
      pci_channel_state_t VAR_2)
{
 struct net_device *VAR_3 = FUNC_5(VAR_1);
 struct pch_gbe_adapter *VAR_4 = FUNC_0(VAR_3);

 FUNC_1(VAR_3);
 if (FUNC_2(VAR_3))
  FUNC_3(VAR_4);
 FUNC_4(VAR_1);

 return VAR_0;
}
