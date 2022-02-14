
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct bpf_verifier_env {int dummy; } ;
struct bpf_reg_state {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct bpf_reg_state*) ;
 int FUNC_2 (struct bpf_reg_state*) ;
 int FUNC_3 (struct bpf_verifier_env*,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct bpf_verifier_env *VAR_1,
    struct bpf_reg_state *VAR_2, u32 VAR_3)
{
 if (FUNC_0(VAR_3 >= VAR_0)) {
  FUNC_3(VAR_1, "mark_reg_known_zero(regs, %u)\n", VAR_3);

  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
   FUNC_2(VAR_2 + VAR_3);
  return;
 }
 FUNC_1(VAR_2 + VAR_3);
}
