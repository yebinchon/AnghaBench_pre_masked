
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_npar_info {int mac; int max_bw; int min_bw; int phy_port; int type; int active; int pci_func; } ;
struct qlcnic_hardware_context {int total_nic_func; int msix_supported; int fw_hal_version; int max_pci_func; } ;
struct qlcnic_adapter {int flags; struct qlcnic_npar_info* npars; TYPE_1__* pdev; struct qlcnic_hardware_context* ahw; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,int ,...) ;
 int FUNC_1 (struct qlcnic_adapter*) ;
 int FUNC_2 (struct qlcnic_adapter*,int) ;
 int FUNC_3 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_4 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_5 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_6 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_7 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_8 (struct qlcnic_adapter*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_9(struct qlcnic_adapter *VAR_3)
{
 struct qlcnic_hardware_context *VAR_4 = VAR_3->ahw;
 struct device *VAR_5 = &VAR_3->pdev->dev;
 struct qlcnic_npar_info *VAR_6;
 int VAR_7, VAR_8 = -VAR_0;

 FUNC_3(VAR_3);

 if (!(VAR_3->flags & VAR_1)) {
  if (FUNC_6(VAR_3))
   return VAR_8;

  VAR_6 = VAR_3->npars;

  for (VAR_7 = 0; VAR_7 < VAR_4->total_nic_func; VAR_7++, VAR_6++) {
   FUNC_0(VAR_5, "id:%d active:%d type:%d port:%d min_bw:%d max_bw:%d mac_addr:%pM\n",
     VAR_6->pci_func, VAR_6->active, VAR_6->type,
     VAR_6->phy_port, VAR_6->min_bw, VAR_6->max_bw,
     VAR_6->mac);
  }

  FUNC_0(VAR_5, "Max functions = %d, active functions = %d\n",
    VAR_4->max_pci_func, VAR_4->total_nic_func);

  if (FUNC_5(VAR_3))
   return VAR_8;

  if (FUNC_8(VAR_3))
   return VAR_8;
 } else {
  if (FUNC_7(VAR_3))
   return VAR_8;
 }

 if (FUNC_4(VAR_3))
  return VAR_8;

 FUNC_1(VAR_3);
 VAR_4->msix_supported = VAR_2 ? 1 : 0;
 VAR_3->flags |= VAR_1;
 FUNC_2(VAR_3, 1);

 FUNC_0(VAR_5, "HAL Version: %d, Management function\n",
   VAR_4->fw_hal_version);

 return 0;
}
