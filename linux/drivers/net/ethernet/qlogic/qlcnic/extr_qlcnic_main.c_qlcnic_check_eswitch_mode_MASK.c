
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct qlcnic_adapter {int flags; TYPE_2__* ahw; TYPE_1__* pdev; } ;
struct TYPE_4__ {int nic_mode; int fw_hal_version; scalar_t__ op_mode; int pci_func; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (struct qlcnic_adapter*,int ) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (struct qlcnic_adapter*) ;
 int FUNC_4 (struct qlcnic_adapter*) ;
 int FUNC_5 (struct qlcnic_adapter*) ;

__attribute__((used)) static int
FUNC_6(struct qlcnic_adapter *VAR_7)
{
 u32 VAR_8, VAR_9;
 int VAR_10 = 0;

 VAR_10 = FUNC_4(VAR_7);
 if (VAR_10)
  return VAR_10;

 if (VAR_7->flags & VAR_0)
  return 0;

 VAR_8 = FUNC_1(VAR_7, VAR_2);
 VAR_9 = FUNC_0(VAR_8, VAR_7->ahw->pci_func);

 if (VAR_8 == VAR_6)
  VAR_9 = VAR_4;
 else
  VAR_9 = FUNC_0(VAR_8, VAR_7->ahw->pci_func);

 if (VAR_7->flags & VAR_3) {
  if (VAR_9 == VAR_4) {
   VAR_7->ahw->op_mode = VAR_4;
   VAR_10 = FUNC_3(VAR_7);
   if (VAR_10)
    return VAR_10;

   FUNC_5(VAR_7);
   FUNC_2(&VAR_7->pdev->dev,
    "HAL Version: %d, Management function\n",
     VAR_7->ahw->fw_hal_version);
  } else if (VAR_9 == VAR_5) {
   VAR_7->ahw->op_mode = VAR_5;
   FUNC_2(&VAR_7->pdev->dev,
    "HAL Version: %d, Privileged function\n",
     VAR_7->ahw->fw_hal_version);
  }
 } else {
  VAR_7->ahw->nic_mode = VAR_1;
 }

 VAR_7->flags |= VAR_0;

 return VAR_10;
}
