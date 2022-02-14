
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bpf_verifier_env {TYPE_1__* prog; struct bpf_insn_aux_data* insn_aux_data; } ;
struct bpf_insn_aux_data {int seen; } ;
struct bpf_insn {int off; int code; } ;
typedef int ja ;
struct TYPE_2__ {int len; int aux; struct bpf_insn* insnsi; } ;


 int VAR_0 ;
 struct bpf_insn FUNC_0 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct bpf_verifier_env*,int,struct bpf_insn*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct bpf_insn*,struct bpf_insn*,int) ;

__attribute__((used)) static void FUNC_5(struct bpf_verifier_env *VAR_1)
{
 struct bpf_insn_aux_data *VAR_2 = VAR_1->insn_aux_data;
 struct bpf_insn VAR_3 = FUNC_0(VAR_0, 0, 0, 0);
 struct bpf_insn *VAR_4 = VAR_1->prog->insnsi;
 const int VAR_5 = VAR_1->prog->len;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++, VAR_4++) {
  if (!FUNC_3(VAR_4->code))
   continue;

  if (!VAR_2[VAR_6 + 1].seen)
   VAR_3.off = VAR_4->off;
  else if (!VAR_2[VAR_6 + 1 + VAR_4->off].seen)
   VAR_3.off = 0;
  else
   continue;

  if (FUNC_1(VAR_1->prog->aux))
   FUNC_2(VAR_1, VAR_6, &VAR_3);

  FUNC_4(VAR_4, &VAR_3, sizeof(VAR_3));
 }
}
