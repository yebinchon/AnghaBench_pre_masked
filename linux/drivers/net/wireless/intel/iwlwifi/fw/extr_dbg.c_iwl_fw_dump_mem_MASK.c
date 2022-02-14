
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_fw_runtime {int trans; } ;
struct iwl_fw_error_dump_mem {void* type; int data; void* offset; } ;
struct iwl_fw_error_dump_data {scalar_t__ data; void* len; void* type; } ;


 int FUNC_0 (struct iwl_fw_runtime*,char*,void*) ;
 int VAR_0 ;
 void* FUNC_1 (int ) ;
 struct iwl_fw_error_dump_data* FUNC_2 (struct iwl_fw_error_dump_data*) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct iwl_fw_runtime *VAR_1,
       struct iwl_fw_error_dump_data **VAR_2,
       u32 VAR_3, u32 VAR_4, u32 VAR_5)
{
 struct iwl_fw_error_dump_mem *VAR_6;

 if (!VAR_3)
  return;

 (*VAR_2)->type = FUNC_1(VAR_0);
 (*VAR_2)->len = FUNC_1(VAR_3 + sizeof(*VAR_6));
 VAR_6 = (void *)(*VAR_2)->data;
 VAR_6->type = FUNC_1(VAR_5);
 VAR_6->offset = FUNC_1(VAR_4);
 FUNC_3(VAR_1->trans, VAR_4, VAR_6->data, VAR_3);
 *VAR_2 = FUNC_2(*VAR_2);

 FUNC_0(VAR_1, "WRT memory dump. Type=%u\n", VAR_6->type);
}
