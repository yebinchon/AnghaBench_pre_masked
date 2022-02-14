
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bpf_verifier_env {TYPE_1__* prog; } ;
struct bpf_insn {int dummy; } ;
typedef int ja ;
struct TYPE_2__ {int len; struct bpf_insn* insnsi; } ;


 int VAR_0 ;
 struct bpf_insn FUNC_0 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct bpf_insn*,struct bpf_insn const*,int) ;
 int FUNC_2 (struct bpf_verifier_env*,int,int) ;

__attribute__((used)) static int FUNC_3(struct bpf_verifier_env *VAR_1)
{
 const struct bpf_insn VAR_2 = FUNC_0(VAR_0, 0, 0, 0);
 struct bpf_insn *VAR_3 = VAR_1->prog->insnsi;
 int VAR_4 = VAR_1->prog->len;
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  if (FUNC_1(&VAR_3[VAR_5], &VAR_2, sizeof(VAR_2)))
   continue;

  VAR_6 = FUNC_2(VAR_1, VAR_5, 1);
  if (VAR_6)
   return VAR_6;
  VAR_4--;
  VAR_5--;
 }

 return 0;
}
