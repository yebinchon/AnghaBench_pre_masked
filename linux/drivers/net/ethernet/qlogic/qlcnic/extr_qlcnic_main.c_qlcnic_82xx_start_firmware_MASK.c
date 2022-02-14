
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qlcnic_adapter {TYPE_2__* pdev; scalar_t__ need_fw_reset; TYPE_1__* ahw; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int fw_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct qlcnic_adapter*,int ,int ) ;
 int FUNC_1 (struct qlcnic_adapter*,int ,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct qlcnic_adapter*) ;
 int FUNC_4 (struct qlcnic_adapter*) ;
 int FUNC_5 (struct qlcnic_adapter*) ;
 int FUNC_6 (struct qlcnic_adapter*) ;
 int FUNC_7 (struct qlcnic_adapter*) ;
 int FUNC_8 (struct qlcnic_adapter*,int) ;
 int FUNC_9 (struct qlcnic_adapter*) ;
 scalar_t__ VAR_6 ;
 int FUNC_10 (struct qlcnic_adapter*) ;
 int FUNC_11 (struct qlcnic_adapter*) ;
 int FUNC_12 (struct qlcnic_adapter*) ;
 int FUNC_13 (struct qlcnic_adapter*) ;
 int FUNC_14 (struct qlcnic_adapter*) ;

__attribute__((used)) static int FUNC_15(struct qlcnic_adapter *VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_3(VAR_7);
 if (VAR_8 < 0)
  return VAR_8;
 else if (!VAR_8)
  goto check_fw_status;

 if (VAR_6)
  FUNC_13(VAR_7);
 else {
  VAR_8 = FUNC_5(VAR_7);
  if (VAR_8)
   goto err_out;

  VAR_7->ahw->fw_type = VAR_5;
 }

 VAR_8 = FUNC_10(VAR_7);
 if (VAR_8 == 0)
  goto check_fw_status;

 VAR_8 = FUNC_11(VAR_7);
 if (VAR_8)
  goto err_out;

 VAR_8 = FUNC_9(VAR_7);
 if (VAR_8)
  goto err_out;

 FUNC_12(VAR_7);
 FUNC_0(VAR_7, VAR_0, VAR_4);

check_fw_status:
 VAR_8 = FUNC_6(VAR_7);
 if (VAR_8)
  goto err_out;

 FUNC_1(VAR_7, VAR_1, VAR_3);
 FUNC_8(VAR_7, 1);
 VAR_8 = FUNC_4(VAR_7);
 if (VAR_8) {
  FUNC_2(&VAR_7->pdev->dev,
   "Memory allocation failed for eswitch\n");
  goto err_out;
 }
 VAR_8 = FUNC_14(VAR_7);
 if (VAR_8)
  goto err_out;

 FUNC_7(VAR_7);
 VAR_7->need_fw_reset = 0;

 FUNC_12(VAR_7);
 return 0;

err_out:
 FUNC_1(VAR_7, VAR_1, VAR_2);
 FUNC_2(&VAR_7->pdev->dev, "Device state set to failed\n");

 FUNC_12(VAR_7);
 return VAR_8;
}
