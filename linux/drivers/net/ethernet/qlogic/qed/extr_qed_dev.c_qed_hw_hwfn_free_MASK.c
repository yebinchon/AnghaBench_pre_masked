
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * p_igu_info; } ;
struct qed_hwfn {TYPE_1__ hw_info; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct qed_hwfn*) ;

__attribute__((used)) static void FUNC_2(struct qed_hwfn *VAR_0)
{
 FUNC_1(VAR_0);
 FUNC_0(VAR_0->hw_info.p_igu_info);
 VAR_0->hw_info.p_igu_info = ((void*)0);
}
