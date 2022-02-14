
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct bpf_verifier_env {TYPE_1__* prog; struct bpf_insn_aux_data* insn_aux_data; } ;
struct bpf_insn_aux_data {int dummy; } ;
struct TYPE_2__ {unsigned int len; int aux; } ;


 int FUNC_0 (struct bpf_verifier_env*,int,int) ;
 int FUNC_1 (struct bpf_verifier_env*,int,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct bpf_verifier_env*,int,int) ;
 int FUNC_4 (TYPE_1__*,int,int) ;
 int FUNC_5 (struct bpf_insn_aux_data*,struct bpf_insn_aux_data*,int) ;

__attribute__((used)) static int FUNC_6(struct bpf_verifier_env *VAR_0, u32 VAR_1, u32 VAR_2)
{
 struct bpf_insn_aux_data *VAR_3 = VAR_0->insn_aux_data;
 unsigned int VAR_4 = VAR_0->prog->len;
 int VAR_5;

 if (FUNC_2(VAR_0->prog->aux))
  FUNC_3(VAR_0, VAR_1, VAR_2);

 VAR_5 = FUNC_4(VAR_0->prog, VAR_1, VAR_2);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2);
 if (VAR_5)
  return VAR_5;

 FUNC_5(VAR_3 + VAR_1, VAR_3 + VAR_1 + VAR_2,
  sizeof(*VAR_3) * (VAR_4 - VAR_1 - VAR_2));

 return 0;
}
