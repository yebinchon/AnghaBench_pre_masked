
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int delay; int status; } ;
struct qlcnic_hardware_context {int msix_supported; scalar_t__ reset_context; TYPE_1__ idc; } ;
struct qlcnic_adapter {int state; int idc_aen_work; TYPE_2__* pdev; int flags; scalar_t__ need_fw_reset; scalar_t__ fw_fail_cnt; struct qlcnic_hardware_context* ahw; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,char*) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (struct qlcnic_adapter*) ;
 int FUNC_4 (struct qlcnic_adapter*) ;
 int FUNC_5 (struct qlcnic_adapter*,int) ;
 int FUNC_6 (int ,int *) ;

int FUNC_7(struct qlcnic_adapter *VAR_5, int VAR_6)
{
 struct qlcnic_hardware_context *VAR_7 = VAR_5->ahw;
 int VAR_8;

 FUNC_6(VAR_2, &VAR_7->idc.status);
 VAR_7->idc.delay = VAR_1;
 VAR_7->reset_context = 0;
 VAR_5->fw_fail_cnt = 0;
 VAR_7->msix_supported = 1;
 VAR_5->need_fw_reset = 0;
 VAR_5->flags |= VAR_0;

 VAR_8 = FUNC_4(VAR_5);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_5(VAR_5, VAR_6);
 if (VAR_8)
  return VAR_8;

 if (FUNC_3(VAR_5))
  FUNC_2(&VAR_5->pdev->dev, "failed to read mac addr\n");

 FUNC_0(&VAR_5->idc_aen_work, VAR_4);

 FUNC_1(VAR_3, &VAR_5->state);
 return 0;
}
