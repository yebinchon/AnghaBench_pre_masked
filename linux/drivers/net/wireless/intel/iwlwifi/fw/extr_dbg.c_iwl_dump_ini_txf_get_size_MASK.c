
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct iwl_txf_iter_data {int fifo_size; } ;
struct TYPE_3__ {struct iwl_txf_iter_data txf_iter_data; } ;
struct iwl_fw_runtime {TYPE_1__ dump; } ;
struct TYPE_4__ {int header_only; int num_of_registers; } ;
struct iwl_fw_ini_region_cfg {TYPE_2__ fifos; } ;
struct iwl_fw_ini_error_dump_register {int dummy; } ;
struct iwl_fw_ini_error_dump_range {int dummy; } ;
struct iwl_fw_ini_error_dump {int dummy; } ;


 scalar_t__ FUNC_0 (struct iwl_fw_runtime*,struct iwl_fw_ini_region_cfg*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static u32 FUNC_2(struct iwl_fw_runtime *VAR_0,
         struct iwl_fw_ini_region_cfg *VAR_1)
{
 struct iwl_txf_iter_data *VAR_2 = &VAR_0->dump.txf_iter_data;
 u32 VAR_3 = 0;
 u32 VAR_4 = sizeof(struct iwl_fw_ini_error_dump_range) +
  FUNC_1(VAR_1->fifos.num_of_registers) *
  sizeof(struct iwl_fw_ini_error_dump_register);

 while (FUNC_0(VAR_0, VAR_1, VAR_3)) {
  VAR_3 += VAR_4;
  if (!VAR_1->fifos.header_only)
   VAR_3 += VAR_2->fifo_size;
 }

 if (VAR_3)
  VAR_3 += sizeof(struct iwl_fw_ini_error_dump);

 return VAR_3;
}
