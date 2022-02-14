
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int * param_val; } ;
struct dbg_tools_data {TYPE_1__ grc; } ;
struct qed_hwfn {struct dbg_tools_data dbg_info; } ;
typedef enum dbg_grc_params { ____Placeholder_dbg_grc_params } dbg_grc_params ;



__attribute__((used)) static void FUNC_0(struct qed_hwfn *VAR_0,
         enum dbg_grc_params VAR_1, u32 VAR_2)
{
 struct dbg_tools_data *VAR_3 = &VAR_0->dbg_info;

 VAR_3->grc.param_val[VAR_1] = VAR_2;
}
