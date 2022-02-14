
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bpf_verifier_state {int jmp_history_cnt; struct bpf_idx_pair* jmp_history; } ;
struct bpf_verifier_env {int prev_insn_idx; int insn_idx; } ;
struct bpf_idx_pair {int prev_idx; int idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct bpf_idx_pair* FUNC_0 (struct bpf_idx_pair*,int,int ) ;

__attribute__((used)) static int FUNC_1(struct bpf_verifier_env *VAR_2,
       struct bpf_verifier_state *VAR_3)
{
 u32 VAR_4 = VAR_3->jmp_history_cnt;
 struct bpf_idx_pair *VAR_5;

 VAR_4++;
 VAR_5 = FUNC_0(VAR_3->jmp_history, VAR_4 * sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;
 VAR_5[VAR_4 - 1].idx = VAR_2->insn_idx;
 VAR_5[VAR_4 - 1].prev_idx = VAR_2->prev_insn_idx;
 VAR_3->jmp_history = VAR_5;
 VAR_3->jmp_history_cnt = VAR_4;
 return 0;
}
