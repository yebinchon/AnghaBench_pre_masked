
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iwl_fw_runtime {TYPE_3__* trans; TYPE_1__* fw; } ;
struct fw_img {int paging_mem_size; } ;
typedef enum iwl_ucode_type { ____Placeholder_iwl_ucode_type } iwl_ucode_type ;
struct TYPE_6__ {TYPE_2__* trans_cfg; } ;
struct TYPE_5__ {scalar_t__ gen2; } ;
struct TYPE_4__ {struct fw_img* img; } ;


 int FUNC_0 (struct iwl_fw_runtime*,char*) ;
 int FUNC_1 (struct iwl_fw_runtime*) ;
 int FUNC_2 (struct iwl_fw_runtime*,struct fw_img const*) ;
 int FUNC_3 (struct iwl_fw_runtime*,struct fw_img const*) ;

int FUNC_4(struct iwl_fw_runtime *VAR_0, enum iwl_ucode_type VAR_1)
{
 const struct fw_img *VAR_2 = &VAR_0->fw->img[VAR_1];
 int VAR_3;

 if (VAR_0->trans->trans_cfg->gen2)
  return 0;






 if (!VAR_2->paging_mem_size)
  return 0;

 VAR_3 = FUNC_2(VAR_0, VAR_2);
 if (VAR_3) {
  FUNC_0(VAR_0, "failed to save the FW paging image\n");
  return VAR_3;
 }

 VAR_3 = FUNC_3(VAR_0, VAR_2);
 if (VAR_3) {
  FUNC_0(VAR_0, "failed to send the paging cmd\n");
  FUNC_1(VAR_0);
  return VAR_3;
 }

 return 0;
}
