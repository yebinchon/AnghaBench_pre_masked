
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct e1000_adapter {int flags; } ;
typedef int pci_ers_result_t ;
typedef scalar_t__ pci_channel_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct e1000_adapter*) ;
 struct e1000_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (struct pci_dev*) ;
 struct net_device* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static pci_ers_result_t FUNC_7(struct pci_dev *VAR_4,
      pci_channel_state_t VAR_5)
{
 struct net_device *VAR_6 = FUNC_5(VAR_4);
 struct e1000_adapter *VAR_7 = FUNC_1(VAR_6);

 FUNC_2(VAR_6);

 if (VAR_5 == VAR_3)
  return VAR_0;

 if (FUNC_3(VAR_6))
  FUNC_0(VAR_7);

 if (!FUNC_6(VAR_2, &VAR_7->flags))
  FUNC_4(VAR_4);


 return VAR_1;
}
