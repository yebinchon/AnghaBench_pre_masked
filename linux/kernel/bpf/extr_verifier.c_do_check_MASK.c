
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct bpf_verifier_state {size_t curframe; int speculative; int branches; scalar_t__ active_spin_lock; void** frame; } ;
struct TYPE_7__ {int level; } ;
struct bpf_verifier_env {int prev_insn_idx; int insn_idx; scalar_t__ insn_processed; TYPE_4__* subprog_info; TYPE_3__* prog; TYPE_2__* insn_aux_data; struct bpf_verifier_state* cur_state; int jmps_processed; int allow_ptr_leaks; TYPE_1__ log; int * prev_linfo; } ;
struct bpf_reg_state {int type; } ;
struct bpf_insn_cbs {struct bpf_verifier_env* private_data; int (* cb_print ) (struct bpf_verifier_env*,char*,scalar_t__) ;} ;
struct bpf_insn {int src_reg; int dst_reg; scalar_t__ off; scalar_t__ imm; int code; } ;
struct bpf_func_state {int dummy; } ;
typedef enum bpf_reg_type { ____Placeholder_bpf_reg_type } bpf_reg_type ;
struct TYPE_12__ {int stack_depth; } ;
struct TYPE_11__ {size_t type; } ;
struct TYPE_10__ {int stack_depth; } ;
struct TYPE_9__ {int len; TYPE_6__* aux; struct bpf_insn* insnsi; } ;
struct TYPE_8__ {int seen; int ptr_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 scalar_t__ FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (struct bpf_verifier_env*,scalar_t__,int) ;
 int FUNC_7 (struct bpf_verifier_env*,struct bpf_insn*) ;
 int FUNC_8 (struct bpf_verifier_env*,struct bpf_insn*,int*) ;
 int FUNC_9 (struct bpf_verifier_env*,struct bpf_insn*,int*) ;
 int FUNC_10 (struct bpf_verifier_env*,scalar_t__,int) ;
 int FUNC_11 (struct bpf_verifier_env*,struct bpf_insn*) ;
 int FUNC_12 (struct bpf_verifier_env*,struct bpf_insn*) ;
 int FUNC_13 (struct bpf_verifier_env*,int,size_t,scalar_t__,int ,int ,int,int) ;
 int FUNC_14 (struct bpf_verifier_env*) ;
 int FUNC_15 (struct bpf_verifier_env*,int,int ) ;
 int FUNC_16 (struct bpf_verifier_env*) ;
 int FUNC_17 (struct bpf_verifier_env*,size_t,struct bpf_insn*) ;
 int FUNC_18 () ;
 struct bpf_reg_state* FUNC_19 (struct bpf_verifier_env*) ;
 int VAR_37 ;
 int FUNC_20 (struct bpf_verifier_env*,void*,int ,int ,int ) ;
 scalar_t__ FUNC_21 (struct bpf_verifier_env*,int) ;
 scalar_t__ FUNC_22 (struct bpf_verifier_env*,int) ;
 int FUNC_23 (struct bpf_verifier_env*,size_t) ;
 int FUNC_24 (struct bpf_verifier_state*) ;
 void* FUNC_25 (int,int ) ;
 scalar_t__ FUNC_26 () ;
 int FUNC_27 (struct bpf_verifier_env*,int*,int*) ;
 int FUNC_28 (struct bpf_verifier_env*,int*) ;
 int FUNC_29 (struct bpf_insn_cbs const*,struct bpf_insn*,int ) ;
 int FUNC_30 (struct bpf_verifier_env*,void*) ;
 TYPE_5__* FUNC_31 (struct bpf_verifier_env*,int) ;
 scalar_t__ FUNC_32 (int,int) ;
 int * VAR_38 ;
 scalar_t__ FUNC_33 (int ) ;
 int FUNC_34 (struct bpf_verifier_env*,struct bpf_verifier_state*) ;
 int FUNC_35 (struct bpf_verifier_env*,char*,...) ;
 int FUNC_36 (struct bpf_verifier_env*,scalar_t__,char*) ;

__attribute__((used)) static int FUNC_37(struct bpf_verifier_env *VAR_39)
{
 struct bpf_verifier_state *VAR_40;
 struct bpf_insn *VAR_41 = VAR_39->prog->insnsi;
 struct bpf_reg_state *VAR_42;
 int VAR_43 = VAR_39->prog->len;
 bool VAR_44 = 0;
 int VAR_45 = -1;

 VAR_39->prev_linfo = ((void*)0);

 VAR_40 = FUNC_25(sizeof(struct bpf_verifier_state), VAR_34);
 if (!VAR_40)
  return -VAR_33;
 VAR_40->curframe = 0;
 VAR_40->speculative = 0;
 VAR_40->branches = 1;
 VAR_40->frame[0] = FUNC_25(sizeof(struct bpf_func_state), VAR_34);
 if (!VAR_40->frame[0]) {
  FUNC_24(VAR_40);
  return -VAR_33;
 }
 VAR_39->cur_state = VAR_40;
 FUNC_20(VAR_39, VAR_40->frame[0],
   VAR_17 ,
   0 ,
   0 );

 for (;;) {
  struct bpf_insn *VAR_46;
  u8 VAR_47;
  int VAR_48;

  VAR_39->prev_insn_idx = VAR_45;
  if (VAR_39->insn_idx >= VAR_43) {
   FUNC_35(VAR_39, "invalid insn idx %d insn_cnt %d\n",
    VAR_39->insn_idx, VAR_43);
   return -VAR_30;
  }

  VAR_46 = &VAR_41[VAR_39->insn_idx];
  VAR_47 = FUNC_0(VAR_46->code);

  if (++VAR_39->insn_processed > VAR_4) {
   FUNC_35(VAR_39,
    "BPF program is too large. Processed %d insn\n",
    VAR_39->insn_processed);
   return -VAR_27;
  }

  VAR_48 = FUNC_23(VAR_39, VAR_39->insn_idx);
  if (VAR_48 < 0)
   return VAR_48;
  if (VAR_48 == 1) {

   if (VAR_39->log.level & VAR_15) {
    if (VAR_44)
     FUNC_35(VAR_39, "\nfrom %d to %d%s: safe\n",
      VAR_39->prev_insn_idx, VAR_39->insn_idx,
      VAR_39->cur_state->speculative ?
      " (speculative execution)" : "");
    else
     FUNC_35(VAR_39, "%d: safe\n", VAR_39->insn_idx);
   }
   goto process_bpf_exit;
  }

  if (FUNC_33(VAR_37))
   return -VAR_29;

  if (FUNC_26())
   FUNC_18();

  if (VAR_39->log.level & VAR_16 ||
      (VAR_39->log.level & VAR_15 && VAR_44)) {
   if (VAR_39->log.level & VAR_16)
    FUNC_35(VAR_39, "%d:", VAR_39->insn_idx);
   else
    FUNC_35(VAR_39, "\nfrom %d to %d%s:",
     VAR_39->prev_insn_idx, VAR_39->insn_idx,
     VAR_39->cur_state->speculative ?
     " (speculative execution)" : "");
   FUNC_30(VAR_39, VAR_40->frame[VAR_40->curframe]);
   VAR_44 = 0;
  }

  if (VAR_39->log.level & VAR_15) {
   const struct bpf_insn_cbs VAR_49 = {
    .cb_print = FUNC_35,
    .private_data = VAR_39,
   };

   FUNC_36(VAR_39, VAR_39->insn_idx, "; ");
   FUNC_35(VAR_39, "%d: ", VAR_39->insn_idx);
   FUNC_29(&VAR_49, VAR_46, VAR_39->allow_ptr_leaks);
  }

  if (FUNC_5(VAR_39->prog->aux)) {
   VAR_48 = FUNC_6(VAR_39, VAR_39->insn_idx,
          VAR_39->prev_insn_idx);
   if (VAR_48)
    return VAR_48;
  }

  VAR_42 = FUNC_19(VAR_39);
  VAR_39->insn_aux_data[VAR_39->insn_idx].seen = 1;
  VAR_45 = VAR_39->insn_idx;

  if (VAR_47 == VAR_1 || VAR_47 == VAR_2) {
   VAR_48 = FUNC_7(VAR_39, VAR_46);
   if (VAR_48)
    return VAR_48;

  } else if (VAR_47 == VAR_14) {
   enum bpf_reg_type *VAR_50, VAR_51;




   VAR_48 = FUNC_15(VAR_39, VAR_46->src_reg, VAR_36);
   if (VAR_48)
    return VAR_48;

   VAR_48 = FUNC_15(VAR_39, VAR_46->dst_reg, VAR_26);
   if (VAR_48)
    return VAR_48;

   VAR_51 = VAR_42[VAR_46->src_reg].type;




   VAR_48 = FUNC_13(VAR_39, VAR_39->insn_idx, VAR_46->src_reg,
            VAR_46->off, FUNC_3(VAR_46->code),
            VAR_20, VAR_46->dst_reg, 0);
   if (VAR_48)
    return VAR_48;

   VAR_50 = &VAR_39->insn_aux_data[VAR_39->insn_idx].ptr_type;

   if (*VAR_50 == VAR_35) {




    *VAR_50 = VAR_51;

   } else if (FUNC_32(VAR_51, *VAR_50)) {







    FUNC_35(VAR_39, "same insn cannot be used with different pointers\n");
    return -VAR_31;
   }

  } else if (VAR_47 == VAR_23) {
   enum bpf_reg_type *VAR_52, VAR_53;

   if (FUNC_1(VAR_46->code) == VAR_25) {
    VAR_48 = FUNC_17(VAR_39, VAR_39->insn_idx, VAR_46);
    if (VAR_48)
     return VAR_48;
    VAR_39->insn_idx++;
    continue;
   }


   VAR_48 = FUNC_15(VAR_39, VAR_46->src_reg, VAR_36);
   if (VAR_48)
    return VAR_48;

   VAR_48 = FUNC_15(VAR_39, VAR_46->dst_reg, VAR_36);
   if (VAR_48)
    return VAR_48;

   VAR_53 = VAR_42[VAR_46->dst_reg].type;


   VAR_48 = FUNC_13(VAR_39, VAR_39->insn_idx, VAR_46->dst_reg,
            VAR_46->off, FUNC_3(VAR_46->code),
            VAR_24, VAR_46->src_reg, 0);
   if (VAR_48)
    return VAR_48;

   VAR_52 = &VAR_39->insn_aux_data[VAR_39->insn_idx].ptr_type;

   if (*VAR_52 == VAR_35) {
    *VAR_52 = VAR_53;
   } else if (FUNC_32(VAR_53, *VAR_52)) {
    FUNC_35(VAR_39, "same insn cannot be used with different pointers\n");
    return -VAR_31;
   }

  } else if (VAR_47 == VAR_22) {
   if (FUNC_1(VAR_46->code) != VAR_18 ||
       VAR_46->src_reg != VAR_21) {
    FUNC_35(VAR_39, "BPF_ST uses reserved fields\n");
    return -VAR_31;
   }

   VAR_48 = FUNC_15(VAR_39, VAR_46->dst_reg, VAR_36);
   if (VAR_48)
    return VAR_48;

   if (FUNC_21(VAR_39, VAR_46->dst_reg)) {
    FUNC_35(VAR_39, "BPF_ST stores into R%d %s is not allowed\n",
     VAR_46->dst_reg,
     VAR_38[FUNC_31(VAR_39, VAR_46->dst_reg)->type]);
    return -VAR_28;
   }


   VAR_48 = FUNC_13(VAR_39, VAR_39->insn_idx, VAR_46->dst_reg,
            VAR_46->off, FUNC_3(VAR_46->code),
            VAR_24, -1, 0);
   if (VAR_48)
    return VAR_48;

  } else if (VAR_47 == VAR_10 || VAR_47 == VAR_11) {
   u8 VAR_54 = FUNC_2(VAR_46->code);

   VAR_39->jmps_processed++;
   if (VAR_54 == VAR_3) {
    if (FUNC_4(VAR_46->code) != VAR_12 ||
        VAR_46->off != 0 ||
        (VAR_46->src_reg != VAR_21 &&
         VAR_46->src_reg != VAR_19) ||
        VAR_46->dst_reg != VAR_21 ||
        VAR_47 == VAR_11) {
     FUNC_35(VAR_39, "BPF_CALL uses reserved fields\n");
     return -VAR_31;
    }

    if (VAR_39->cur_state->active_spin_lock &&
        (VAR_46->src_reg == VAR_19 ||
         VAR_46->imm != VAR_6)) {
     FUNC_35(VAR_39, "function calls are not allowed while holding a lock\n");
     return -VAR_31;
    }
    if (VAR_46->src_reg == VAR_19)
     VAR_48 = FUNC_9(VAR_39, VAR_46, &VAR_39->insn_idx);
    else
     VAR_48 = FUNC_10(VAR_39, VAR_46->imm, VAR_39->insn_idx);
    if (VAR_48)
     return VAR_48;

   } else if (VAR_54 == VAR_9) {
    if (FUNC_4(VAR_46->code) != VAR_12 ||
        VAR_46->imm != 0 ||
        VAR_46->src_reg != VAR_21 ||
        VAR_46->dst_reg != VAR_21 ||
        VAR_47 == VAR_11) {
     FUNC_35(VAR_39, "BPF_JA uses reserved fields\n");
     return -VAR_31;
    }

    VAR_39->insn_idx += VAR_46->off + 1;
    continue;

   } else if (VAR_54 == VAR_5) {
    if (FUNC_4(VAR_46->code) != VAR_12 ||
        VAR_46->imm != 0 ||
        VAR_46->src_reg != VAR_21 ||
        VAR_46->dst_reg != VAR_21 ||
        VAR_47 == VAR_11) {
     FUNC_35(VAR_39, "BPF_EXIT uses reserved fields\n");
     return -VAR_31;
    }

    if (VAR_39->cur_state->active_spin_lock) {
     FUNC_35(VAR_39, "bpf_spin_unlock is missing\n");
     return -VAR_31;
    }

    if (VAR_40->curframe) {

     VAR_48 = FUNC_28(VAR_39, &VAR_39->insn_idx);
     if (VAR_48)
      return VAR_48;
     VAR_44 = 1;
     continue;
    }

    VAR_48 = FUNC_14(VAR_39);
    if (VAR_48)
     return VAR_48;







    VAR_48 = FUNC_15(VAR_39, VAR_21, VAR_36);
    if (VAR_48)
     return VAR_48;

    if (FUNC_22(VAR_39, VAR_21)) {
     FUNC_35(VAR_39, "R0 leaks addr as return value\n");
     return -VAR_28;
    }

    VAR_48 = FUNC_16(VAR_39);
    if (VAR_48)
     return VAR_48;
process_bpf_exit:
    FUNC_34(VAR_39, VAR_39->cur_state);
    VAR_48 = FUNC_27(VAR_39, &VAR_45,
      &VAR_39->insn_idx);
    if (VAR_48 < 0) {
     if (VAR_48 != -VAR_32)
      return VAR_48;
     break;
    } else {
     VAR_44 = 1;
     continue;
    }
   } else {
    VAR_48 = FUNC_8(VAR_39, VAR_46, &VAR_39->insn_idx);
    if (VAR_48)
     return VAR_48;
   }
  } else if (VAR_47 == VAR_13) {
   u8 VAR_55 = FUNC_1(VAR_46->code);

   if (VAR_55 == VAR_0 || VAR_55 == VAR_8) {
    VAR_48 = FUNC_11(VAR_39, VAR_46);
    if (VAR_48)
     return VAR_48;

   } else if (VAR_55 == VAR_7) {
    VAR_48 = FUNC_12(VAR_39, VAR_46);
    if (VAR_48)
     return VAR_48;

    VAR_39->insn_idx++;
    VAR_39->insn_aux_data[VAR_39->insn_idx].seen = 1;
   } else {
    FUNC_35(VAR_39, "invalid BPF_LD mode\n");
    return -VAR_31;
   }
  } else {
   FUNC_35(VAR_39, "unknown insn class %d\n", VAR_47);
   return -VAR_31;
  }

  VAR_39->insn_idx++;
 }

 VAR_39->prog->aux->stack_depth = VAR_39->subprog_info[0].stack_depth;
 return 0;
}
