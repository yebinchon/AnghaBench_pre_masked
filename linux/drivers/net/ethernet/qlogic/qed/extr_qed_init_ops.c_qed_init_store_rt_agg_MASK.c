
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_2__ {size_t* init_val; int* b_valid; } ;
struct qed_hwfn {TYPE_1__ rt_data; } ;



void FUNC_0(struct qed_hwfn *VAR_0,
      u32 VAR_1, u32 *VAR_2, size_t VAR_3)
{
 size_t VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3 / sizeof(u32); VAR_4++) {
  VAR_0->rt_data.init_val[VAR_1 + VAR_4] = VAR_2[VAR_4];
  VAR_0->rt_data.b_valid[VAR_1 + VAR_4] = 1;
 }
}
