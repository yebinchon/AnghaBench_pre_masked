
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct list_head {int dummy; } ;
struct TYPE_2__ {struct iwl_fw_ini_region_cfg** active_regs; } ;
struct iwl_fw_runtime {TYPE_1__ dump; } ;
struct iwl_fw_ini_trigger {int * data; int num_regions; } ;
struct iwl_fw_ini_region_cfg {int region_type; int domain; } ;


 size_t FUNC_0 (struct iwl_fw_ini_region_cfg**) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct iwl_fw_runtime*,char*,size_t) ;
 scalar_t__ FUNC_2 (int) ;
 size_t FUNC_3 (struct iwl_fw_runtime*,struct iwl_fw_ini_trigger*,struct list_head*) ;
 size_t FUNC_4 (struct iwl_fw_runtime*,struct list_head*,struct iwl_fw_ini_region_cfg*,struct iwl_fw_ini_region_cfg**) ;
 struct iwl_fw_ini_region_cfg** VAR_1 ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static u32 FUNC_6(struct iwl_fw_runtime *VAR_2,
    struct iwl_fw_ini_trigger *VAR_3,
    struct list_head *VAR_4)
{
 int VAR_5;
 u32 VAR_6 = 0;

 for (VAR_5 = 0; VAR_5 < FUNC_5(VAR_3->num_regions); VAR_5++) {
  u32 VAR_7 = FUNC_5(VAR_3->data[VAR_5]), VAR_8;
  struct iwl_fw_ini_region_cfg *VAR_9;

  if (FUNC_2(VAR_7 >= FUNC_0(VAR_2->dump.active_regs)))
   continue;

  VAR_9 = VAR_2->dump.active_regs[VAR_7];
  if (!VAR_9) {
   FUNC_1(VAR_2,
     "WRT: Unassigned region id %d, skipping\n",
     VAR_7);
   continue;
  }


  if (FUNC_5(VAR_9->domain) != VAR_0)
   continue;

  VAR_8 = FUNC_5(VAR_9->region_type);
  if (VAR_8 >= FUNC_0(VAR_1))
   continue;

  VAR_6 += FUNC_4(VAR_2, VAR_4, VAR_9,
      &VAR_1[VAR_8]);
 }

 if (VAR_6)
  VAR_6 += FUNC_3(VAR_2, VAR_3, VAR_4);

 return VAR_6;
}
