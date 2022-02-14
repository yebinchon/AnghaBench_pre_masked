
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_hwfn {int sp_dpc; scalar_t__ b_sp_dpc_enabled; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct qed_hwfn *VAR_0)
{




 if (VAR_0->b_sp_dpc_enabled) {
  FUNC_0(VAR_0->sp_dpc);
  FUNC_1(VAR_0->sp_dpc);
 }
}
