
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_adapter {int state; int fw_work; struct net_device* netdev; } ;
struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
typedef int pci_ers_result_t ;
typedef scalar_t__ pci_channel_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (struct pci_dev*) ;
 struct qlcnic_adapter* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct qlcnic_adapter*) ;
 int FUNC_8 (struct qlcnic_adapter*,struct net_device*) ;
 int FUNC_9 (struct qlcnic_adapter*) ;
 int FUNC_10 (int ,int *) ;

__attribute__((used)) static pci_ers_result_t FUNC_11(struct pci_dev *VAR_7,
            pci_channel_state_t VAR_8)
{
 struct qlcnic_adapter *VAR_9 = FUNC_5(VAR_7);
 struct net_device *VAR_10 = VAR_9->netdev;

 if (VAR_8 == VAR_6)
  return VAR_0;

 if (VAR_8 == VAR_5)
  return VAR_2;

 FUNC_10(VAR_3, &VAR_9->state);
 FUNC_2(VAR_10);

 FUNC_0(&VAR_9->fw_work);

 if (FUNC_3(VAR_10))
  FUNC_8(VAR_9, VAR_10);

 FUNC_7(VAR_9);
 FUNC_9(VAR_9);

 FUNC_1(VAR_4, &VAR_9->state);

 FUNC_6(VAR_7);
 FUNC_4(VAR_7);

 return VAR_1;
}
