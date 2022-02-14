
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {scalar_t__ fw_diag_ce_download; int patch_load_addr; } ;
struct ath10k {TYPE_2__ hw_params; TYPE_1__* running_fw; } ;
struct TYPE_6__ {void* firmware_data; int firmware_len; } ;
struct TYPE_4__ {TYPE_3__ fw_file; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*,int ,void const*,int ) ;
 int FUNC_1 (struct ath10k*,int ,char*,void const*,int ) ;
 int FUNC_2 (struct ath10k*,char*,int) ;
 int FUNC_3 (struct ath10k*,int ,void const*,int ) ;
 int FUNC_4 (struct ath10k*,TYPE_3__*) ;
 int FUNC_5 (struct ath10k*,char*,int) ;

__attribute__((used)) static int FUNC_6(struct ath10k *VAR_1)
{
 u32 VAR_2, VAR_3;
 const void *VAR_4;
 int VAR_5;

 VAR_2 = VAR_1->hw_params.patch_load_addr;

 VAR_4 = VAR_1->running_fw->fw_file.firmware_data;
 VAR_3 = VAR_1->running_fw->fw_file.firmware_len;

 VAR_5 = FUNC_4(VAR_1, &VAR_1->running_fw->fw_file);
 if (VAR_5) {
  FUNC_2(VAR_1, "failed to configure fw code swap: %d\n",
      VAR_5);
  return VAR_5;
 }

 FUNC_1(VAR_1, VAR_0,
     "boot uploading firmware image %pK len %d\n",
     VAR_4, VAR_3);





 if (VAR_1->hw_params.fw_diag_ce_download) {
  VAR_5 = FUNC_3(VAR_1, VAR_2,
         VAR_4, VAR_3);
  if (VAR_5 == 0)

   return 0;

  FUNC_5(VAR_1,
       "failed to upload firmware via diag ce, trying BMI: %d",
       VAR_5);
 }

 return FUNC_0(VAR_1, VAR_2,
     VAR_4, VAR_3);
}
