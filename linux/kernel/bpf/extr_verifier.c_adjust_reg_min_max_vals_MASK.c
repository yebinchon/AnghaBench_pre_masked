
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bpf_verifier_state {size_t curframe; struct bpf_func_state** frame; } ;
struct bpf_verifier_env {scalar_t__ allow_ptr_leaks; struct bpf_verifier_state* cur_state; } ;
struct bpf_reg_state {scalar_t__ type; int member_0; } ;
struct bpf_insn {size_t dst_reg; size_t src_reg; int imm; int code; } ;
struct bpf_func_state {struct bpf_reg_state* regs; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct bpf_reg_state*) ;
 int FUNC_4 (struct bpf_reg_state*,int ) ;
 int FUNC_5 (struct bpf_verifier_env*,struct bpf_insn*,struct bpf_reg_state*,struct bpf_reg_state*) ;
 int FUNC_6 (struct bpf_verifier_env*,struct bpf_insn*,struct bpf_reg_state*,struct bpf_reg_state) ;
 int * VAR_5 ;
 int FUNC_7 (struct bpf_verifier_env*,size_t) ;
 int FUNC_8 (struct bpf_verifier_env*,struct bpf_reg_state*,size_t) ;
 int FUNC_9 (struct bpf_verifier_env*,struct bpf_func_state*) ;
 int FUNC_10 (struct bpf_verifier_env*,char*,...) ;

__attribute__((used)) static int FUNC_11(struct bpf_verifier_env *VAR_6,
       struct bpf_insn *VAR_7)
{
 struct bpf_verifier_state *VAR_8 = VAR_6->cur_state;
 struct bpf_func_state *VAR_9 = VAR_8->frame[VAR_8->curframe];
 struct bpf_reg_state *VAR_10 = VAR_9->regs, *VAR_11, *VAR_12;
 struct bpf_reg_state *VAR_13 = ((void*)0), VAR_14 = {0};
 u8 VAR_15 = FUNC_0(VAR_7->code);
 int VAR_16;

 VAR_11 = &VAR_10[VAR_7->dst_reg];
 VAR_12 = ((void*)0);
 if (VAR_11->type != VAR_4)
  VAR_13 = VAR_11;
 if (FUNC_1(VAR_7->code) == VAR_1) {
  VAR_12 = &VAR_10[VAR_7->src_reg];
  if (VAR_12->type != VAR_4) {
   if (VAR_11->type != VAR_4) {




    if (VAR_15 == VAR_0 && VAR_6->allow_ptr_leaks) {
     FUNC_8(VAR_6, VAR_10, VAR_7->dst_reg);
     return 0;
    }
    FUNC_10(VAR_6, "R%d pointer %s pointer prohibited\n",
     VAR_7->dst_reg,
     VAR_5[VAR_15 >> 4]);
    return -VAR_2;
   } else {




    VAR_16 = FUNC_7(VAR_6, VAR_7->dst_reg);
    if (VAR_16)
     return VAR_16;
    return FUNC_5(VAR_6, VAR_7,
              VAR_12, VAR_11);
   }
  } else if (VAR_13) {

   VAR_16 = FUNC_7(VAR_6, VAR_7->src_reg);
   if (VAR_16)
    return VAR_16;
   return FUNC_5(VAR_6, VAR_7,
             VAR_11, VAR_12);
  }
 } else {



  VAR_14.type = VAR_4;
  FUNC_4(&VAR_14, VAR_7->imm);
  VAR_12 = &VAR_14;
  if (VAR_13)
   return FUNC_5(VAR_6, VAR_7,
             VAR_13, VAR_12);
 }


 if (FUNC_3(VAR_13)) {
  FUNC_9(VAR_6, VAR_9);
  FUNC_10(VAR_6, "verifier internal error: unexpected ptr_reg\n");
  return -VAR_3;
 }
 if (FUNC_2(!VAR_12)) {
  FUNC_9(VAR_6, VAR_9);
  FUNC_10(VAR_6, "verifier internal error: no src_reg\n");
  return -VAR_3;
 }
 return FUNC_6(VAR_6, VAR_7, VAR_11, *VAR_12);
}
