
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_verifier_state_list {int state; struct bpf_verifier_state_list* next; } ;
struct bpf_verifier_env {struct bpf_verifier_state_list** explored_states; struct bpf_verifier_state_list* free_list; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct bpf_verifier_state_list*) ;
 int FUNC_2 (struct bpf_verifier_state_list**) ;
 int FUNC_3 (struct bpf_verifier_env*) ;

__attribute__((used)) static void FUNC_4(struct bpf_verifier_env *VAR_0)
{
 struct bpf_verifier_state_list *VAR_1, *VAR_2;
 int VAR_3;

 VAR_1 = VAR_0->free_list;
 while (VAR_1) {
  VAR_2 = VAR_1->next;
  FUNC_0(&VAR_1->state, 0);
  FUNC_1(VAR_1);
  VAR_1 = VAR_2;
 }

 if (!VAR_0->explored_states)
  return;

 for (VAR_3 = 0; VAR_3 < FUNC_3(VAR_0); VAR_3++) {
  VAR_1 = VAR_0->explored_states[VAR_3];

  while (VAR_1) {
   VAR_2 = VAR_1->next;
   FUNC_0(&VAR_1->state, 0);
   FUNC_1(VAR_1);
   VAR_1 = VAR_2;
  }
 }

 FUNC_2(VAR_0->explored_states);
}
