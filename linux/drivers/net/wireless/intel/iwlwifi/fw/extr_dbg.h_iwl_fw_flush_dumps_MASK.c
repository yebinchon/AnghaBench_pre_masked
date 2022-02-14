
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* wks; } ;
struct iwl_fw_runtime {TYPE_2__ dump; int trans; } ;
struct TYPE_3__ {int ini_trig_id; int wk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2(struct iwl_fw_runtime *VAR_2)
{
 int VAR_3;

 FUNC_1(VAR_2->trans);
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  FUNC_0(&VAR_2->dump.wks[VAR_3].wk);
  VAR_2->dump.wks[VAR_3].ini_trig_id = VAR_1;
 }
}
