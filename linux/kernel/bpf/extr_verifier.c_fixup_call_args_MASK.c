
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_verifier_env {struct bpf_prog* prog; } ;
struct bpf_prog {int len; int aux; scalar_t__ jit_requested; struct bpf_insn* insnsi; } ;
struct bpf_insn {int code; scalar_t__ src_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bpf_insn*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bpf_verifier_env*,struct bpf_insn*,int) ;
 int FUNC_3 (struct bpf_verifier_env*) ;

__attribute__((used)) static int FUNC_4(struct bpf_verifier_env *VAR_4)
{

 struct bpf_prog *VAR_5 = VAR_4->prog;
 struct bpf_insn *VAR_6 = VAR_5->insnsi;
 int VAR_7, VAR_8;

 int VAR_9 = 0;

 if (VAR_4->prog->jit_requested &&
     !FUNC_1(VAR_4->prog->aux)) {
  VAR_9 = FUNC_3(VAR_4);
  if (VAR_9 == 0)
   return 0;
  if (VAR_9 == -VAR_3)
   return VAR_9;
 }

 for (VAR_7 = 0; VAR_7 < VAR_5->len; VAR_7++, VAR_6++) {
  if (VAR_6->code != (VAR_1 | VAR_0) ||
      VAR_6->src_reg != VAR_2)
   continue;
  VAR_8 = FUNC_2(VAR_4, VAR_6, VAR_7);
  if (VAR_8 < 0)
   return VAR_8;
  FUNC_0(VAR_6, VAR_8);
 }
 VAR_9 = 0;

 return VAR_9;
}
