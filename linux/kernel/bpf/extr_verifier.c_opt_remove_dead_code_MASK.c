
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bpf_verifier_env {TYPE_1__* prog; struct bpf_insn_aux_data* insn_aux_data; } ;
struct bpf_insn_aux_data {int seen; } ;
struct TYPE_2__ {int len; } ;


 int FUNC_0 (struct bpf_verifier_env*,int,int) ;

__attribute__((used)) static int FUNC_1(struct bpf_verifier_env *VAR_0)
{
 struct bpf_insn_aux_data *VAR_1 = VAR_0->insn_aux_data;
 int VAR_2 = VAR_0->prog->len;
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  int VAR_5;

  VAR_5 = 0;
  while (VAR_3 + VAR_5 < VAR_2 && !VAR_1[VAR_3 + VAR_5].seen)
   VAR_5++;
  if (!VAR_5)
   continue;

  VAR_4 = FUNC_0(VAR_0, VAR_3, VAR_5);
  if (VAR_4)
   return VAR_4;
  VAR_2 = VAR_0->prog->len;
 }

 return 0;
}
