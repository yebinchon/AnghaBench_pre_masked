
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_verifier_env {int dummy; } ;
struct bpf_reg_state {int type; } ;


 struct bpf_reg_state* FUNC_0 (struct bpf_verifier_env*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct bpf_verifier_env *VAR_0, int VAR_1)
{
 const struct bpf_reg_state *VAR_2 = FUNC_0(VAR_0, VAR_1);

 return FUNC_1(VAR_2->type);
}
