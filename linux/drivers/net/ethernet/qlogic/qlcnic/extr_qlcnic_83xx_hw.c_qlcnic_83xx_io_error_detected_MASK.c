
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_adapter {int state; } ;
struct pci_dev {int dummy; } ;
typedef int pci_ers_result_t ;
typedef scalar_t__ pci_channel_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct pci_dev*) ;
 struct qlcnic_adapter* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct qlcnic_adapter*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static pci_ers_result_t FUNC_5(struct pci_dev *VAR_7,
            pci_channel_state_t VAR_8)
{
 struct qlcnic_adapter *VAR_9 = FUNC_1(VAR_7);

 if (VAR_8 == VAR_6)
  return VAR_0;

 if (VAR_8 == VAR_5)
  return VAR_2;

 FUNC_4(VAR_3, &VAR_9->state);
 FUNC_4(VAR_4, &VAR_9->state);

 FUNC_3(VAR_9);

 FUNC_2(VAR_7);
 FUNC_0(VAR_7);

 return VAR_1;
}
