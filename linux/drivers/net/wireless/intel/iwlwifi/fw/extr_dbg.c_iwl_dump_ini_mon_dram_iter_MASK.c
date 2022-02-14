
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct iwl_fw_runtime {TYPE_3__* trans; } ;
struct iwl_fw_ini_region_cfg {int dummy; } ;
struct iwl_fw_ini_error_dump_range {int range_data_size; int data; int dram_base_addr; } ;
struct TYPE_5__ {TYPE_1__* fw_mon; } ;
struct TYPE_6__ {TYPE_2__ dbg; } ;
struct TYPE_4__ {int size; int block; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct iwl_fw_runtime *VAR_2,
      struct iwl_fw_ini_region_cfg *VAR_3, void *VAR_4,
      int VAR_5)
{
 struct iwl_fw_ini_error_dump_range *VAR_6 = VAR_4;
 u32 VAR_7 = FUNC_2(VAR_2->trans,
         VAR_1);

 if (VAR_7 == 0x5a5a5a5a)
  return -VAR_0;

 VAR_6->dram_base_addr = FUNC_1(VAR_7);
 VAR_6->range_data_size = FUNC_0(VAR_2->trans->dbg.fw_mon[VAR_5].size);

 FUNC_4(VAR_6->data, VAR_2->trans->dbg.fw_mon[VAR_5].block,
        VAR_2->trans->dbg.fw_mon[VAR_5].size);

 return sizeof(*VAR_6) + FUNC_3(VAR_6->range_data_size);
}
