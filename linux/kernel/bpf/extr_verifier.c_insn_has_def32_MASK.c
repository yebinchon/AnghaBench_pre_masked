
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_verifier_env {int dummy; } ;
struct bpf_insn {int dst_reg; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bpf_insn*) ;
 int FUNC_1 (struct bpf_verifier_env*,struct bpf_insn*,int ,int *,int ) ;

__attribute__((used)) static bool FUNC_2(struct bpf_verifier_env *VAR_1, struct bpf_insn *VAR_2)
{
 if (FUNC_0(VAR_2))
  return 0;

 return !FUNC_1(VAR_1, VAR_2, VAR_2->dst_reg, ((void*)0), VAR_0);
}
