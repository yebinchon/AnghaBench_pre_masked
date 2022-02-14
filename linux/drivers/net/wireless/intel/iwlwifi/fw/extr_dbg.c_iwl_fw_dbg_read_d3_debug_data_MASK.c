
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int d3_debug_data; } ;
struct iwl_fw_runtime {TYPE_1__ dump; TYPE_2__* trans; } ;
struct iwl_cfg {int d3_debug_data_length; int d3_debug_data_base_addr; } ;
struct TYPE_4__ {struct iwl_cfg* cfg; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_fw_runtime*,char*) ;
 int FUNC_1 (struct iwl_fw_runtime*) ;
 int FUNC_2 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;

void FUNC_4(struct iwl_fw_runtime *VAR_1)
{
 const struct iwl_cfg *VAR_2 = VAR_1->trans->cfg;

 if (!FUNC_1(VAR_1))
  return;

 if (!VAR_1->dump.d3_debug_data) {
  VAR_1->dump.d3_debug_data = FUNC_3(VAR_2->d3_debug_data_length,
         VAR_0);
  if (!VAR_1->dump.d3_debug_data) {
   FUNC_0(VAR_1,
    "failed to allocate memory for D3 debug data\n");
   return;
  }
 }


 FUNC_2(VAR_1->trans, VAR_2->d3_debug_data_base_addr,
     VAR_1->dump.d3_debug_data,
     VAR_2->d3_debug_data_length);
}
