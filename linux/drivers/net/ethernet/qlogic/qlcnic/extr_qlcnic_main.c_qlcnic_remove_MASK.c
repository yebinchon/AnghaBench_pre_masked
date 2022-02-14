
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_hardware_context {struct qlcnic_hardware_context* fw_info; int mailbox; } ;
struct qlcnic_adapter {int * qlcnic_wq; struct qlcnic_hardware_context* ahw; int state; struct qlcnic_hardware_context* eswitch; struct qlcnic_hardware_context* npars; int dcb; int idc_aen_work; struct net_device* netdev; } ;
struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct qlcnic_hardware_context*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 struct qlcnic_adapter* FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*) ;
 scalar_t__ FUNC_9 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_10 (struct qlcnic_adapter*) ;
 int FUNC_11 (struct qlcnic_adapter*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct qlcnic_adapter*) ;
 int FUNC_14 (struct qlcnic_adapter*,int ) ;
 int FUNC_15 (struct qlcnic_adapter*) ;
 int FUNC_16 (struct qlcnic_hardware_context*) ;
 int FUNC_17 (struct qlcnic_adapter*,int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (struct qlcnic_adapter*) ;
 int FUNC_20 (struct qlcnic_adapter*) ;
 int FUNC_21 (struct qlcnic_adapter*) ;
 int FUNC_22 (struct qlcnic_adapter*) ;
 int FUNC_23 (struct qlcnic_adapter*) ;
 int FUNC_24 (struct qlcnic_adapter*) ;
 int FUNC_25 (struct qlcnic_adapter*) ;
 int FUNC_26 (struct qlcnic_adapter*) ;
 int FUNC_27 (struct qlcnic_adapter*) ;
 int FUNC_28 (struct net_device*) ;

__attribute__((used)) static void FUNC_29(struct pci_dev *VAR_1)
{
 struct qlcnic_adapter *VAR_2;
 struct net_device *VAR_3;
 struct qlcnic_hardware_context *VAR_4;

 VAR_2 = FUNC_7(VAR_1);
 if (VAR_2 == ((void*)0))
  return;

 VAR_3 = VAR_2->netdev;

 FUNC_15(VAR_2);
 FUNC_25(VAR_2);
 VAR_4 = VAR_2->ahw;

 FUNC_28(VAR_3);
 FUNC_24(VAR_2);

 if (FUNC_10(VAR_2)) {
  FUNC_14(VAR_2, 0);
  FUNC_0(&VAR_2->idc_aen_work);
  FUNC_13(VAR_2);
  FUNC_11(VAR_2);
  FUNC_12(VAR_4->mailbox);
  FUNC_4(VAR_4->fw_info);
 }

 FUNC_18(VAR_2->dcb);
 FUNC_19(VAR_2);
 FUNC_4(VAR_2->npars);
 FUNC_4(VAR_2->eswitch);

 if (FUNC_9(VAR_2))
  FUNC_17(VAR_2, 0);

 FUNC_1(VAR_0, &VAR_2->state);

 FUNC_21(VAR_2);

 FUNC_26(VAR_2);

 FUNC_23(VAR_2);

 FUNC_27(VAR_2);

 FUNC_16(VAR_2->ahw);

 FUNC_22(VAR_2);

 FUNC_6(VAR_1);
 FUNC_8(VAR_1);
 FUNC_5(VAR_1);

 if (VAR_2->qlcnic_wq) {
  FUNC_2(VAR_2->qlcnic_wq);
  VAR_2->qlcnic_wq = ((void*)0);
 }

 FUNC_20(VAR_2);
 FUNC_4(VAR_4);
 FUNC_3(VAR_3);
}
