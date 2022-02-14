
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct bpf_verifier_state {TYPE_1__* jmp_history; } ;
struct TYPE_2__ {int idx; int prev_idx; } ;



__attribute__((used)) static int FUNC_0(struct bpf_verifier_state *VAR_0, int VAR_1,
        u32 *VAR_2)
{
 u32 VAR_3 = *VAR_2;

 if (VAR_3 && VAR_0->jmp_history[VAR_3 - 1].idx == VAR_1) {
  VAR_1 = VAR_0->jmp_history[VAR_3 - 1].prev_idx;
  (*VAR_2)--;
 } else {
  VAR_1--;
 }
 return VAR_1;
}
