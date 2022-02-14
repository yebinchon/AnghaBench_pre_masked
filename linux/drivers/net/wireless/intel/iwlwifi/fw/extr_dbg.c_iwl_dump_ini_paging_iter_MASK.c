
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct iwl_fw_runtime {TYPE_3__* trans; } ;
struct iwl_fw_ini_region_cfg {int dummy; } ;
struct iwl_fw_ini_error_dump_range {void* range_data_size; int data; void* page_num; } ;
struct TYPE_8__ {int gen2; } ;
struct TYPE_6__ {TYPE_1__* paging; } ;
struct TYPE_7__ {TYPE_2__ init_dram; TYPE_4__* trans_cfg; } ;
struct TYPE_5__ {int size; int block; } ;


 int FUNC_0 (struct iwl_fw_runtime*,struct iwl_fw_ini_region_cfg*,void*,int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct iwl_fw_runtime *VAR_0,
        struct iwl_fw_ini_region_cfg *VAR_1,
        void *VAR_2, int VAR_3)
{
 struct iwl_fw_ini_error_dump_range *VAR_4;
 u32 VAR_5;

 if (!VAR_0->trans->trans_cfg->gen2)
  return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);

 VAR_4 = VAR_2;
 VAR_5 = VAR_0->trans->init_dram.paging[VAR_3].size;

 VAR_4->page_num = FUNC_1(VAR_3);
 VAR_4->range_data_size = FUNC_1(VAR_5);
 FUNC_3(VAR_4->data, VAR_0->trans->init_dram.paging[VAR_3].block,
        VAR_5);

 return sizeof(*VAR_4) + FUNC_2(VAR_4->range_data_size);
}
