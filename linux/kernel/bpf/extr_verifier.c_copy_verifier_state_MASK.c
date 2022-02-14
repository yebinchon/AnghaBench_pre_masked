
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bpf_verifier_state {int jmp_history_cnt; int curframe; struct bpf_func_state** frame; int last_insn_idx; int first_insn_idx; int parent; int branches; int active_spin_lock; int speculative; int jmp_history; } ;
struct bpf_idx_pair {int dummy; } ;
struct bpf_func_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bpf_func_state*,struct bpf_func_state*) ;
 int FUNC_1 (struct bpf_func_state*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 struct bpf_func_state* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static int FUNC_6(struct bpf_verifier_state *VAR_3,
          const struct bpf_verifier_state *VAR_4)
{
 struct bpf_func_state *VAR_5;
 u32 VAR_6 = sizeof(struct bpf_idx_pair) * VAR_4->jmp_history_cnt;
 int VAR_7, VAR_8;

 if (VAR_3->jmp_history_cnt < VAR_4->jmp_history_cnt) {
  FUNC_2(VAR_3->jmp_history);
  VAR_3->jmp_history = FUNC_3(VAR_6, VAR_2);
  if (!VAR_3->jmp_history)
   return -VAR_0;
 }
 FUNC_5(VAR_3->jmp_history, VAR_4->jmp_history, VAR_6);
 VAR_3->jmp_history_cnt = VAR_4->jmp_history_cnt;


 for (VAR_7 = VAR_4->curframe + 1; VAR_7 <= VAR_3->curframe; VAR_7++) {
  FUNC_1(VAR_3->frame[VAR_7]);
  VAR_3->frame[VAR_7] = ((void*)0);
 }
 VAR_3->speculative = VAR_4->speculative;
 VAR_3->curframe = VAR_4->curframe;
 VAR_3->active_spin_lock = VAR_4->active_spin_lock;
 VAR_3->branches = VAR_4->branches;
 VAR_3->parent = VAR_4->parent;
 VAR_3->first_insn_idx = VAR_4->first_insn_idx;
 VAR_3->last_insn_idx = VAR_4->last_insn_idx;
 for (VAR_7 = 0; VAR_7 <= VAR_4->curframe; VAR_7++) {
  VAR_5 = VAR_3->frame[VAR_7];
  if (!VAR_5) {
   VAR_5 = FUNC_4(sizeof(*VAR_5), VAR_1);
   if (!VAR_5)
    return -VAR_0;
   VAR_3->frame[VAR_7] = VAR_5;
  }
  VAR_8 = FUNC_0(VAR_5, VAR_4->frame[VAR_7]);
  if (VAR_8)
   return VAR_8;
 }
 return 0;
}
