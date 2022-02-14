
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_verifier_env {scalar_t__ allow_ptr_leaks; } ;
struct bpf_insn {int code; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(const struct bpf_verifier_env *VAR_1,
        const struct bpf_insn *VAR_2)
{
 return VAR_1->allow_ptr_leaks || FUNC_0(VAR_2->code) == VAR_0;
}
