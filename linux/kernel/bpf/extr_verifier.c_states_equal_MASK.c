
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bpf_verifier_state {int curframe; scalar_t__ active_spin_lock; TYPE_1__** frame; scalar_t__ speculative; } ;
struct bpf_verifier_env {int dummy; } ;
struct TYPE_3__ {scalar_t__ callsite; } ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static bool FUNC_1(struct bpf_verifier_env *VAR_0,
    struct bpf_verifier_state *VAR_1,
    struct bpf_verifier_state *VAR_2)
{
 int VAR_3;

 if (VAR_1->curframe != VAR_2->curframe)
  return 0;




 if (VAR_1->speculative && !VAR_2->speculative)
  return 0;

 if (VAR_1->active_spin_lock != VAR_2->active_spin_lock)
  return 0;




 for (VAR_3 = 0; VAR_3 <= VAR_1->curframe; VAR_3++) {
  if (VAR_1->frame[VAR_3]->callsite != VAR_2->frame[VAR_3]->callsite)
   return 0;
  if (!FUNC_0(VAR_1->frame[VAR_3], VAR_2->frame[VAR_3]))
   return 0;
 }
 return 1;
}
