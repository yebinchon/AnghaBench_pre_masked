
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct iwl_fw_runtime {int num_of_paging_blk; TYPE_3__* trans; } ;
struct iwl_fw_ini_region_cfg {int dummy; } ;
struct TYPE_5__ {int paging_cnt; } ;
struct TYPE_6__ {TYPE_2__ init_dram; TYPE_1__* trans_cfg; } ;
struct TYPE_4__ {scalar_t__ gen2; } ;



__attribute__((used)) static u32 FUNC_0(struct iwl_fw_runtime *VAR_0,
          struct iwl_fw_ini_region_cfg *VAR_1)
{
 if (VAR_0->trans->trans_cfg->gen2)
  return VAR_0->trans->init_dram.paging_cnt;

 return VAR_0->num_of_paging_blk;
}
