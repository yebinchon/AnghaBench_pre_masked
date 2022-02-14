
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_verifier_state {int dummy; } ;
struct bpf_reg_state {int type; } ;
struct bpf_insn {int code; } ;


 scalar_t__ FUNC_0 (int ) ;




 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct bpf_verifier_state*,struct bpf_reg_state*,int ,int) ;
 int FUNC_4 (struct bpf_reg_state*,int ) ;

__attribute__((used)) static bool FUNC_5(const struct bpf_insn *VAR_5,
       struct bpf_reg_state *VAR_6,
       struct bpf_reg_state *VAR_7,
       struct bpf_verifier_state *VAR_8,
       struct bpf_verifier_state *VAR_9)
{
 if (FUNC_2(VAR_5->code) != VAR_1)
  return 0;


 if (FUNC_0(VAR_5->code) == VAR_0)
  return 0;

 switch (FUNC_1(VAR_5->code)) {
 case 130:
  if ((VAR_6->type == VAR_2 &&
       VAR_7->type == VAR_3) ||
      (VAR_6->type == VAR_4 &&
       FUNC_4(VAR_7, VAR_2))) {

   FUNC_3(VAR_8, VAR_6,
            VAR_6->type, 0);
  } else if ((VAR_6->type == VAR_3 &&
       VAR_7->type == VAR_2) ||
      (FUNC_4(VAR_6, VAR_2) &&
       VAR_7->type == VAR_4)) {

   FUNC_3(VAR_9, VAR_7,
            VAR_7->type, 1);
  } else {
   return 0;
  }
  break;
 case 128:
  if ((VAR_6->type == VAR_2 &&
       VAR_7->type == VAR_3) ||
      (VAR_6->type == VAR_4 &&
       FUNC_4(VAR_7, VAR_2))) {

   FUNC_3(VAR_9, VAR_6,
            VAR_6->type, 1);
  } else if ((VAR_6->type == VAR_3 &&
       VAR_7->type == VAR_2) ||
      (FUNC_4(VAR_6, VAR_2) &&
       VAR_7->type == VAR_4)) {

   FUNC_3(VAR_8, VAR_7,
            VAR_7->type, 0);
  } else {
   return 0;
  }
  break;
 case 131:
  if ((VAR_6->type == VAR_2 &&
       VAR_7->type == VAR_3) ||
      (VAR_6->type == VAR_4 &&
       FUNC_4(VAR_7, VAR_2))) {

   FUNC_3(VAR_8, VAR_6,
            VAR_6->type, 1);
  } else if ((VAR_6->type == VAR_3 &&
       VAR_7->type == VAR_2) ||
      (FUNC_4(VAR_6, VAR_2) &&
       VAR_7->type == VAR_4)) {

   FUNC_3(VAR_9, VAR_7,
            VAR_7->type, 0);
  } else {
   return 0;
  }
  break;
 case 129:
  if ((VAR_6->type == VAR_2 &&
       VAR_7->type == VAR_3) ||
      (VAR_6->type == VAR_4 &&
       FUNC_4(VAR_7, VAR_2))) {

   FUNC_3(VAR_9, VAR_6,
            VAR_6->type, 0);
  } else if ((VAR_6->type == VAR_3 &&
       VAR_7->type == VAR_2) ||
      (FUNC_4(VAR_6, VAR_2) &&
       VAR_7->type == VAR_4)) {

   FUNC_3(VAR_8, VAR_7,
            VAR_7->type, 1);
  } else {
   return 0;
  }
  break;
 default:
  return 0;
 }

 return 1;
}
