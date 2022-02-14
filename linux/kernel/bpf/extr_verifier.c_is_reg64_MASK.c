
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct bpf_verifier_env {int dummy; } ;
struct bpf_reg_state {scalar_t__ type; } ;
struct bpf_insn {scalar_t__ code; scalar_t__ src_reg; int imm; } ;
typedef enum reg_arg_type { ____Placeholder_reg_arg_type } reg_arg_type ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static bool FUNC_4(struct bpf_verifier_env *VAR_17, struct bpf_insn *VAR_18,
       u32 VAR_19, struct bpf_reg_state *VAR_20, enum reg_arg_type VAR_21)
{
 u8 VAR_22, VAR_23, VAR_24;

 VAR_22 = VAR_18->code;
 VAR_23 = FUNC_0(VAR_22);
 VAR_24 = FUNC_2(VAR_22);
 if (VAR_23 == VAR_7) {



  if (VAR_24 == VAR_5)
   return 1;
  if (VAR_24 == VAR_2) {





   if (VAR_18->src_reg == VAR_11)
    return 0;



   if (VAR_21 == VAR_16)
    return 1;

   return 0;
  }
 }

 if (VAR_23 == VAR_1 || VAR_23 == VAR_7 ||

     (VAR_23 == VAR_0 && VAR_24 == VAR_4 && VAR_18->imm == 64))
  return 1;

 if (VAR_23 == VAR_0 || VAR_23 == VAR_8)
  return 0;

 if (VAR_23 == VAR_10) {
  if (VAR_21 != VAR_16)
   return FUNC_3(VAR_22) == VAR_3;

  return 1;
 }

 if (VAR_23 == VAR_14) {
  if (VAR_20->type != VAR_15)
   return 1;
  return FUNC_3(VAR_22) == VAR_3;
 }

 if (VAR_23 == VAR_9) {
  u8 VAR_25 = FUNC_1(VAR_22);


  if (VAR_25 == VAR_6)
   return 1;


  if (VAR_21 != VAR_16)
   return 0;


  if (VAR_19 == VAR_12)
   return 1;


  return 1;
 }

 if (VAR_23 == VAR_13)

  return 1;


 return 1;
}
