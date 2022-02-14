
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_adapter {int need_fw_reset; int state; int * msix_entries; TYPE_1__* ahw; struct net_device* netdev; } ;
struct pci_dev {int error_state; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ op_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qlcnic_adapter*,int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct qlcnic_adapter*,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct net_device*,char*) ;
 int FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct net_device*) ;
 int VAR_8 ;
 int FUNC_7 (struct pci_dev*) ;
 struct qlcnic_adapter* FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*) ;
 scalar_t__ FUNC_11 (struct qlcnic_adapter*) ;
 int FUNC_12 (struct qlcnic_adapter*) ;
 int FUNC_13 (struct qlcnic_adapter*) ;
 int FUNC_14 (struct qlcnic_adapter*,int) ;
 int FUNC_15 (struct qlcnic_adapter*) ;
 int FUNC_16 (struct pci_dev*) ;
 int FUNC_17 (struct net_device*,int ) ;
 int FUNC_18 (struct qlcnic_adapter*) ;
 int FUNC_19 (struct qlcnic_adapter*) ;
 int FUNC_20 (struct qlcnic_adapter*,struct net_device*) ;
 int FUNC_21 (int ,int *) ;

__attribute__((used)) static int FUNC_22(struct pci_dev *VAR_9)
{
 int VAR_10, VAR_11;
 struct qlcnic_adapter *VAR_12 = FUNC_8(VAR_9);
 struct net_device *VAR_13 = VAR_12->netdev;

 VAR_9->error_state = VAR_8;

 VAR_10 = FUNC_7(VAR_9);
 if (VAR_10)
  return VAR_10;

 FUNC_10(VAR_9);
 FUNC_9(VAR_9);

 VAR_11 = FUNC_16(VAR_9);

 if (FUNC_11(VAR_12))
  return -VAR_1;

 if (VAR_12->ahw->op_mode != VAR_5 && VAR_11) {
  VAR_12->need_fw_reset = 1;
  FUNC_21(VAR_7, &VAR_12->state);
  FUNC_1(VAR_12, VAR_3,
        VAR_4);
  FUNC_0(VAR_12, VAR_0, "Restarting fw\n");
 }
 FUNC_12(VAR_12);

 VAR_10 = FUNC_19(VAR_12);
 if (VAR_10)
  return VAR_10;

 FUNC_15(VAR_12);
 FUNC_3(VAR_12->msix_entries);
 VAR_12->msix_entries = ((void*)0);
 VAR_10 = FUNC_18(VAR_12);

 if (VAR_10) {
  FUNC_3(VAR_12->msix_entries);
  FUNC_4(VAR_13, "failed to setup interrupt\n");
  return VAR_10;
 }

 if (FUNC_6(VAR_13)) {
  VAR_10 = FUNC_13(VAR_12);
  if (VAR_10) {
   FUNC_14(VAR_12, 1);
   FUNC_2(VAR_6, &VAR_12->state);
   FUNC_5(VAR_13);
   return VAR_10;
  }

  VAR_10 = FUNC_20(VAR_12, VAR_13);
  if (VAR_10)
   goto done;

  FUNC_17(VAR_13, VAR_2);
 }
 done:
 FUNC_5(VAR_13);
 return VAR_10;
}
