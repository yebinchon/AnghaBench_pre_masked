
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bpf_verifier_env {TYPE_1__* insn_aux_data; } ;
struct bpf_reg_state {int subreg_def; } ;
typedef int s32 ;
struct TYPE_2__ {int zext_dst; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct bpf_verifier_env *VAR_1,
      struct bpf_reg_state *VAR_2)
{
 s32 VAR_3 = VAR_2->subreg_def;

 if (VAR_3 == VAR_0)
  return;

 VAR_1->insn_aux_data[VAR_3 - 1].zext_dst = 1;

 VAR_2->subreg_def = VAR_0;
}
