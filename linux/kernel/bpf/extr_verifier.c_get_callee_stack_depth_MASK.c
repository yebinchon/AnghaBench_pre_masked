
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bpf_verifier_env {TYPE_1__* subprog_info; } ;
struct bpf_insn {int imm; } ;
struct TYPE_2__ {int stack_depth; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (struct bpf_verifier_env*,int) ;

__attribute__((used)) static int FUNC_2(struct bpf_verifier_env *VAR_1,
      const struct bpf_insn *VAR_2, int VAR_3)
{
 int VAR_4 = VAR_3 + VAR_2->imm + 1, VAR_5;

 VAR_5 = FUNC_1(VAR_1, VAR_4);
 if (VAR_5 < 0) {
  FUNC_0(1, "verifier bug. No program starts at insn %d\n",
     VAR_4);
  return -VAR_0;
 }
 return VAR_1->subprog_info[VAR_5].stack_depth;
}
