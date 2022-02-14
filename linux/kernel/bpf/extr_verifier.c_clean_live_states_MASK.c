
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int insn_idx; int curframe; TYPE_1__** frame; scalar_t__ branches; } ;
struct bpf_verifier_state_list {struct bpf_verifier_state_list* next; TYPE_3__ state; } ;
struct bpf_verifier_state {int curframe; TYPE_2__** frame; } ;
struct bpf_verifier_env {int dummy; } ;
struct TYPE_5__ {scalar_t__ callsite; } ;
struct TYPE_4__ {scalar_t__ callsite; } ;


 int FUNC_0 (struct bpf_verifier_env*,TYPE_3__*) ;
 struct bpf_verifier_state_list** FUNC_1 (struct bpf_verifier_env*,int) ;

__attribute__((used)) static void FUNC_2(struct bpf_verifier_env *VAR_0, int VAR_1,
         struct bpf_verifier_state *VAR_2)
{
 struct bpf_verifier_state_list *VAR_3;
 int VAR_4;

 VAR_3 = *FUNC_1(VAR_0, VAR_1);
 while (VAR_3) {
  if (VAR_3->state.branches)
   goto next;
  if (VAR_3->state.insn_idx != VAR_1 ||
      VAR_3->state.curframe != VAR_2->curframe)
   goto next;
  for (VAR_4 = 0; VAR_4 <= VAR_2->curframe; VAR_4++)
   if (VAR_3->state.frame[VAR_4]->callsite != VAR_2->frame[VAR_4]->callsite)
    goto next;
  FUNC_0(VAR_0, &VAR_3->state);
next:
  VAR_3 = VAR_3->next;
 }
}
