
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bpf_verifier_state {int curframe; TYPE_2__** frame; } ;
struct bpf_verifier_env {int dummy; } ;
struct TYPE_4__ {TYPE_1__* regs; } ;
struct TYPE_3__ {int live; } ;


 int VAR_0 ;
 int FUNC_0 (struct bpf_verifier_env*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(struct bpf_verifier_env *VAR_1,
     struct bpf_verifier_state *VAR_2)
{
 int VAR_3;

 if (VAR_2->frame[0]->regs[0].live & VAR_0)

  return;

 for (VAR_3 = 0; VAR_3 <= VAR_2->curframe; VAR_3++)
  FUNC_0(VAR_1, VAR_2->frame[VAR_3]);
}
