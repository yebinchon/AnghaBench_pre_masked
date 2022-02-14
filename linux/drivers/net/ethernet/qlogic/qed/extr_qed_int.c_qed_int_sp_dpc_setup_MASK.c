
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_hwfn {int b_sp_dpc_enabled; int sp_dpc; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,unsigned long) ;

__attribute__((used)) static void FUNC_1(struct qed_hwfn *VAR_1)
{
 FUNC_0(VAR_1->sp_dpc,
       VAR_0, (unsigned long)VAR_1);
 VAR_1->b_sp_dpc_enabled = 1;
}
