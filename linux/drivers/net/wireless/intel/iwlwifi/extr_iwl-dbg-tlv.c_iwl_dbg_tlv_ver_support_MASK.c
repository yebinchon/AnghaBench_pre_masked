
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct iwl_ucode_tlv {int type; int * data; } ;
struct iwl_fw_ini_header {int tlv_version; } ;
struct TYPE_2__ {size_t min_ver; size_t max_ver; } ;


 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;
 size_t FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct iwl_ucode_tlv *VAR_2)
{
 struct iwl_fw_ini_header *VAR_3 = (void *)&VAR_2->data[0];
 u32 VAR_4 = FUNC_0(VAR_2->type);
 u32 VAR_5 = VAR_4 - VAR_0;
 u32 VAR_6 = FUNC_0(VAR_3->tlv_version);

 if (VAR_6 < VAR_1[VAR_5].min_ver ||
     VAR_6 > VAR_1[VAR_5].max_ver)
  return 0;

 return 1;
}
