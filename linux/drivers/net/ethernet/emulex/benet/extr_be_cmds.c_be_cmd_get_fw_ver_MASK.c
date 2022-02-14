
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct be_mcc_wrb {int dummy; } ;
struct be_cmd_resp_get_fw_version {int fw_on_flash_version_string; int firmware_version_string; } ;
struct be_cmd_req_get_fw_version {int hdr; } ;
struct be_adapter {int mcc_lock; int fw_on_flash; int fw_ver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct be_adapter*) ;
 int FUNC_1 (int *,int ,int ,int,struct be_mcc_wrb*,int *) ;
 void* FUNC_2 (struct be_mcc_wrb*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int) ;
 struct be_mcc_wrb* FUNC_6 (struct be_adapter*) ;

int FUNC_7(struct be_adapter *VAR_3)
{
 struct be_mcc_wrb *VAR_4;
 struct be_cmd_req_get_fw_version *VAR_5;
 int VAR_6;

 FUNC_3(&VAR_3->mcc_lock);

 VAR_4 = FUNC_6(VAR_3);
 if (!VAR_4) {
  VAR_6 = -VAR_1;
  goto err;
 }

 VAR_5 = FUNC_2(VAR_4);

 FUNC_1(&VAR_5->hdr, VAR_0,
          VAR_2, sizeof(*VAR_5), VAR_4,
          ((void*)0));
 VAR_6 = FUNC_0(VAR_3);
 if (!VAR_6) {
  struct be_cmd_resp_get_fw_version *VAR_7 = FUNC_2(VAR_4);

  FUNC_5(VAR_3->fw_ver, VAR_7->firmware_version_string,
   sizeof(VAR_3->fw_ver));
  FUNC_5(VAR_3->fw_on_flash, VAR_7->fw_on_flash_version_string,
   sizeof(VAR_3->fw_on_flash));
 }
err:
 FUNC_4(&VAR_3->mcc_lock);
 return VAR_6;
}
