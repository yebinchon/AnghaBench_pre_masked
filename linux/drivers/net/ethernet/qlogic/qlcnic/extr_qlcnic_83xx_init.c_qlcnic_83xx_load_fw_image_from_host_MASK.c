
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qlcnic_adapter {TYPE_2__* pdev; TYPE_1__* ahw; } ;
struct qlc_83xx_fw_info {int fw_file_name; int fw; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {struct qlc_83xx_fw_info* fw_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct qlcnic_adapter*,int ,int ) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_3 (int *,int ,int *) ;

__attribute__((used)) static int FUNC_4(struct qlcnic_adapter *VAR_4)
{
 struct qlc_83xx_fw_info *VAR_5 = VAR_4->ahw->fw_info;
 int VAR_6 = -VAR_0;

 if (FUNC_3(&VAR_5->fw, VAR_5->fw_file_name,
        &(VAR_4->pdev->dev))) {
  FUNC_1(&VAR_4->pdev->dev,
   "No file FW image, loading flash FW image.\n");
  FUNC_0(VAR_4, VAR_1,
        VAR_3);
 } else {
  if (FUNC_2(VAR_4))
   return VAR_6;
  FUNC_0(VAR_4, VAR_1,
        VAR_2);
 }

 return 0;
}
