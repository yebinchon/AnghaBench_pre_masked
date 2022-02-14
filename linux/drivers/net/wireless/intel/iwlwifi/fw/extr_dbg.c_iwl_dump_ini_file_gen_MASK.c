
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct list_head {int dummy; } ;
struct TYPE_4__ {TYPE_1__* active_trigs; } ;
struct iwl_fw_runtime {TYPE_2__ dump; } ;
struct iwl_fw_ini_trigger {void* num_regions; } ;
struct iwl_fw_ini_dump_file_hdr {void* file_len; void* barker; } ;
struct iwl_fw_ini_dump_entry {int size; int list; scalar_t__ data; } ;
typedef enum iwl_fw_ini_trigger_id { ____Placeholder_iwl_fw_ini_trigger_id } iwl_fw_ini_trigger_id ;
struct TYPE_3__ {struct iwl_fw_ini_trigger* trig; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct iwl_fw_runtime*,struct iwl_fw_ini_trigger*,struct list_head*) ;
 int FUNC_2 (struct iwl_fw_runtime*,int) ;
 int FUNC_3 (struct iwl_fw_ini_dump_entry*) ;
 struct iwl_fw_ini_dump_entry* FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 (void*) ;
 int FUNC_6 (int *,struct list_head*) ;

__attribute__((used)) static u32 FUNC_7(struct iwl_fw_runtime *VAR_2,
     enum iwl_fw_ini_trigger_id VAR_3,
     struct list_head *VAR_4)
{
 struct iwl_fw_ini_dump_entry *VAR_5;
 struct iwl_fw_ini_dump_file_hdr *VAR_6;
 struct iwl_fw_ini_trigger *VAR_7;
 u32 VAR_8;

 if (!FUNC_2(VAR_2, VAR_3))
  return 0;

 VAR_7 = VAR_2->dump.active_trigs[VAR_3].trig;
 if (!VAR_7 || !FUNC_5(VAR_7->num_regions))
  return 0;

 VAR_5 = FUNC_4(sizeof(*VAR_5) + sizeof(*VAR_6), VAR_0);
 if (!VAR_5)
  return 0;

 VAR_5->size = sizeof(*VAR_6);

 VAR_8 = FUNC_1(VAR_2, VAR_7, VAR_4);
 if (!VAR_8) {
  FUNC_3(VAR_5);
  return 0;
 }

 VAR_6 = (void *)VAR_5->data;
 VAR_6->barker = FUNC_0(VAR_1);
 VAR_6->file_len = FUNC_0(VAR_8 + VAR_5->size);

 FUNC_6(&VAR_5->list, VAR_4);

 return FUNC_5(VAR_6->file_len);
}
