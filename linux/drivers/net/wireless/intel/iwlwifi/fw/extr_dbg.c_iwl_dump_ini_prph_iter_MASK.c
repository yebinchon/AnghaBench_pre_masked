
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


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct iwl_fw_runtime *VAR_1,
      struct iwl_fw_ini_region_cfg *VAR_2,
      void *VAR_3, int VAR_4)
{
 struct iwl_fw_ini_error_dump_range *VAR_5 = VAR_3;
 __le32 *VAR_6 = VAR_5->data;
 u32 VAR_7;
 u32 VAR_8 = FUNC_2(VAR_2->start_addr[VAR_4]) + FUNC_2(VAR_2->offset);
 int VAR_9;

 VAR_5->internal_base_addr = FUNC_0(VAR_8);
 VAR_5->range_data_size = VAR_2->internal.range_data_size;
 for (VAR_9 = 0; VAR_9 < FUNC_2(VAR_2->internal.range_data_size); VAR_9 += 4) {
  VAR_7 = FUNC_1(VAR_1->trans, VAR_8 + VAR_9);
  if (VAR_7 == 0x5a5a5a5a)
   return -VAR_0;
  *VAR_6++ = FUNC_0(VAR_7);
 }

 return sizeof(*VAR_5) + FUNC_2(VAR_5->range_data_size);
}
