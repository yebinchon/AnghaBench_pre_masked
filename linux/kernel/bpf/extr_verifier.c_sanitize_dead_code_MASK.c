
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int trap ;
struct bpf_verifier_env {TYPE_1__* prog; struct bpf_insn_aux_data* insn_aux_data; } ;
struct bpf_insn_aux_data {scalar_t__ seen; } ;
struct bpf_insn {int dummy; } ;
struct TYPE_2__ {int len; struct bpf_insn* insnsi; } ;


 int VAR_0 ;
 struct bpf_insn FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (struct bpf_insn*,struct bpf_insn*,int) ;

__attribute__((used)) static void FUNC_2(struct bpf_verifier_env *VAR_1)
{
 struct bpf_insn_aux_data *VAR_2 = VAR_1->insn_aux_data;
 struct bpf_insn VAR_3 = FUNC_0(VAR_0, 0, 0, -1);
 struct bpf_insn *VAR_4 = VAR_1->prog->insnsi;
 const int VAR_5 = VAR_1->prog->len;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  if (VAR_2[VAR_6].seen)
   continue;
  FUNC_1(VAR_4 + VAR_6, &VAR_3, sizeof(VAR_3));
 }
}
