
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* b_valid; } ;
struct qed_hwfn {TYPE_1__ rt_data; } ;


 int VAR_0 ;

void FUNC_0(struct qed_hwfn *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  VAR_1->rt_data.b_valid[VAR_2] = 0;
}
