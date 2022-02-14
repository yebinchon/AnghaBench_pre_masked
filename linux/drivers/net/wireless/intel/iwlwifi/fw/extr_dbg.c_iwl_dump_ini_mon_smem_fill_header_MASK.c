
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_fw_runtime {TYPE_2__* trans; } ;
struct iwl_fw_ini_region_cfg {int dummy; } ;
struct iwl_fw_ini_monitor_dump {int dummy; } ;
struct iwl_cfg {int fw_mon_smem_cycle_cnt_ptr_msk; int fw_mon_smem_cycle_cnt_ptr_addr; int fw_mon_smem_write_ptr_msk; int fw_mon_smem_write_ptr_addr; } ;
struct TYPE_4__ {TYPE_1__* trans_cfg; struct iwl_cfg* cfg; } ;
struct TYPE_3__ {scalar_t__ device_family; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct iwl_fw_runtime*,char*,scalar_t__) ;
 void* FUNC_1 (struct iwl_fw_runtime*,struct iwl_fw_ini_region_cfg*,struct iwl_fw_ini_monitor_dump*,int ,int ,int ,int ) ;

__attribute__((used)) static void
*FUNC_2(struct iwl_fw_runtime *VAR_2,
       struct iwl_fw_ini_region_cfg *VAR_3,
       void *VAR_4)
{
 struct iwl_fw_ini_monitor_dump *VAR_5 = (void *)VAR_4;
 const struct iwl_cfg *VAR_6 = VAR_2->trans->cfg;

 if (VAR_2->trans->trans_cfg->device_family != VAR_1 &&
     VAR_2->trans->trans_cfg->device_family != VAR_0) {
  FUNC_0(VAR_2, "Unsupported device family %d\n",
   VAR_2->trans->trans_cfg->device_family);
  return ((void*)0);
 }

 return FUNC_1(VAR_2, VAR_3, VAR_5,
         VAR_6->fw_mon_smem_write_ptr_addr,
         VAR_6->fw_mon_smem_write_ptr_msk,
         VAR_6->fw_mon_smem_cycle_cnt_ptr_addr,
         VAR_6->fw_mon_smem_cycle_cnt_ptr_msk);

}
