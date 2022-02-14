
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bpf_verifier_env {TYPE_1__* insn_aux_data; } ;
struct TYPE_2__ {int prune_point; } ;



__attribute__((used)) static void FUNC_0(struct bpf_verifier_env *VAR_0, int VAR_1)
{
 VAR_0->insn_aux_data[VAR_1].prune_point = 1;
}
