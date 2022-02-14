
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct bpf_verifier_env {int subprog_cnt; int allow_ptr_leaks; } ;
struct bpf_reg_state {int precise; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct bpf_reg_state*) ;
 int FUNC_2 (struct bpf_reg_state*) ;
 int FUNC_3 (struct bpf_verifier_env*,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct bpf_verifier_env *VAR_2,
        struct bpf_reg_state *VAR_3, u32 VAR_4)
{
 if (FUNC_0(VAR_4 >= VAR_1)) {
  FUNC_3(VAR_2, "mark_reg_unknown(regs, %u)\n", VAR_4);

  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
   FUNC_1(VAR_3 + VAR_4);
  return;
 }
 VAR_3 += VAR_4;
 FUNC_2(VAR_3);

 VAR_3->precise = VAR_2->subprog_cnt > 1 || !VAR_2->allow_ptr_leaks ?
   1 : 0;
}
