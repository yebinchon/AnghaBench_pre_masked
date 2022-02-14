
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct iwl_fw_runtime {int trans; } ;
struct TYPE_2__ {int range_data_size; } ;
struct iwl_fw_ini_region_cfg {TYPE_1__ internal; int offset; int * start_addr; } ;
struct iwl_fw_ini_error_dump_range {int range_data_size; void* internal_base_addr; int * data; } ;
typedef int __le32 ;


 void* FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct iwl_fw_runtime *VAR_0,
     struct iwl_fw_ini_region_cfg *VAR_1,
     void *VAR_2, int VAR_3)
{
 struct iwl_fw_ini_error_dump_range *VAR_4 = VAR_2;
 __le32 *VAR_5 = VAR_4->data;
 u32 VAR_6 = FUNC_2(VAR_1->start_addr[VAR_3]) + FUNC_2(VAR_1->offset);
 int VAR_7;

 VAR_4->internal_base_addr = FUNC_0(VAR_6);
 VAR_4->range_data_size = VAR_1->internal.range_data_size;
 for (VAR_7 = 0; VAR_7 < FUNC_2(VAR_1->internal.range_data_size); VAR_7 += 4)
  *VAR_5++ = FUNC_0(FUNC_1(VAR_0->trans, VAR_6 + VAR_7));

 return sizeof(*VAR_4) + FUNC_2(VAR_4->range_data_size);
}
