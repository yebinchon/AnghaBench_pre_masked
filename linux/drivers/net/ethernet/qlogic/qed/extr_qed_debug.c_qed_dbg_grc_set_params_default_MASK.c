
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_3__ {int * param_val; } ;
struct dbg_tools_data {size_t chip_id; TYPE_1__ grc; } ;
struct qed_hwfn {struct dbg_tools_data dbg_info; } ;
struct TYPE_4__ {int * default_val; int is_persistent; } ;


 size_t VAR_0 ;
 TYPE_2__* VAR_1 ;

void FUNC_0(struct qed_hwfn *VAR_2)
{
 struct dbg_tools_data *VAR_3 = &VAR_2->dbg_info;
 u32 VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  if (!VAR_1[VAR_4].is_persistent)
   VAR_3->grc.param_val[VAR_4] =
       VAR_1[VAR_4].default_val[VAR_3->chip_id];
}
