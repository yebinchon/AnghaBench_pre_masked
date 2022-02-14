
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_verifier_env {int dummy; } ;
struct bpf_reg_state {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 struct bpf_reg_state* FUNC_0 (struct bpf_verifier_env*,int) ;

__attribute__((used)) static bool FUNC_1(struct bpf_verifier_env *VAR_1, int VAR_2)
{
 const struct bpf_reg_state *VAR_3 = FUNC_0(VAR_1, VAR_2);

 return VAR_3->type == VAR_0;
}
