
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct iwl_fw_runtime {int dummy; } ;
struct TYPE_2__ {int range_data_size; } ;
struct iwl_fw_ini_region_cfg {TYPE_1__ internal; } ;
struct iwl_fw_ini_error_dump_range {int dummy; } ;
struct iwl_fw_ini_error_dump {int dummy; } ;


 int FUNC_0 (struct iwl_fw_runtime*,struct iwl_fw_ini_region_cfg*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static u32 FUNC_2(struct iwl_fw_runtime *VAR_0,
         struct iwl_fw_ini_region_cfg *VAR_1)
{
 return sizeof(struct iwl_fw_ini_error_dump) +
  FUNC_0(VAR_0, VAR_1) *
  (sizeof(struct iwl_fw_ini_error_dump_range) +
   FUNC_1(VAR_1->internal.range_data_size));
}
