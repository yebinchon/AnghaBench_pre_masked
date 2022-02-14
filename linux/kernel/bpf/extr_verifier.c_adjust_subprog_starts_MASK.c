
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct bpf_verifier_env {int subprog_cnt; TYPE_1__* subprog_info; } ;
struct TYPE_2__ {int start; } ;



__attribute__((used)) static void FUNC_0(struct bpf_verifier_env *VAR_0, u32 VAR_1, u32 VAR_2)
{
 int VAR_3;

 if (VAR_2 == 1)
  return;

 for (VAR_3 = 0; VAR_3 <= VAR_0->subprog_cnt; VAR_3++) {
  if (VAR_0->subprog_info[VAR_3].start <= VAR_1)
   continue;
  VAR_0->subprog_info[VAR_3].start += VAR_2 - 1;
 }
}
