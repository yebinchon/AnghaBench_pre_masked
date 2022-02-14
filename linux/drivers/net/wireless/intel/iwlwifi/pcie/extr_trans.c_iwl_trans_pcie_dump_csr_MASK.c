
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_trans {int dummy; } ;
struct iwl_fw_error_dump_data {scalar_t__ data; void* len; void* type; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 struct iwl_fw_error_dump_data* FUNC_1 (struct iwl_fw_error_dump_data*) ;
 int FUNC_2 (struct iwl_trans*,int) ;

__attribute__((used)) static u32 FUNC_3(struct iwl_trans *VAR_2,
       struct iwl_fw_error_dump_data **VAR_3)
{
 u32 VAR_4 = sizeof(**VAR_3) + VAR_0;
 __le32 *VAR_5;
 int VAR_6;

 (*VAR_3)->type = FUNC_0(VAR_1);
 (*VAR_3)->len = FUNC_0(VAR_0);
 VAR_5 = (void *)(*VAR_3)->data;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6 += 4)
  *VAR_5++ = FUNC_0(FUNC_2(VAR_2, VAR_6));

 *VAR_3 = FUNC_1(*VAR_3);

 return VAR_4;
}
