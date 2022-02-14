
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_6__ {unsigned long active_wks; TYPE_2__* wks; struct iwl_fw_ini_active_triggers* active_trigs; } ;
struct iwl_fw_runtime {TYPE_3__ dump; int trans; } ;
struct iwl_fw_ini_active_triggers {TYPE_1__* trig; } ;
typedef enum iwl_fw_ini_trigger_id { ____Placeholder_iwl_fw_ini_trigger_id } iwl_fw_ini_trigger_id ;
struct TYPE_5__ {int ini_trig_id; int wk; int idx; } ;
struct TYPE_4__ {int force_restart; int occurrences; int dump_delay; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (struct iwl_fw_runtime*,char*,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 unsigned long FUNC_3 (unsigned long) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct iwl_fw_runtime*,int) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (int ,unsigned long*) ;
 int FUNC_9 (scalar_t__) ;

int FUNC_10(struct iwl_fw_runtime *VAR_3,
       enum iwl_fw_ini_trigger_id VAR_4)
{
 struct iwl_fw_ini_active_triggers *VAR_5;
 u32 VAR_6, VAR_7;
 unsigned long VAR_8;

 if (FUNC_1(!FUNC_5(VAR_3, VAR_4)))
  return -VAR_1;

 if (!FUNC_5(VAR_3, VAR_4)) {
  FUNC_0(VAR_3, "WRT: Trigger %d is not active, aborting dump\n",
    VAR_4);
  return -VAR_1;
 }

 VAR_5 = &VAR_3->dump.active_trigs[VAR_4];
 VAR_7 = FUNC_6(VAR_5->trig->dump_delay);
 VAR_6 = FUNC_6(VAR_5->trig->occurrences);
 if (!VAR_6)
  return 0;

 VAR_5->trig->occurrences = FUNC_2(--VAR_6);

 if (FUNC_6(VAR_5->trig->force_restart)) {
  FUNC_0(VAR_3, "WRT: Force restart: trigger %d fired.\n", VAR_4);
  FUNC_4(VAR_3->trans);
  return 0;
 }





 if (VAR_3->dump.active_wks == ~0UL)
  return -VAR_0;

 VAR_8 = FUNC_3(VAR_3->dump.active_wks);

 if (VAR_8 >= VAR_2 ||
     FUNC_8(VAR_3->dump.wks[VAR_8].idx, &VAR_3->dump.active_wks))
  return -VAR_0;

 VAR_3->dump.wks[VAR_8].ini_trig_id = VAR_4;

 FUNC_0(VAR_3, "WRT: Collecting data: ini trigger %d fired.\n", VAR_4);

 FUNC_7(&VAR_3->dump.wks[VAR_8].wk, FUNC_9(VAR_7));

 return 0;
}
