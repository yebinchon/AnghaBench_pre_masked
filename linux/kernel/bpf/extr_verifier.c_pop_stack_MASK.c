
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_verifier_state {int dummy; } ;
struct bpf_verifier_stack_elem {int insn_idx; int prev_insn_idx; int st; struct bpf_verifier_stack_elem* next; } ;
struct bpf_verifier_env {int stack_size; struct bpf_verifier_stack_elem* head; struct bpf_verifier_state* cur_state; } ;


 int VAR_0 ;
 int FUNC_0 (struct bpf_verifier_state*,int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct bpf_verifier_stack_elem*) ;

__attribute__((used)) static int FUNC_3(struct bpf_verifier_env *VAR_1, int *VAR_2,
       int *VAR_3)
{
 struct bpf_verifier_state *VAR_4 = VAR_1->cur_state;
 struct bpf_verifier_stack_elem *VAR_5, *VAR_6 = VAR_1->head;
 int VAR_7;

 if (VAR_1->head == ((void*)0))
  return -VAR_0;

 if (VAR_4) {
  VAR_7 = FUNC_0(VAR_4, &VAR_6->st);
  if (VAR_7)
   return VAR_7;
 }
 if (VAR_3)
  *VAR_3 = VAR_6->insn_idx;
 if (VAR_2)
  *VAR_2 = VAR_6->prev_insn_idx;
 VAR_5 = VAR_6->next;
 FUNC_1(&VAR_6->st, 0);
 FUNC_2(VAR_6);
 VAR_1->head = VAR_5;
 VAR_1->stack_size--;
 return 0;
}
