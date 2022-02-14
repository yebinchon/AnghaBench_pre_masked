
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tn_buf ;
struct tnum {int dummy; } ;
struct bpf_verifier_env {TYPE_1__* prog; } ;
struct bpf_reg_state {size_t type; struct tnum var_off; } ;
struct TYPE_2__ {int type; int enforce_expected_attach_type; int expected_attach_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;







 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 struct bpf_reg_state* FUNC_0 (struct bpf_verifier_env*) ;
 char** VAR_6 ;
 scalar_t__ FUNC_1 (struct tnum,struct tnum) ;
 int FUNC_2 (struct tnum) ;
 struct tnum FUNC_3 (int,int) ;
 int FUNC_4 (char*,int,struct tnum) ;
 struct tnum VAR_7 ;
 int FUNC_5 (struct bpf_verifier_env*,char*,...) ;

__attribute__((used)) static int FUNC_6(struct bpf_verifier_env *VAR_8)
{
 struct tnum VAR_9 = VAR_7;
 struct bpf_reg_state *VAR_10;
 struct tnum VAR_11 = FUNC_3(0, 1);

 switch (VAR_8->prog->type) {
 case 130:
  if (VAR_8->prog->expected_attach_type == VAR_1 ||
      VAR_8->prog->expected_attach_type == VAR_2)
   VAR_11 = FUNC_3(1, 1);
  break;
 case 133:
  if (VAR_8->prog->expected_attach_type == VAR_0) {
   VAR_11 = FUNC_3(0, 3);
   VAR_9 = FUNC_3(2, 3);
  }
  break;
 case 132:
 case 128:
 case 134:
 case 129:
 case 131:
  break;
 default:
  return 0;
 }

 VAR_10 = FUNC_0(VAR_8) + VAR_3;
 if (VAR_10->type != VAR_5) {
  FUNC_5(VAR_8, "At program exit the register R0 is not a known value (%s)\n",
   VAR_6[VAR_10->type]);
  return -VAR_4;
 }

 if (!FUNC_1(VAR_11, VAR_10->var_off)) {
  char VAR_12[48];

  FUNC_5(VAR_8, "At program exit the register R0 ");
  if (!FUNC_2(VAR_10->var_off)) {
   FUNC_4(VAR_12, sizeof(VAR_12), VAR_10->var_off);
   FUNC_5(VAR_8, "has value %s", VAR_12);
  } else {
   FUNC_5(VAR_8, "has unknown scalar value");
  }
  FUNC_4(VAR_12, sizeof(VAR_12), VAR_11);
  FUNC_5(VAR_8, " should have been in %s\n", VAR_12);
  return -VAR_4;
 }

 if (!FUNC_2(VAR_9) &&
     FUNC_1(VAR_9, VAR_10->var_off))
  VAR_8->prog->enforce_expected_attach_type = 1;
 return 0;
}
