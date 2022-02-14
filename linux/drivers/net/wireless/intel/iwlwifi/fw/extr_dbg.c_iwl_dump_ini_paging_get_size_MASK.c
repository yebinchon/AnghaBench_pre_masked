
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct iwl_fw_runtime {TYPE_3__* fw_paging_db; TYPE_5__* trans; } ;
struct iwl_fw_ini_region_cfg {int dummy; } ;
struct iwl_fw_ini_error_dump_range {int dummy; } ;
struct iwl_fw_ini_error_dump {int dummy; } ;
struct TYPE_7__ {TYPE_1__* paging; } ;
struct TYPE_10__ {TYPE_2__ init_dram; TYPE_4__* trans_cfg; } ;
struct TYPE_9__ {scalar_t__ gen2; } ;
struct TYPE_8__ {int fw_paging_size; } ;
struct TYPE_6__ {int size; } ;


 int FUNC_0 (struct iwl_fw_runtime*,struct iwl_fw_ini_region_cfg*) ;

__attribute__((used)) static u32 FUNC_1(struct iwl_fw_runtime *VAR_0,
     struct iwl_fw_ini_region_cfg *VAR_1)
{
 int VAR_2;
 u32 VAR_3 = sizeof(struct iwl_fw_ini_error_dump_range);
 u32 VAR_4 = sizeof(struct iwl_fw_ini_error_dump);

 if (VAR_0->trans->trans_cfg->gen2) {
  for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0, VAR_1); VAR_2++)
   VAR_4 += VAR_3 +
    VAR_0->trans->init_dram.paging[VAR_2].size;
 } else {
  for (VAR_2 = 1; VAR_2 <= FUNC_0(VAR_0, VAR_1); VAR_2++)
   VAR_4 += VAR_3 +
    VAR_0->fw_paging_db[VAR_2].fw_paging_size;
 }

 return VAR_4;
}
