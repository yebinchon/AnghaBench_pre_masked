
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long u8 ;
typedef int u32 ;
struct bpf_verifier_ops {int (* gen_prologue ) (struct bpf_insn*,scalar_t__,struct bpf_prog*) ;int (* convert_ctx_access ) (int,struct bpf_insn*,struct bpf_insn*,struct bpf_prog*,int*) ;} ;
struct bpf_verifier_env {struct bpf_prog* prog; TYPE_1__* insn_aux_data; scalar_t__ seen_direct_write; struct bpf_verifier_ops* ops; } ;
struct bpf_prog {int len; struct bpf_insn* insnsi; int aux; } ;
struct bpf_insn {unsigned long long code; int off; int dst_reg; } ;
typedef enum bpf_access_type { ____Placeholder_bpf_access_type } bpf_access_type ;
typedef int (* bpf_convert_ctx_access_t ) (int,struct bpf_insn*,struct bpf_insn*,struct bpf_prog*,int*) ;
struct TYPE_2__ {int ptr_type; int ctx_field_size; scalar_t__ sanitize_stack_off; } ;


 int FUNC_0 (struct bpf_insn*) ;
 struct bpf_insn FUNC_1 (int ,int ,int) ;
 struct bpf_insn FUNC_2 (int ,int ,unsigned long long) ;
 int VAR_0 ;
 unsigned long long VAR_1 ;
 unsigned long long VAR_2 ;
 unsigned long long VAR_3 ;
 int FUNC_3 (struct bpf_insn*) ;
 unsigned long long VAR_4 ;
 unsigned long long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned long long VAR_9 ;
 struct bpf_insn FUNC_4 (unsigned long long,int ,scalar_t__,int ) ;
 unsigned long long VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;





 int FUNC_5 (int,int,int) ;
 int FUNC_6 (int) ;
 struct bpf_prog* FUNC_7 (struct bpf_verifier_env*,int,struct bpf_insn*,int) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int,struct bpf_insn*,struct bpf_insn*,struct bpf_prog*,int*) ;
 int FUNC_10 (int,struct bpf_insn*,struct bpf_insn*,struct bpf_prog*,int*) ;
 int FUNC_11 (int,struct bpf_insn*,struct bpf_insn*,struct bpf_prog*,int*) ;
 int FUNC_12 (struct bpf_insn*,scalar_t__,struct bpf_prog*) ;
 int FUNC_13 (struct bpf_verifier_env*,char*) ;

__attribute__((used)) static int FUNC_14(struct bpf_verifier_env *VAR_14)
{
 const struct bpf_verifier_ops *VAR_15 = VAR_14->ops;
 int VAR_16, VAR_17, VAR_18, VAR_19, VAR_20 = 0;
 const int VAR_21 = VAR_14->prog->len;
 struct bpf_insn VAR_22[16], *VAR_23;
 u32 VAR_24, VAR_25, VAR_26;
 struct bpf_prog *VAR_27;
 enum bpf_access_type VAR_28;
 bool VAR_29;

 if (VAR_15->gen_prologue || VAR_14->seen_direct_write) {
  if (!VAR_15->gen_prologue) {
   FUNC_13(VAR_14, "bpf verifier is misconfigured\n");
   return -VAR_12;
  }
  VAR_17 = VAR_15->gen_prologue(VAR_22, VAR_14->seen_direct_write,
     VAR_14->prog);
  if (VAR_17 >= FUNC_0(VAR_22)) {
   FUNC_13(VAR_14, "bpf verifier is misconfigured\n");
   return -VAR_12;
  } else if (VAR_17) {
   VAR_27 = FUNC_7(VAR_14, 0, VAR_22, VAR_17);
   if (!VAR_27)
    return -VAR_13;

   VAR_14->prog = VAR_27;
   VAR_20 += VAR_17 - 1;
  }
 }

 if (FUNC_8(VAR_14->prog->aux))
  return 0;

 VAR_23 = VAR_14->prog->insnsi + VAR_20;

 for (VAR_16 = 0; VAR_16 < VAR_21; VAR_16++, VAR_23++) {
  bpf_convert_ctx_access_t VAR_30;

  if (VAR_23->code == (VAR_4 | VAR_5 | VAR_1) ||
      VAR_23->code == (VAR_4 | VAR_5 | VAR_3) ||
      VAR_23->code == (VAR_4 | VAR_5 | VAR_10) ||
      VAR_23->code == (VAR_4 | VAR_5 | VAR_2))
   VAR_28 = VAR_6;
  else if (VAR_23->code == (VAR_9 | VAR_5 | VAR_1) ||
    VAR_23->code == (VAR_9 | VAR_5 | VAR_3) ||
    VAR_23->code == (VAR_9 | VAR_5 | VAR_10) ||
    VAR_23->code == (VAR_9 | VAR_5 | VAR_2))
   VAR_28 = VAR_11;
  else
   continue;

  if (VAR_28 == VAR_11 &&
      VAR_14->insn_aux_data[VAR_16 + VAR_20].sanitize_stack_off) {
   struct bpf_insn VAR_31[] = {





    FUNC_4(VAR_2, VAR_7,
        VAR_14->insn_aux_data[VAR_16 + VAR_20].sanitize_stack_off,
        0),



    *VAR_23,
   };

   VAR_17 = FUNC_0(VAR_31);
   VAR_27 = FUNC_7(VAR_14, VAR_16 + VAR_20, VAR_31, VAR_17);
   if (!VAR_27)
    return -VAR_13;

   VAR_20 += VAR_17 - 1;
   VAR_14->prog = VAR_27;
   VAR_23 = VAR_27->insnsi + VAR_16 + VAR_20;
   continue;
  }

  switch (VAR_14->insn_aux_data[VAR_16 + VAR_20].ptr_type) {
  case 132:
   if (!VAR_15->convert_ctx_access)
    continue;
   VAR_30 = VAR_15->convert_ctx_access;
   break;
  case 131:
  case 130:
   VAR_30 = FUNC_9;
   break;
  case 129:
   VAR_30 = FUNC_10;
   break;
  case 128:
   VAR_30 = FUNC_11;
   break;
  default:
   continue;
  }

  VAR_19 = VAR_14->insn_aux_data[VAR_16 + VAR_20].ctx_field_size;
  VAR_18 = FUNC_3(VAR_23);






  VAR_29 = VAR_18 < VAR_19;
  VAR_25 = FUNC_6(VAR_19);
  VAR_26 = VAR_23->off;
  if (VAR_29) {
   u8 VAR_32;

   if (VAR_28 == VAR_11) {
    FUNC_13(VAR_14, "bpf verifier narrow ctx access misconfigured\n");
    return -VAR_12;
   }

   VAR_32 = VAR_3;
   if (VAR_19 == 4)
    VAR_32 = VAR_10;
   else if (VAR_19 == 8)
    VAR_32 = VAR_2;

   VAR_23->off = VAR_26 & ~(VAR_25 - 1);
   VAR_23->code = VAR_4 | VAR_5 | VAR_32;
  }

  VAR_24 = 0;
  VAR_17 = VAR_30(VAR_28, VAR_23, VAR_22, VAR_14->prog,
      &VAR_24);
  if (VAR_17 == 0 || VAR_17 >= FUNC_0(VAR_22) ||
      (VAR_19 && !VAR_24)) {
   FUNC_13(VAR_14, "bpf verifier is misconfigured\n");
   return -VAR_12;
  }

  if (VAR_29 && VAR_18 < VAR_24) {
   u8 VAR_33 = FUNC_5(
    VAR_26, VAR_18, VAR_25) * 8;
   if (VAR_19 <= 4) {
    if (VAR_33)
     VAR_22[VAR_17++] = FUNC_1(VAR_8,
         VAR_23->dst_reg,
         VAR_33);
    VAR_22[VAR_17++] = FUNC_1(VAR_0, VAR_23->dst_reg,
        (1 << VAR_18 * 8) - 1);
   } else {
    if (VAR_33)
     VAR_22[VAR_17++] = FUNC_2(VAR_8,
         VAR_23->dst_reg,
         VAR_33);
    VAR_22[VAR_17++] = FUNC_2(VAR_0, VAR_23->dst_reg,
        (1ULL << VAR_18 * 8) - 1);
   }
  }

  VAR_27 = FUNC_7(VAR_14, VAR_16 + VAR_20, VAR_22, VAR_17);
  if (!VAR_27)
   return -VAR_13;

  VAR_20 += VAR_17 - 1;


  VAR_14->prog = VAR_27;
  VAR_23 = VAR_27->insnsi + VAR_16 + VAR_20;
 }

 return 0;
}
