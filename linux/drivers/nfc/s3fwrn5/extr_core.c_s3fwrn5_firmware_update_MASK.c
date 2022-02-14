
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct s3fwrn5_info {int fw_info; TYPE_2__* ndev; } ;
struct TYPE_4__ {TYPE_1__* nfc_dev; int manufact_specific_info; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct s3fwrn5_info*,char*) ;
 int FUNC_7 (struct s3fwrn5_info*,int ) ;
 int FUNC_8 (struct s3fwrn5_info*,int) ;

__attribute__((used)) static int FUNC_9(struct s3fwrn5_info *VAR_3)
{
 bool VAR_4;
 int VAR_5;

 FUNC_4(&VAR_3->fw_info, "sec_s3fwrn5_firmware.bin");



 FUNC_8(VAR_3, 0);
 FUNC_7(VAR_3, VAR_1);

 VAR_5 = FUNC_5(&VAR_3->fw_info);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_4 = FUNC_1(&VAR_3->fw_info,
  VAR_3->ndev->manufact_specific_info);
 if (!VAR_4)
  goto out;

 FUNC_0(&VAR_3->ndev->nfc_dev->dev, "Detected new firmware version\n");

 VAR_5 = FUNC_3(&VAR_3->fw_info);
 if (VAR_5 < 0)
  goto out;



 FUNC_7(VAR_3, VAR_2);

 FUNC_8(VAR_3, 1);
 VAR_5 = FUNC_6(VAR_3, "sec_s3fwrn5_rfreg.bin");
 FUNC_8(VAR_3, 0);

out:
 FUNC_7(VAR_3, VAR_0);
 FUNC_2(&VAR_3->fw_info);
 return VAR_5;
}
