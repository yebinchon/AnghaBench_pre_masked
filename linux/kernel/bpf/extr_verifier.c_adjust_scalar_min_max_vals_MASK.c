
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct bpf_verifier_env {int dummy; } ;
struct TYPE_23__ {int value; int mask; } ;
struct bpf_reg_state {scalar_t__ smin_value; scalar_t__ smax_value; int umin_value; int umax_value; TYPE_1__ var_off; } ;
struct bpf_insn {int code; int dst_reg; } ;
typedef scalar_t__ s64 ;



 scalar_t__ VAR_0 ;


 scalar_t__ FUNC_0 (int ) ;


 int FUNC_1 (int ) ;



 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_2 (struct bpf_reg_state*,int) ;
 int FUNC_3 (struct bpf_reg_state*) ;
 int FUNC_4 (struct bpf_reg_state*) ;
 int FUNC_5 (struct bpf_reg_state*) ;
 int FUNC_6 (struct bpf_reg_state*) ;
 int FUNC_7 (struct bpf_reg_state*) ;
 int FUNC_8 (struct bpf_reg_state*,int) ;
 struct bpf_reg_state* FUNC_9 (struct bpf_verifier_env*) ;
 int FUNC_10 (struct bpf_verifier_env*,struct bpf_reg_state*,int ) ;
 scalar_t__ FUNC_11 (scalar_t__,int) ;
 scalar_t__ FUNC_12 (scalar_t__,int) ;
 int FUNC_13 (struct bpf_verifier_env*,struct bpf_insn*) ;
 int FUNC_14 (scalar_t__,scalar_t__) ;
 int FUNC_15 (scalar_t__,scalar_t__) ;
 TYPE_1__ FUNC_16 (TYPE_1__,TYPE_1__) ;
 TYPE_1__ FUNC_17 (TYPE_1__,TYPE_1__) ;
 TYPE_1__ FUNC_18 (TYPE_1__,int) ;
 int FUNC_19 (TYPE_1__) ;
 TYPE_1__ FUNC_20 (TYPE_1__,int) ;
 TYPE_1__ FUNC_21 (TYPE_1__,TYPE_1__) ;
 TYPE_1__ FUNC_22 (TYPE_1__,TYPE_1__) ;
 TYPE_1__ FUNC_23 (TYPE_1__,int) ;
 TYPE_1__ FUNC_24 (TYPE_1__,TYPE_1__) ;
 int FUNC_25 (struct bpf_verifier_env*,char*,int ) ;

__attribute__((used)) static int FUNC_26(struct bpf_verifier_env *VAR_5,
          struct bpf_insn *VAR_6,
          struct bpf_reg_state *VAR_7,
          struct bpf_reg_state VAR_8)
{
 struct bpf_reg_state *VAR_9 = FUNC_9(VAR_5);
 u8 VAR_10 = FUNC_1(VAR_6->code);
 bool VAR_11, VAR_12;
 s64 VAR_13, VAR_14;
 u64 VAR_15, VAR_16;
 u64 VAR_17 = (FUNC_0(VAR_6->code) == VAR_0) ? 64 : 32;
 u32 VAR_18 = VAR_6->dst_reg;
 int VAR_19;

 if (VAR_17 == 32) {




  FUNC_8(VAR_7, 4);
  FUNC_8(&VAR_8, 4);
 }

 VAR_13 = VAR_8.smin_value;
 VAR_14 = VAR_8.smax_value;
 VAR_15 = VAR_8.umin_value;
 VAR_16 = VAR_8.umax_value;
 VAR_11 = FUNC_19(VAR_8.var_off);
 VAR_12 = FUNC_19(VAR_7->var_off);

 if ((VAR_11 && (VAR_13 != VAR_14 || VAR_15 != VAR_16)) ||
     VAR_13 > VAR_14 || VAR_15 > VAR_16) {



  FUNC_4(VAR_7);
  return 0;
 }

 if (!VAR_11 &&
     VAR_10 != 135 && VAR_10 != 128 && VAR_10 != 134) {
  FUNC_4(VAR_7);
  return 0;
 }

 switch (VAR_10) {
 case 135:
  VAR_19 = FUNC_13(VAR_5, VAR_6);
  if (VAR_19 < 0) {
   FUNC_25(VAR_5, "R%d tried to add from different pointers or scalars\n", VAR_18);
   return VAR_19;
  }
  if (FUNC_14(VAR_7->smin_value, VAR_13) ||
      FUNC_14(VAR_7->smax_value, VAR_14)) {
   VAR_7->smin_value = VAR_2;
   VAR_7->smax_value = VAR_1;
  } else {
   VAR_7->smin_value += VAR_13;
   VAR_7->smax_value += VAR_14;
  }
  if (VAR_7->umin_value + VAR_15 < VAR_15 ||
      VAR_7->umax_value + VAR_16 < VAR_16) {
   VAR_7->umin_value = 0;
   VAR_7->umax_value = VAR_4;
  } else {
   VAR_7->umin_value += VAR_15;
   VAR_7->umax_value += VAR_16;
  }
  VAR_7->var_off = FUNC_16(VAR_7->var_off, VAR_8.var_off);
  break;
 case 128:
  VAR_19 = FUNC_13(VAR_5, VAR_6);
  if (VAR_19 < 0) {
   FUNC_25(VAR_5, "R%d tried to sub from different pointers or scalars\n", VAR_18);
   return VAR_19;
  }
  if (FUNC_15(VAR_7->smin_value, VAR_14) ||
      FUNC_15(VAR_7->smax_value, VAR_13)) {

   VAR_7->smin_value = VAR_2;
   VAR_7->smax_value = VAR_1;
  } else {
   VAR_7->smin_value -= VAR_14;
   VAR_7->smax_value -= VAR_13;
  }
  if (VAR_7->umin_value < VAR_16) {

   VAR_7->umin_value = 0;
   VAR_7->umax_value = VAR_4;
  } else {

   VAR_7->umin_value -= VAR_16;
   VAR_7->umax_value -= VAR_15;
  }
  VAR_7->var_off = FUNC_24(VAR_7->var_off, VAR_8.var_off);
  break;
 case 131:
  VAR_7->var_off = FUNC_21(VAR_7->var_off, VAR_8.var_off);
  if (VAR_13 < 0 || VAR_7->smin_value < 0) {

   FUNC_3(VAR_7);
   FUNC_7(VAR_7);
   break;
  }



  if (VAR_16 > VAR_3 || VAR_7->umax_value > VAR_3) {

   FUNC_3(VAR_7);

   FUNC_7(VAR_7);
   break;
  }
  VAR_7->umin_value *= VAR_15;
  VAR_7->umax_value *= VAR_16;
  if (VAR_7->umax_value > VAR_1) {

   VAR_7->smin_value = VAR_2;
   VAR_7->smax_value = VAR_1;
  } else {
   VAR_7->smin_value = VAR_7->umin_value;
   VAR_7->smax_value = VAR_7->umax_value;
  }
  break;
 case 134:
  if (VAR_11 && VAR_12) {
   FUNC_2(VAR_7, VAR_7->var_off.value &
        VAR_8.var_off.value);
   break;
  }



  VAR_7->var_off = FUNC_17(VAR_7->var_off, VAR_8.var_off);
  VAR_7->umin_value = VAR_7->var_off.value;
  VAR_7->umax_value = FUNC_12(VAR_7->umax_value, VAR_16);
  if (VAR_7->smin_value < 0 || VAR_13 < 0) {



   VAR_7->smin_value = VAR_2;
   VAR_7->smax_value = VAR_1;
  } else {



   VAR_7->smin_value = VAR_7->umin_value;
   VAR_7->smax_value = VAR_7->umax_value;
  }

  FUNC_7(VAR_7);
  break;
 case 130:
  if (VAR_11 && VAR_12) {
   FUNC_2(VAR_7, VAR_7->var_off.value |
        VAR_8.var_off.value);
   break;
  }



  VAR_7->var_off = FUNC_22(VAR_7->var_off, VAR_8.var_off);
  VAR_7->umin_value = FUNC_11(VAR_7->umin_value, VAR_15);
  VAR_7->umax_value = VAR_7->var_off.value |
          VAR_7->var_off.mask;
  if (VAR_7->smin_value < 0 || VAR_13 < 0) {



   VAR_7->smin_value = VAR_2;
   VAR_7->smax_value = VAR_1;
  } else {



   VAR_7->smin_value = VAR_7->umin_value;
   VAR_7->smax_value = VAR_7->umax_value;
  }

  FUNC_7(VAR_7);
  break;
 case 132:
  if (VAR_16 >= VAR_17) {



   FUNC_10(VAR_5, VAR_9, VAR_6->dst_reg);
   break;
  }



  VAR_7->smin_value = VAR_2;
  VAR_7->smax_value = VAR_1;

  if (VAR_7->umax_value > 1ULL << (63 - VAR_16)) {
   VAR_7->umin_value = 0;
   VAR_7->umax_value = VAR_4;
  } else {
   VAR_7->umin_value <<= VAR_15;
   VAR_7->umax_value <<= VAR_16;
  }
  VAR_7->var_off = FUNC_20(VAR_7->var_off, VAR_15);

  FUNC_7(VAR_7);
  break;
 case 129:
  if (VAR_16 >= VAR_17) {



   FUNC_10(VAR_5, VAR_9, VAR_6->dst_reg);
   break;
  }
  VAR_7->smin_value = VAR_2;
  VAR_7->smax_value = VAR_1;
  VAR_7->var_off = FUNC_23(VAR_7->var_off, VAR_15);
  VAR_7->umin_value >>= VAR_16;
  VAR_7->umax_value >>= VAR_15;

  FUNC_7(VAR_7);
  break;
 case 133:
  if (VAR_16 >= VAR_17) {



   FUNC_10(VAR_5, VAR_9, VAR_6->dst_reg);
   break;
  }




  VAR_7->smin_value >>= VAR_15;
  VAR_7->smax_value >>= VAR_15;
  VAR_7->var_off = FUNC_18(VAR_7->var_off, VAR_15);




  VAR_7->umin_value = 0;
  VAR_7->umax_value = VAR_4;
  FUNC_7(VAR_7);
  break;
 default:
  FUNC_10(VAR_5, VAR_9, VAR_6->dst_reg);
  break;
 }

 if (FUNC_0(VAR_6->code) != VAR_0) {

  FUNC_8(VAR_7, 4);
 }

 FUNC_6(VAR_7);
 FUNC_5(VAR_7);
 return 0;
}
