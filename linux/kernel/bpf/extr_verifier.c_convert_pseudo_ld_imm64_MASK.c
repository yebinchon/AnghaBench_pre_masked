
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bpf_verifier_env {TYPE_1__* prog; } ;
struct bpf_insn {int code; scalar_t__ src_reg; } ;
struct TYPE_2__ {int len; struct bpf_insn* insnsi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct bpf_verifier_env *VAR_3)
{
 struct bpf_insn *VAR_4 = VAR_3->prog->insnsi;
 int VAR_5 = VAR_3->prog->len;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++, VAR_4++)
  if (VAR_4->code == (VAR_2 | VAR_1 | VAR_0))
   VAR_4->src_reg = 0;
}
