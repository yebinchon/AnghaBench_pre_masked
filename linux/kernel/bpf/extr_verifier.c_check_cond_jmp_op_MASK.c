
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct bpf_verifier_state {size_t curframe; TYPE_3__** frame; } ;
struct TYPE_4__ {int level; } ;
struct bpf_verifier_env {TYPE_1__ log; struct bpf_verifier_state* cur_state; } ;
struct TYPE_5__ {int value; } ;
struct bpf_reg_state {scalar_t__ type; TYPE_2__ var_off; } ;
struct bpf_insn {size_t src_reg; size_t dst_reg; int imm; int code; scalar_t__ off; } ;
struct TYPE_6__ {struct bpf_reg_state* regs; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 size_t VAR_7 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (struct bpf_verifier_env*,size_t,int ) ;
 int FUNC_4 (struct bpf_reg_state*,int) ;
 int FUNC_5 (struct bpf_reg_state*,int ,scalar_t__,int) ;
 scalar_t__ FUNC_6 (struct bpf_verifier_env*,size_t) ;
 int FUNC_7 (struct bpf_verifier_env*,size_t) ;
 int FUNC_8 (struct bpf_verifier_state*,size_t,int) ;
 int FUNC_9 (struct bpf_verifier_env*,TYPE_3__*) ;
 struct bpf_verifier_state* FUNC_10 (struct bpf_verifier_env*,scalar_t__,int,int) ;
 int FUNC_11 (struct bpf_reg_state*,struct bpf_reg_state*,struct bpf_reg_state*,struct bpf_reg_state*,scalar_t__) ;
 int FUNC_12 (struct bpf_reg_state*,struct bpf_reg_state*,int ,scalar_t__,int) ;
 int FUNC_13 (struct bpf_reg_state*,struct bpf_reg_state*,int ,scalar_t__,int) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 scalar_t__ FUNC_15 (TYPE_2__) ;
 int FUNC_16 (struct bpf_insn*,struct bpf_reg_state*,struct bpf_reg_state*,struct bpf_verifier_state*,struct bpf_verifier_state*) ;
 int FUNC_17 (struct bpf_verifier_env*,char*,...) ;

__attribute__((used)) static int FUNC_18(struct bpf_verifier_env *VAR_14,
        struct bpf_insn *VAR_15, int *VAR_16)
{
 struct bpf_verifier_state *VAR_17 = VAR_14->cur_state;
 struct bpf_verifier_state *VAR_18;
 struct bpf_reg_state *VAR_19 = VAR_17->frame[VAR_17->curframe]->regs;
 struct bpf_reg_state *VAR_20, *VAR_21, *VAR_22 = ((void*)0);
 u8 VAR_23 = FUNC_1(VAR_15->code);
 bool VAR_24;
 int VAR_25 = -1;
 int VAR_26;


 if (VAR_23 == VAR_0 || VAR_23 > VAR_4) {
  FUNC_17(VAR_14, "invalid BPF_JMP/JMP32 opcode %x\n", VAR_23);
  return -VAR_11;
 }

 if (FUNC_2(VAR_15->code) == VAR_8) {
  if (VAR_15->imm != 0) {
   FUNC_17(VAR_14, "BPF_JMP/JMP32 uses reserved fields\n");
   return -VAR_11;
  }


  VAR_26 = FUNC_3(VAR_14, VAR_15->src_reg, VAR_13);
  if (VAR_26)
   return VAR_26;

  if (FUNC_6(VAR_14, VAR_15->src_reg)) {
   FUNC_17(VAR_14, "R%d pointer comparison prohibited\n",
    VAR_15->src_reg);
   return -VAR_9;
  }
  VAR_22 = &VAR_19[VAR_15->src_reg];
 } else {
  if (VAR_15->src_reg != VAR_7) {
   FUNC_17(VAR_14, "BPF_JMP/JMP32 uses reserved fields\n");
   return -VAR_11;
  }
 }


 VAR_26 = FUNC_3(VAR_14, VAR_15->dst_reg, VAR_13);
 if (VAR_26)
  return VAR_26;

 VAR_20 = &VAR_19[VAR_15->dst_reg];
 VAR_24 = FUNC_0(VAR_15->code) == VAR_2;

 if (FUNC_2(VAR_15->code) == VAR_5)
  VAR_25 = FUNC_5(VAR_20, VAR_15->imm,
           VAR_23, VAR_24);
 else if (VAR_22->type == VAR_12 &&
   FUNC_15(VAR_22->var_off))
  VAR_25 = FUNC_5(VAR_20, VAR_22->var_off.value,
           VAR_23, VAR_24);
 if (VAR_25 >= 0) {
  VAR_26 = FUNC_7(VAR_14, VAR_15->dst_reg);
  if (FUNC_2(VAR_15->code) == VAR_8 && !VAR_26)
   VAR_26 = FUNC_7(VAR_14, VAR_15->src_reg);
  if (VAR_26)
   return VAR_26;
 }
 if (VAR_25 == 1) {

  *VAR_16 += VAR_15->off;
  return 0;
 } else if (VAR_25 == 0) {



  return 0;
 }

 VAR_18 = FUNC_10(VAR_14, *VAR_16 + VAR_15->off + 1, *VAR_16,
      0);
 if (!VAR_18)
  return -VAR_10;
 VAR_21 = VAR_18->frame[VAR_18->curframe]->regs;
 if (FUNC_2(VAR_15->code) == VAR_8) {
  struct bpf_reg_state *VAR_27 = &VAR_19[VAR_15->src_reg];
  struct bpf_reg_state VAR_28 = *VAR_20;
  struct bpf_reg_state VAR_29 = *VAR_27;
  struct bpf_reg_state *VAR_30, *VAR_31;

  VAR_31 = &VAR_28;
  VAR_30 = &VAR_29;
  FUNC_4(VAR_31, 4);
  FUNC_4(VAR_30, 4);

  if (VAR_20->type == VAR_12 &&
      VAR_27->type == VAR_12) {
   if (FUNC_15(VAR_27->var_off) ||
       (VAR_24 && FUNC_15(VAR_30->var_off)))
    FUNC_12(&VAR_21[VAR_15->dst_reg],
      VAR_20,
      VAR_24
      ? VAR_30->var_off.value
      : VAR_27->var_off.value,
      VAR_23, VAR_24);
   else if (FUNC_15(VAR_20->var_off) ||
     (VAR_24 && FUNC_15(VAR_31->var_off)))
    FUNC_13(&VAR_21[VAR_15->src_reg],
          VAR_27,
          VAR_24
          ? VAR_31->var_off.value
          : VAR_20->var_off.value,
          VAR_23, VAR_24);
   else if (!VAR_24 &&
     (VAR_23 == VAR_1 || VAR_23 == VAR_3))

    FUNC_11(&VAR_21[VAR_15->src_reg],
          &VAR_21[VAR_15->dst_reg],
          VAR_27, VAR_20, VAR_23);
  }
 } else if (VAR_20->type == VAR_12) {
  FUNC_12(&VAR_21[VAR_15->dst_reg],
     VAR_20, VAR_15->imm, VAR_23, VAR_24);
 }





 if (!VAR_24 && FUNC_2(VAR_15->code) == VAR_5 &&
     VAR_15->imm == 0 && (VAR_23 == VAR_1 || VAR_23 == VAR_3) &&
     FUNC_14(VAR_20->type)) {



  FUNC_8(VAR_17, VAR_15->dst_reg,
          VAR_23 == VAR_3);
  FUNC_8(VAR_18, VAR_15->dst_reg,
          VAR_23 == VAR_1);
 } else if (!FUNC_16(VAR_15, VAR_20, &VAR_19[VAR_15->src_reg],
        VAR_17, VAR_18) &&
     FUNC_6(VAR_14, VAR_15->dst_reg)) {
  FUNC_17(VAR_14, "R%d pointer comparison prohibited\n",
   VAR_15->dst_reg);
  return -VAR_9;
 }
 if (VAR_14->log.level & VAR_6)
  FUNC_9(VAR_14, VAR_17->frame[VAR_17->curframe]);
 return 0;
}
