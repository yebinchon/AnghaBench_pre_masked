
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bpf_verifier_env {int id_gen; } ;
struct bpf_func_state {int acquired_refs; TYPE_1__* refs; } ;
struct TYPE_2__ {int id; int insn_idx; } ;


 struct bpf_func_state* FUNC_0 (struct bpf_verifier_env*) ;
 int FUNC_1 (struct bpf_func_state*,int,int) ;

__attribute__((used)) static int FUNC_2(struct bpf_verifier_env *VAR_0, int VAR_1)
{
 struct bpf_func_state *VAR_2 = FUNC_0(VAR_0);
 int VAR_3 = VAR_2->acquired_refs;
 int VAR_4, VAR_5;

 VAR_5 = FUNC_1(VAR_2, VAR_2->acquired_refs + 1, 1);
 if (VAR_5)
  return VAR_5;
 VAR_4 = ++VAR_0->id_gen;
 VAR_2->refs[VAR_3].id = VAR_4;
 VAR_2->refs[VAR_3].insn_idx = VAR_1;

 return VAR_4;
}
