
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct iwl_fw_runtime {int trans; } ;
struct iwl_fw_error_dump_data {void* len; void* type; scalar_t__ data; } ;


 int FUNC_0 (struct iwl_fw_runtime*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_1 (int) ;
 struct iwl_fw_error_dump_data* FUNC_2 (struct iwl_fw_error_dump_data*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,unsigned long*) ;
 int FUNC_5 (int ,unsigned long*) ;
 int FUNC_6 (int ,int ,int) ;

__attribute__((used)) static void FUNC_7(struct iwl_fw_runtime *VAR_6,
    struct iwl_fw_error_dump_data **VAR_7)
{
 u8 *VAR_8 = (void *)(*VAR_7)->data;
 unsigned long VAR_9;
 int VAR_10;

 FUNC_0(VAR_6, "WRT radio registers dump\n");

 if (!FUNC_4(VAR_6->trans, &VAR_9))
  return;

 (*VAR_7)->type = FUNC_1(VAR_0);
 (*VAR_7)->len = FUNC_1(VAR_1);

 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
  u32 VAR_11 = VAR_3;

  VAR_11 |= VAR_10 << VAR_2;
  FUNC_6(VAR_6->trans, VAR_4, VAR_11);
  *VAR_8 = (u8)FUNC_3(VAR_6->trans, VAR_5);

  VAR_8++;
 }

 *VAR_7 = FUNC_2(*VAR_7);

 FUNC_5(VAR_6->trans, &VAR_9);
}
