
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
typedef size_t u32 ;
struct bpf_verifier_state {size_t curframe; struct bpf_func_state** frame; } ;
struct bpf_verifier_env {int allow_ptr_leaks; int id_gen; struct bpf_verifier_state* cur_state; } ;
struct TYPE_8__ {scalar_t__ value; } ;
typedef struct bpf_reg_state {scalar_t__ smin_value; scalar_t__ smax_value; scalar_t__ umin_value; scalar_t__ umax_value; int type; scalar_t__ off; TYPE_1__ var_off; int raw; int id; } const bpf_reg_state ;
struct bpf_insn {size_t dst_reg; size_t src_reg; int code; } ;
struct bpf_func_state {struct bpf_reg_state const* regs; } ;
typedef scalar_t__ s64 ;
typedef int s32 ;



 scalar_t__ VAR_0 ;

 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;




 int VAR_1 ;
 int VAR_2 ;







 size_t VAR_3 ;



 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int FUNC_2 (struct bpf_reg_state const*) ;
 int FUNC_3 (struct bpf_reg_state const*) ;
 int FUNC_4 (struct bpf_reg_state const*) ;
 int FUNC_5 (struct bpf_reg_state const*) ;
 int * VAR_7 ;
 scalar_t__ FUNC_6 (struct bpf_verifier_env*,size_t,scalar_t__,int,int) ;
 int FUNC_7 (struct bpf_verifier_env*,struct bpf_reg_state const*,size_t) ;
 scalar_t__ FUNC_8 (struct bpf_verifier_env*,struct bpf_reg_state const*,scalar_t__,int) ;
 int FUNC_9 (struct bpf_reg_state const*) ;
 int * VAR_8 ;
 int FUNC_10 (struct bpf_verifier_env*,struct bpf_insn*,struct bpf_reg_state const*,struct bpf_reg_state const*,int) ;
 int FUNC_11 (scalar_t__,scalar_t__) ;
 int FUNC_12 (scalar_t__,scalar_t__) ;
 TYPE_1__ FUNC_13 (TYPE_1__,TYPE_1__) ;
 int FUNC_14 (TYPE_1__) ;
 TYPE_1__ FUNC_15 (TYPE_1__,TYPE_1__) ;
 int FUNC_16 (struct bpf_verifier_env*,char*,size_t,...) ;

__attribute__((used)) static int FUNC_17(struct bpf_verifier_env *VAR_9,
       struct bpf_insn *VAR_10,
       const struct bpf_reg_state *VAR_11,
       const struct bpf_reg_state *VAR_12)
{
 struct bpf_verifier_state *VAR_13 = VAR_9->cur_state;
 struct bpf_func_state *VAR_14 = VAR_13->frame[VAR_13->curframe];
 struct bpf_reg_state *VAR_15 = VAR_14->regs, *VAR_16;
 bool VAR_17 = FUNC_14(VAR_12->var_off);
 s64 VAR_18 = VAR_12->smin_value, VAR_19 = VAR_12->smax_value,
     VAR_20 = VAR_11->smin_value, VAR_21 = VAR_11->smax_value;
 u64 VAR_22 = VAR_12->umin_value, VAR_23 = VAR_12->umax_value,
     VAR_24 = VAR_11->umin_value, VAR_25 = VAR_11->umax_value;
 u32 VAR_26 = VAR_10->dst_reg, VAR_27 = VAR_10->src_reg;
 u8 VAR_28 = FUNC_1(VAR_10->code);
 int VAR_29;

 VAR_16 = &VAR_15[VAR_26];

 if ((VAR_17 && (VAR_18 != VAR_19 || VAR_22 != VAR_23)) ||
     VAR_18 > VAR_19 || VAR_22 > VAR_23) {



  FUNC_2(VAR_16);
  return 0;
 }

 if (FUNC_0(VAR_10->code) != VAR_0) {

  FUNC_16(VAR_9,
   "R%d 32-bit pointer arithmetic prohibited\n",
   VAR_26);
  return -VAR_1;
 }

 switch (VAR_11->type) {
 case 136:
  FUNC_16(VAR_9, "R%d pointer arithmetic on %s prohibited, null-check it first\n",
   VAR_26, VAR_8[VAR_11->type]);
  return -VAR_1;
 case 138:
 case 135:
 case 134:
 case 133:
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
  FUNC_16(VAR_9, "R%d pointer arithmetic on %s prohibited\n",
   VAR_26, VAR_8[VAR_11->type]);
  return -VAR_1;
 case 137:
  if (!VAR_9->allow_ptr_leaks && !VAR_17 && (VAR_18 < 0) != (VAR_19 < 0)) {
   FUNC_16(VAR_9, "R%d has unknown scalar with mixed signed bounds, pointer arithmetic with it prohibited for !root\n",
    VAR_12 == VAR_16 ? VAR_26 : VAR_27);
   return -VAR_1;
  }

 default:
  break;
 }




 VAR_16->type = VAR_11->type;
 VAR_16->id = VAR_11->id;

 if (!FUNC_7(VAR_9, VAR_12, VAR_11->type) ||
     !FUNC_7(VAR_9, VAR_11, VAR_11->type))
  return -VAR_2;

 switch (VAR_28) {
 case 143:
  VAR_29 = FUNC_10(VAR_9, VAR_10, VAR_11, VAR_16, VAR_18 < 0);
  if (VAR_29 < 0) {
   FUNC_16(VAR_9, "R%d tried to add from different maps or paths\n", VAR_26);
   return VAR_29;
  }



  if (VAR_17 && (VAR_11->off + VAR_18 ==
         (s64)(s32)(VAR_11->off + VAR_18))) {

   VAR_16->smin_value = VAR_20;
   VAR_16->smax_value = VAR_21;
   VAR_16->umin_value = VAR_24;
   VAR_16->umax_value = VAR_25;
   VAR_16->var_off = VAR_11->var_off;
   VAR_16->off = VAR_11->off + VAR_18;
   VAR_16->raw = VAR_11->raw;
   break;
  }
  if (FUNC_11(VAR_20, VAR_18) ||
      FUNC_11(VAR_21, VAR_19)) {
   VAR_16->smin_value = VAR_5;
   VAR_16->smax_value = VAR_4;
  } else {
   VAR_16->smin_value = VAR_20 + VAR_18;
   VAR_16->smax_value = VAR_21 + VAR_19;
  }
  if (VAR_24 + VAR_22 < VAR_24 ||
      VAR_25 + VAR_23 < VAR_25) {
   VAR_16->umin_value = 0;
   VAR_16->umax_value = VAR_6;
  } else {
   VAR_16->umin_value = VAR_24 + VAR_22;
   VAR_16->umax_value = VAR_25 + VAR_23;
  }
  VAR_16->var_off = FUNC_13(VAR_11->var_off, VAR_12->var_off);
  VAR_16->off = VAR_11->off;
  VAR_16->raw = VAR_11->raw;
  if (FUNC_9(VAR_11)) {
   VAR_16->id = ++VAR_9->id_gen;

   VAR_16->raw = 0;
  }
  break;
 case 140:
  VAR_29 = FUNC_10(VAR_9, VAR_10, VAR_11, VAR_16, VAR_18 < 0);
  if (VAR_29 < 0) {
   FUNC_16(VAR_9, "R%d tried to sub from different maps or paths\n", VAR_26);
   return VAR_29;
  }
  if (VAR_16 == VAR_12) {

   FUNC_16(VAR_9, "R%d tried to subtract pointer from scalar\n",
    VAR_26);
   return -VAR_1;
  }




  if (VAR_11->type == VAR_3) {
   FUNC_16(VAR_9, "R%d subtraction from stack pointer prohibited\n",
    VAR_26);
   return -VAR_1;
  }
  if (VAR_17 && (VAR_11->off - VAR_18 ==
         (s64)(s32)(VAR_11->off - VAR_18))) {

   VAR_16->smin_value = VAR_20;
   VAR_16->smax_value = VAR_21;
   VAR_16->umin_value = VAR_24;
   VAR_16->umax_value = VAR_25;
   VAR_16->var_off = VAR_11->var_off;
   VAR_16->id = VAR_11->id;
   VAR_16->off = VAR_11->off - VAR_18;
   VAR_16->raw = VAR_11->raw;
   break;
  }



  if (FUNC_12(VAR_20, VAR_19) ||
      FUNC_12(VAR_21, VAR_18)) {

   VAR_16->smin_value = VAR_5;
   VAR_16->smax_value = VAR_4;
  } else {
   VAR_16->smin_value = VAR_20 - VAR_19;
   VAR_16->smax_value = VAR_21 - VAR_18;
  }
  if (VAR_24 < VAR_23) {

   VAR_16->umin_value = 0;
   VAR_16->umax_value = VAR_6;
  } else {

   VAR_16->umin_value = VAR_24 - VAR_23;
   VAR_16->umax_value = VAR_25 - VAR_22;
  }
  VAR_16->var_off = FUNC_15(VAR_11->var_off, VAR_12->var_off);
  VAR_16->off = VAR_11->off;
  VAR_16->raw = VAR_11->raw;
  if (FUNC_9(VAR_11)) {
   VAR_16->id = ++VAR_9->id_gen;

   if (VAR_18 < 0)
    VAR_16->raw = 0;
  }
  break;
 case 142:
 case 141:
 case 139:

  FUNC_16(VAR_9, "R%d bitwise operator %s on pointer prohibited\n",
   VAR_26, VAR_7[VAR_28 >> 4]);
  return -VAR_1;
 default:

  FUNC_16(VAR_9, "R%d pointer arithmetic with %s operator prohibited\n",
   VAR_26, VAR_7[VAR_28 >> 4]);
  return -VAR_1;
 }

 if (!FUNC_7(VAR_9, VAR_16, VAR_11->type))
  return -VAR_2;

 FUNC_5(VAR_16);
 FUNC_4(VAR_16);
 FUNC_3(VAR_16);




 if (!VAR_9->allow_ptr_leaks) {
  if (VAR_16->type == 137 &&
      FUNC_6(VAR_9, VAR_26, VAR_16->off, 1, 0)) {
   FUNC_16(VAR_9, "R%d pointer arithmetic of map value goes out of range, "
    "prohibited for !root\n", VAR_26);
   return -VAR_1;
  } else if (VAR_16->type == VAR_3 &&
      FUNC_8(VAR_9, VAR_16, VAR_16->off +
           VAR_16->var_off.value, 1)) {
   FUNC_16(VAR_9, "R%d stack pointer arithmetic goes out of range, "
    "prohibited for !root\n", VAR_26);
   return -VAR_1;
  }
 }

 return 0;
}
