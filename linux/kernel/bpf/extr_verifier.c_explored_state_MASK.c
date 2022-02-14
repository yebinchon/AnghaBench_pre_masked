
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_verifier_state_list {int dummy; } ;
struct bpf_verifier_state {size_t curframe; struct bpf_func_state** frame; } ;
struct bpf_verifier_env {struct bpf_verifier_state_list** explored_states; struct bpf_verifier_state* cur_state; } ;
struct bpf_func_state {int callsite; } ;


 int FUNC_0 (struct bpf_verifier_env*) ;

__attribute__((used)) static struct bpf_verifier_state_list **FUNC_1(
     struct bpf_verifier_env *VAR_0,
     int VAR_1)
{
 struct bpf_verifier_state *VAR_2 = VAR_0->cur_state;
 struct bpf_func_state *VAR_3 = VAR_2->frame[VAR_2->curframe];

 return &VAR_0->explored_states[(VAR_1 ^ VAR_3->callsite) % FUNC_0(VAR_0)];
}
