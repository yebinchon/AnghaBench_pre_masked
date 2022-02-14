
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct iwl_ini_rxf_data {scalar_t__ size; } ;
struct iwl_fw_runtime {int dummy; } ;
struct TYPE_2__ {scalar_t__ header_only; int num_of_registers; } ;
struct iwl_fw_ini_region_cfg {TYPE_1__ fifos; } ;
struct iwl_fw_ini_error_dump_register {int dummy; } ;
struct iwl_fw_ini_error_dump_range {int dummy; } ;
struct iwl_fw_ini_error_dump {int dummy; } ;


 int FUNC_0 (struct iwl_fw_runtime*,struct iwl_fw_ini_region_cfg*,struct iwl_ini_rxf_data*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static u32 FUNC_2(struct iwl_fw_runtime *VAR_0,
         struct iwl_fw_ini_region_cfg *VAR_1)
{
 struct iwl_ini_rxf_data VAR_2;
 u32 VAR_3 = sizeof(struct iwl_fw_ini_error_dump) +
  sizeof(struct iwl_fw_ini_error_dump_range) +
  FUNC_1(VAR_1->fifos.num_of_registers) *
  sizeof(struct iwl_fw_ini_error_dump_register);

 if (VAR_1->fifos.header_only)
  return VAR_3;

 FUNC_0(VAR_0, VAR_1, &VAR_2);
 VAR_3 += VAR_2.size;

 return VAR_3;
}
