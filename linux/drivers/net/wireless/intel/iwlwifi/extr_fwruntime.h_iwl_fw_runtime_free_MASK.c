
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* wks; struct iwl_fw_ini_active_triggers* active_trigs; int * d3_debug_data; } ;
struct iwl_fw_runtime {TYPE_2__ dump; int trans; } ;
struct iwl_fw_ini_active_triggers {int active; int * trig; scalar_t__ size; } ;
struct TYPE_3__ {int wk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct iwl_fw_runtime *VAR_2)
{
 int VAR_3;

 FUNC_2(VAR_2->dump.d3_debug_data);
 VAR_2->dump.d3_debug_data = ((void*)0);

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  struct iwl_fw_ini_active_triggers *VAR_4 =
   &VAR_2->dump.active_trigs[VAR_3];

  VAR_4->active = 0;
  VAR_4->size = 0;
  FUNC_2(VAR_4->trig);
  VAR_4->trig = ((void*)0);
 }

 FUNC_1(VAR_2->trans);
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_0(&VAR_2->dump.wks[VAR_3].wk);
}
