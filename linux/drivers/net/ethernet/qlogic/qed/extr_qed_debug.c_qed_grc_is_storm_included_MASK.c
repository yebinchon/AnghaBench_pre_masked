
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_hwfn {int dummy; } ;
typedef enum dbg_storms { ____Placeholder_dbg_storms } dbg_storms ;
typedef enum dbg_grc_params { ____Placeholder_dbg_grc_params } dbg_grc_params ;


 scalar_t__ FUNC_0 (struct qed_hwfn*,int) ;

__attribute__((used)) static bool FUNC_1(struct qed_hwfn *VAR_0,
          enum dbg_storms VAR_1)
{
 return FUNC_0(VAR_0, (enum dbg_grc_params)VAR_1) > 0;
}
