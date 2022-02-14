
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct bpf_verifier_env {TYPE_1__* insn_aux_data; int prog; } ;
struct bpf_prog {int dummy; } ;
struct bpf_insn {int dummy; } ;
struct TYPE_2__ {int orig_idx; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bpf_prog*) ;
 int FUNC_1 (struct bpf_prog*) ;
 scalar_t__ FUNC_2 (struct bpf_verifier_env*,struct bpf_prog*,size_t,size_t) ;
 int FUNC_3 (struct bpf_verifier_env*,size_t,size_t) ;
 struct bpf_prog* FUNC_4 (int ,size_t,struct bpf_insn const*,size_t) ;
 int FUNC_5 (struct bpf_verifier_env*,char*,int ) ;

__attribute__((used)) static struct bpf_prog *FUNC_6(struct bpf_verifier_env *VAR_1, u32 VAR_2,
         const struct bpf_insn *VAR_3, u32 VAR_4)
{
 struct bpf_prog *VAR_5;

 VAR_5 = FUNC_4(VAR_1->prog, VAR_2, VAR_3, VAR_4);
 if (FUNC_0(VAR_5)) {
  if (FUNC_1(VAR_5) == -VAR_0)
   FUNC_5(VAR_1,
    "insn %d cannot be patched due to 16-bit range\n",
    VAR_1->insn_aux_data[VAR_2].orig_idx);
  return ((void*)0);
 }
 if (FUNC_2(VAR_1, VAR_5, VAR_2, VAR_4))
  return ((void*)0);
 FUNC_3(VAR_1, VAR_2, VAR_4);
 return VAR_5;
}
