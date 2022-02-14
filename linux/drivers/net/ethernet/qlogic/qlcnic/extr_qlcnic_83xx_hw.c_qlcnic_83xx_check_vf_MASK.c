
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct qlcnic_hardware_context {int fw_hal_version; scalar_t__ op_mode; int pci_func; } ;
struct qlcnic_adapter {int * nic_ops; int state; TYPE_1__* pdev; struct qlcnic_hardware_context* ahw; } ;
struct pci_device_id {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct qlcnic_hardware_context*,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 int VAR_5 ;
 int FUNC_2 (int *,char*,int) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ) ;
 int VAR_6 ;
 int FUNC_4 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_5 (struct qlcnic_adapter*) ;
 int FUNC_6 (struct qlcnic_adapter*) ;
 int VAR_7 ;
 int FUNC_7 (int ,int *) ;

void FUNC_8(struct qlcnic_adapter *VAR_8,
     const struct pci_device_id *VAR_9)
{
 u32 VAR_10, VAR_11;
 struct qlcnic_hardware_context *VAR_12 = VAR_8->ahw;

 VAR_12->fw_hal_version = 2;
 FUNC_4(VAR_8);

 if (FUNC_5(VAR_8)) {
  FUNC_6(VAR_8);
  return;
 }


 VAR_10 = FUNC_0(VAR_8->ahw, VAR_4);
 if (VAR_10 == VAR_3)
  VAR_11 = VAR_1;
 else
  VAR_11 = FUNC_1(VAR_10,
        VAR_12->pci_func);

 if (VAR_11 == VAR_2) {
  VAR_12->op_mode = VAR_2;
  FUNC_2(&VAR_8->pdev->dev,
    "HAL Version: %d Non Privileged function\n",
    VAR_12->fw_hal_version);
  VAR_8->nic_ops = &VAR_7;
 } else {
  if (FUNC_3(VAR_8->pdev,
         VAR_0))
   FUNC_7(VAR_5, &VAR_8->state);
  VAR_8->nic_ops = &VAR_6;
 }
}
