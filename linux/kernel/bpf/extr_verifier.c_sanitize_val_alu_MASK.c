
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_verifier_env {int dummy; } ;
struct bpf_insn_aux_data {int dummy; } ;
struct bpf_insn {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bpf_verifier_env*,struct bpf_insn*) ;
 struct bpf_insn_aux_data* FUNC_1 (struct bpf_verifier_env*) ;
 int FUNC_2 (struct bpf_insn_aux_data*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct bpf_verifier_env *VAR_1,
       struct bpf_insn *VAR_2)
{
 struct bpf_insn_aux_data *VAR_3 = FUNC_1(VAR_1);

 if (FUNC_0(VAR_1, VAR_2))
  return 0;

 return FUNC_2(VAR_3, VAR_0, 0);
}
