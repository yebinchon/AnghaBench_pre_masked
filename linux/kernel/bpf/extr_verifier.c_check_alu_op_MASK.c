
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct bpf_verifier_env {scalar_t__ insn_idx; } ;
struct bpf_reg_state {scalar_t__ type; scalar_t__ subreg_def; int live; } ;
struct bpf_insn {scalar_t__ src_reg; scalar_t__ off; scalar_t__ imm; scalar_t__ dst_reg; int code; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int FUNC_3 (struct bpf_reg_state*,scalar_t__) ;
 int FUNC_4 (struct bpf_verifier_env*,struct bpf_insn*) ;
 int FUNC_5 (struct bpf_verifier_env*,scalar_t__,int ) ;
 int FUNC_6 (struct bpf_reg_state*,int) ;
 struct bpf_reg_state* FUNC_7 (struct bpf_verifier_env*) ;
 scalar_t__ FUNC_8 (struct bpf_verifier_env*,scalar_t__) ;
 int FUNC_9 (struct bpf_verifier_env*,struct bpf_reg_state*,scalar_t__) ;
 int FUNC_10 (struct bpf_verifier_env*,char*,...) ;

__attribute__((used)) static int FUNC_11(struct bpf_verifier_env *VAR_20, struct bpf_insn *VAR_21)
{
 struct bpf_reg_state *VAR_22 = FUNC_7(VAR_20);
 u8 VAR_23 = FUNC_1(VAR_21->code);
 int VAR_24;

 if (VAR_23 == VAR_3 || VAR_23 == VAR_8) {
  if (VAR_23 == VAR_8) {
   if (FUNC_2(VAR_21->code) != 0 ||
       VAR_21->src_reg != VAR_9 ||
       VAR_21->off != 0 || VAR_21->imm != 0) {
    FUNC_10(VAR_20, "BPF_NEG uses reserved fields\n");
    return -VAR_16;
   }
  } else {
   if (VAR_21->src_reg != VAR_9 || VAR_21->off != 0 ||
       (VAR_21->imm != 16 && VAR_21->imm != 32 && VAR_21->imm != 64) ||
       FUNC_0(VAR_21->code) == VAR_0) {
    FUNC_10(VAR_20, "BPF_END uses reserved fields\n");
    return -VAR_16;
   }
  }


  VAR_24 = FUNC_5(VAR_20, VAR_21->dst_reg, VAR_19);
  if (VAR_24)
   return VAR_24;

  if (FUNC_8(VAR_20, VAR_21->dst_reg)) {
   FUNC_10(VAR_20, "R%d pointer arithmetic prohibited\n",
    VAR_21->dst_reg);
   return -VAR_15;
  }


  VAR_24 = FUNC_5(VAR_20, VAR_21->dst_reg, VAR_13);
  if (VAR_24)
   return VAR_24;

 } else if (VAR_23 == VAR_7) {

  if (FUNC_2(VAR_21->code) == VAR_11) {
   if (VAR_21->imm != 0 || VAR_21->off != 0) {
    FUNC_10(VAR_20, "BPF_MOV uses reserved fields\n");
    return -VAR_16;
   }


   VAR_24 = FUNC_5(VAR_20, VAR_21->src_reg, VAR_19);
   if (VAR_24)
    return VAR_24;
  } else {
   if (VAR_21->src_reg != VAR_9 || VAR_21->off != 0) {
    FUNC_10(VAR_20, "BPF_MOV uses reserved fields\n");
    return -VAR_16;
   }
  }


  VAR_24 = FUNC_5(VAR_20, VAR_21->dst_reg, VAR_14);
  if (VAR_24)
   return VAR_24;

  if (FUNC_2(VAR_21->code) == VAR_11) {
   struct bpf_reg_state *VAR_25 = VAR_22 + VAR_21->src_reg;
   struct bpf_reg_state *VAR_26 = VAR_22 + VAR_21->dst_reg;

   if (FUNC_0(VAR_21->code) == VAR_0) {



    *VAR_26 = *VAR_25;
    VAR_26->live |= VAR_17;
    VAR_26->subreg_def = VAR_12;
   } else {

    if (FUNC_8(VAR_20, VAR_21->src_reg)) {
     FUNC_10(VAR_20,
      "R%d partial copy of pointer\n",
      VAR_21->src_reg);
     return -VAR_15;
    } else if (VAR_25->type == VAR_18) {
     *VAR_26 = *VAR_25;
     VAR_26->live |= VAR_17;
     VAR_26->subreg_def = VAR_20->insn_idx + 1;
    } else {
     FUNC_9(VAR_20, VAR_22,
        VAR_21->dst_reg);
    }
    FUNC_6(VAR_26, 4);
   }
  } else {




   FUNC_9(VAR_20, VAR_22, VAR_21->dst_reg);
   VAR_22[VAR_21->dst_reg].type = VAR_18;
   if (FUNC_0(VAR_21->code) == VAR_0) {
    FUNC_3(VAR_22 + VAR_21->dst_reg,
       VAR_21->imm);
   } else {
    FUNC_3(VAR_22 + VAR_21->dst_reg,
       (u32)VAR_21->imm);
   }
  }

 } else if (VAR_23 > VAR_3) {
  FUNC_10(VAR_20, "invalid BPF_ALU opcode %x\n", VAR_23);
  return -VAR_16;

 } else {

  if (FUNC_2(VAR_21->code) == VAR_11) {
   if (VAR_21->imm != 0 || VAR_21->off != 0) {
    FUNC_10(VAR_20, "BPF_ALU uses reserved fields\n");
    return -VAR_16;
   }

   VAR_24 = FUNC_5(VAR_20, VAR_21->src_reg, VAR_19);
   if (VAR_24)
    return VAR_24;
  } else {
   if (VAR_21->src_reg != VAR_9 || VAR_21->off != 0) {
    FUNC_10(VAR_20, "BPF_ALU uses reserved fields\n");
    return -VAR_16;
   }
  }


  VAR_24 = FUNC_5(VAR_20, VAR_21->dst_reg, VAR_19);
  if (VAR_24)
   return VAR_24;

  if ((VAR_23 == VAR_6 || VAR_23 == VAR_2) &&
      FUNC_2(VAR_21->code) == VAR_4 && VAR_21->imm == 0) {
   FUNC_10(VAR_20, "div by zero\n");
   return -VAR_16;
  }

  if ((VAR_23 == VAR_5 || VAR_23 == VAR_10 ||
       VAR_23 == VAR_1) && FUNC_2(VAR_21->code) == VAR_4) {
   int VAR_27 = FUNC_0(VAR_21->code) == VAR_0 ? 64 : 32;

   if (VAR_21->imm < 0 || VAR_21->imm >= VAR_27) {
    FUNC_10(VAR_20, "invalid shift %d\n", VAR_21->imm);
    return -VAR_16;
   }
  }


  VAR_24 = FUNC_5(VAR_20, VAR_21->dst_reg, VAR_14);
  if (VAR_24)
   return VAR_24;

  return FUNC_4(VAR_20, VAR_21);
 }

 return 0;
}
