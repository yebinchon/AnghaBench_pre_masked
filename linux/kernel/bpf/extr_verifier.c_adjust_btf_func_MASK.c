
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct bpf_verifier_env {int subprog_cnt; TYPE_4__* subprog_info; TYPE_3__* prog; } ;
struct TYPE_8__ {int start; } ;
struct TYPE_7__ {TYPE_2__* aux; } ;
struct TYPE_6__ {TYPE_1__* func_info; } ;
struct TYPE_5__ {int insn_off; } ;



__attribute__((used)) static void FUNC_0(struct bpf_verifier_env *VAR_0)
{
 int VAR_1;

 if (!VAR_0->prog->aux->func_info)
  return;

 for (VAR_1 = 0; VAR_1 < VAR_0->subprog_cnt; VAR_1++)
  VAR_0->prog->aux->func_info[VAR_1].insn_off = VAR_0->subprog_info[VAR_1].start;
}
