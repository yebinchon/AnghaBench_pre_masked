
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_prph_range {int end; int start; } ;
struct iwl_fw_runtime {int dummy; } ;
struct iwl_fw_error_dump_prph {int dummy; } ;
struct iwl_fw_error_dump_data {int dummy; } ;



__attribute__((used)) static void FUNC_0(struct iwl_fw_runtime *VAR_0,
    const struct iwl_prph_range *VAR_1,
    u32 VAR_2, void *VAR_3)
{
 u32 *VAR_4 = (u32 *)VAR_3;
 int VAR_5, VAR_6;

 if (!VAR_4)
  return;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {

  VAR_6 =
   VAR_1[VAR_5].end -
   VAR_1[VAR_5].start + 4;

  *VAR_4 += sizeof(struct iwl_fw_error_dump_data) +
   sizeof(struct iwl_fw_error_dump_prph) +
   VAR_6;
 }
}
