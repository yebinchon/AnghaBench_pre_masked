
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct bpf_verifier_env {struct bpf_insn_aux_data* insn_aux_data; } ;
struct bpf_prog {size_t len; struct bpf_insn* insnsi; } ;
struct bpf_insn_aux_data {int seen; void* zext_dst; } ;
struct bpf_insn {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (size_t,int) ;
 void* FUNC_1 (struct bpf_verifier_env*,struct bpf_insn*) ;
 int FUNC_2 (struct bpf_insn_aux_data*,struct bpf_insn_aux_data*,int) ;
 int FUNC_3 (struct bpf_insn_aux_data*) ;
 struct bpf_insn_aux_data* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct bpf_verifier_env *VAR_1,
    struct bpf_prog *VAR_2, u32 VAR_3, u32 VAR_4)
{
 struct bpf_insn_aux_data *VAR_5, *VAR_6 = VAR_1->insn_aux_data;
 struct bpf_insn *VAR_7 = VAR_2->insnsi;
 u32 VAR_8;
 int VAR_9;





 VAR_6[VAR_3].zext_dst = FUNC_1(VAR_1, VAR_7 + VAR_3 + VAR_4 - 1);

 if (VAR_4 == 1)
  return 0;
 VAR_8 = VAR_2->len;
 VAR_5 = FUNC_4(FUNC_0(VAR_8,
          sizeof(struct bpf_insn_aux_data)));
 if (!VAR_5)
  return -VAR_0;
 FUNC_2(VAR_5, VAR_6, sizeof(struct bpf_insn_aux_data) * VAR_3);
 FUNC_2(VAR_5 + VAR_3 + VAR_4 - 1, VAR_6 + VAR_3,
        sizeof(struct bpf_insn_aux_data) * (VAR_8 - VAR_3 - VAR_4 + 1));
 for (VAR_9 = VAR_3; VAR_9 < VAR_3 + VAR_4 - 1; VAR_9++) {
  VAR_5[VAR_9].seen = 1;
  VAR_5[VAR_9].zext_dst = FUNC_1(VAR_1, VAR_7 + VAR_9);
 }
 VAR_1->insn_aux_data = VAR_5;
 FUNC_3(VAR_6);
 return 0;
}
