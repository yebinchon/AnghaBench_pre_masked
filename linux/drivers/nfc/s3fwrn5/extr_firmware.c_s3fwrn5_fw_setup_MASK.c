
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int sig; int custom_sig; int sig_size; int custom_sig_size; } ;
struct s3fwrn5_fw_info {TYPE_3__ fw; int sig; int sig_size; int sector_size; TYPE_2__* ndev; int base_addr; } ;
struct s3fwrn5_fw_cmd_get_bootinfo_rsp {int sector_size; } ;
struct TYPE_5__ {TYPE_1__* nfc_dev; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct s3fwrn5_fw_cmd_get_bootinfo_rsp*,int *) ;
 int FUNC_2 (struct s3fwrn5_fw_info*,struct s3fwrn5_fw_cmd_get_bootinfo_rsp*) ;
 scalar_t__ FUNC_3 (struct s3fwrn5_fw_cmd_get_bootinfo_rsp*) ;
 int FUNC_4 (struct s3fwrn5_fw_info*) ;
 int FUNC_5 (struct s3fwrn5_fw_info*) ;

int FUNC_6(struct s3fwrn5_fw_info *VAR_0)
{
 struct s3fwrn5_fw_cmd_get_bootinfo_rsp VAR_1;
 int VAR_2;



 VAR_2 = FUNC_5(VAR_0);
 if (VAR_2 < 0) {
  FUNC_0(&VAR_0->ndev->nfc_dev->dev,
   "Failed to get fw file, ret=%02x\n", VAR_2);
  return VAR_2;
 }



 VAR_2 = FUNC_2(VAR_0, &VAR_1);
 if (VAR_2 < 0) {
  FUNC_0(&VAR_0->ndev->nfc_dev->dev,
   "Failed to get bootinfo, ret=%02x\n", VAR_2);
  goto err;
 }



 VAR_2 = FUNC_1(&VAR_1, &VAR_0->base_addr);
 if (VAR_2 < 0) {
  FUNC_0(&VAR_0->ndev->nfc_dev->dev,
   "Unknown hardware version\n");
  goto err;
 }

 VAR_0->sector_size = VAR_1.sector_size;

 VAR_0->sig_size = FUNC_3(&VAR_1) ?
  VAR_0->fw.custom_sig_size : VAR_0->fw.sig_size;
 VAR_0->sig = FUNC_3(&VAR_1) ?
  VAR_0->fw.custom_sig : VAR_0->fw.sig;

 return 0;

err:
 FUNC_4(VAR_0);
 return VAR_2;
}
