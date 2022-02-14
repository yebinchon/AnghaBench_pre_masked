
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct qlcnic_adapter {int * nic_ops; TYPE_2__* ahw; TYPE_1__* pdev; } ;
struct pci_device_id {int dummy; } ;
struct TYPE_4__ {void* fw_hal_version; scalar_t__ op_mode; int pci_func; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 void* FUNC_1 (struct qlcnic_adapter*,int ) ;
 int FUNC_2 (int *,char*,void*) ;
 int FUNC_3 (struct qlcnic_adapter*) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_4(struct qlcnic_adapter *VAR_7,
       const struct pci_device_id *VAR_8)
{
 u32 VAR_9, VAR_10;


 VAR_7->ahw->fw_hal_version = FUNC_1(VAR_7,
          VAR_1);


 FUNC_3(VAR_7);


 VAR_9 = FUNC_1(VAR_7, VAR_0);
 if (VAR_9 == VAR_4)
  VAR_10 = VAR_2;
 else
  VAR_10 = FUNC_0(VAR_9, VAR_7->ahw->pci_func);

 if (VAR_10 == VAR_3) {
  VAR_7->ahw->op_mode = VAR_3;
  FUNC_2(&VAR_7->pdev->dev,
   "HAL Version: %d Non Privileged function\n",
    VAR_7->ahw->fw_hal_version);
  VAR_7->nic_ops = &VAR_6;
 } else
  VAR_7->nic_ops = &VAR_5;
}
