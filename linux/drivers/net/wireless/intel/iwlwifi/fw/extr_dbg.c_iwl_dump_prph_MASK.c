
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct iwl_trans {int dummy; } ;
struct iwl_prph_range {int end; int start; } ;
struct iwl_fw_runtime {struct iwl_trans* trans; } ;
struct iwl_fw_error_dump_prph {scalar_t__ data; void* prph_start; } ;
struct iwl_fw_error_dump_data {scalar_t__ data; void* len; void* type; } ;


 int FUNC_0 (struct iwl_trans*,char*) ;
 int VAR_0 ;
 void* FUNC_1 (int) ;
 struct iwl_fw_error_dump_data* FUNC_2 (struct iwl_fw_error_dump_data*) ;
 int FUNC_3 (struct iwl_trans*,int,int,void*) ;
 int FUNC_4 (struct iwl_trans*,unsigned long*) ;
 int FUNC_5 (struct iwl_trans*,unsigned long*) ;

__attribute__((used)) static void FUNC_6(struct iwl_fw_runtime *VAR_1,
     const struct iwl_prph_range *VAR_2,
     u32 VAR_3, void *VAR_4)
{
 struct iwl_fw_error_dump_prph *VAR_5;
 struct iwl_trans *VAR_6 = VAR_1->trans;
 struct iwl_fw_error_dump_data **VAR_7 =
  (struct iwl_fw_error_dump_data **)VAR_4;
 unsigned long VAR_8;
 u32 VAR_9;

 if (!VAR_7)
  return;

 FUNC_0(VAR_6, "WRT PRPH dump\n");

 if (!FUNC_4(VAR_6, &VAR_8))
  return;

 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {

  int VAR_10 = VAR_2[VAR_9].end -
    VAR_2[VAR_9].start + 4;

  (*VAR_7)->type = FUNC_1(VAR_0);
  (*VAR_7)->len = FUNC_1(sizeof(*VAR_5) +
     VAR_10);
  VAR_5 = (void *)(*VAR_7)->data;
  VAR_5->prph_start = FUNC_1(VAR_2[VAR_9].start);

  FUNC_3(VAR_6, VAR_2[VAR_9].start,

        VAR_2[VAR_9].end -
        VAR_2[VAR_9].start + 4,
        (void *)VAR_5->data);

  *VAR_7 = FUNC_2(*VAR_7);
 }

 FUNC_5(VAR_6, &VAR_8);
}
