
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct ixgbevf_adapter {int state; } ;
typedef int pci_ers_result_t ;
typedef scalar_t__ pci_channel_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ixgbevf_adapter*) ;
 struct ixgbevf_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (struct pci_dev*) ;
 struct net_device* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static pci_ers_result_t FUNC_10(struct pci_dev *VAR_5,
        pci_channel_state_t VAR_6)
{
 struct net_device *VAR_7 = FUNC_5(VAR_5);
 struct ixgbevf_adapter *VAR_8 = FUNC_1(VAR_7);

 if (!FUNC_9(VAR_3, &VAR_8->state))
  return VAR_0;

 FUNC_6();
 FUNC_2(VAR_7);

 if (FUNC_3(VAR_7))
  FUNC_0(VAR_8);

 if (VAR_6 == VAR_4) {
  FUNC_7();
  return VAR_0;
 }

 if (!FUNC_8(VAR_2, &VAR_8->state))
  FUNC_4(VAR_5);
 FUNC_7();


 return VAR_1;
}
