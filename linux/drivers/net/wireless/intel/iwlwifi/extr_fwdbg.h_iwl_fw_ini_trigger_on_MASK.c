
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {TYPE_2__* active_trigs; } ;
struct iwl_fw_runtime {TYPE_1__ dump; int trans; } ;
struct iwl_fw_ini_trigger {int ignore_consec; } ;
typedef enum iwl_fw_ini_trigger_id { ____Placeholder_iwl_fw_ini_trigger_id } iwl_fw_ini_trigger_id ;
struct TYPE_4__ {struct iwl_fw_ini_trigger* trig; int active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_fw_runtime*,char*,int) ;
 scalar_t__ FUNC_1 (struct iwl_fw_runtime*,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static inline bool
FUNC_4(struct iwl_fw_runtime *VAR_2,
        enum iwl_fw_ini_trigger_id VAR_3)
{
 struct iwl_fw_ini_trigger *VAR_4;
 u32 VAR_5;

 if (!FUNC_2(VAR_2->trans) ||
     VAR_3 == VAR_0 || VAR_3 >= VAR_1 ||
     !VAR_2->dump.active_trigs[VAR_3].active)
  return 0;

 VAR_4 = VAR_2->dump.active_trigs[VAR_3].trig;
 VAR_5 = FUNC_3(VAR_4->ignore_consec);

 if (FUNC_1(VAR_2, VAR_3, VAR_5)) {
  FUNC_0(VAR_2, "Trigger %d fired in no-collect window\n", VAR_3);
  return 0;
 }

 return 1;
}
