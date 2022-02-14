
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * b_valid; int * init_val; } ;
struct qed_hwfn {TYPE_1__ rt_data; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct qed_hwfn *VAR_0)
{
 FUNC_0(VAR_0->rt_data.init_val);
 VAR_0->rt_data.init_val = ((void*)0);
 FUNC_0(VAR_0->rt_data.b_valid);
 VAR_0->rt_data.b_valid = ((void*)0);
}
