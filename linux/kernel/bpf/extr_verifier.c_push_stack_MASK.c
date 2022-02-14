
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bpf_verifier_state {int speculative; TYPE_1__* parent; } ;
struct bpf_verifier_stack_elem {int insn_idx; int prev_insn_idx; struct bpf_verifier_state st; struct bpf_verifier_stack_elem* next; } ;
struct bpf_verifier_env {scalar_t__ stack_size; struct bpf_verifier_state* cur_state; struct bpf_verifier_stack_elem* head; } ;
struct TYPE_2__ {int branches; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bpf_verifier_state*,struct bpf_verifier_state*) ;
 int FUNC_1 (struct bpf_verifier_state*,int) ;
 struct bpf_verifier_stack_elem* FUNC_2 (int,int ) ;
 int FUNC_3 (struct bpf_verifier_env*,int *,int *) ;
 int FUNC_4 (struct bpf_verifier_env*,char*,scalar_t__) ;

__attribute__((used)) static struct bpf_verifier_state *FUNC_5(struct bpf_verifier_env *VAR_2,
          int VAR_3, int VAR_4,
          bool VAR_5)
{
 struct bpf_verifier_state *VAR_6 = VAR_2->cur_state;
 struct bpf_verifier_stack_elem *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(sizeof(struct bpf_verifier_stack_elem), VAR_1);
 if (!VAR_7)
  goto err;

 VAR_7->insn_idx = VAR_3;
 VAR_7->prev_insn_idx = VAR_4;
 VAR_7->next = VAR_2->head;
 VAR_2->head = VAR_7;
 VAR_2->stack_size++;
 VAR_8 = FUNC_0(&VAR_7->st, VAR_6);
 if (VAR_8)
  goto err;
 VAR_7->st.speculative |= VAR_5;
 if (VAR_2->stack_size > VAR_0) {
  FUNC_4(VAR_2, "The sequence of %d jumps is too complex.\n",
   VAR_2->stack_size);
  goto err;
 }
 if (VAR_7->st.parent) {
  ++VAR_7->st.parent->branches;
 }
 return &VAR_7->st;
err:
 FUNC_1(VAR_2->cur_state, 1);
 VAR_2->cur_state = ((void*)0);

 while (!FUNC_3(VAR_2, ((void*)0), ((void*)0)));
 return ((void*)0);
}
