
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct bpf_verifier_env {scalar_t__ id_gen; } ;
struct TYPE_2__ {scalar_t__ value; } ;
struct bpf_reg_state {int type; TYPE_1__ var_off; int subreg_def; scalar_t__ id; scalar_t__ off; } ;
struct bpf_func_state {int dummy; } ;
typedef enum bpf_reg_type { ____Placeholder_bpf_reg_type } bpf_reg_type ;
typedef enum bpf_access_type { ____Placeholder_bpf_access_type } bpf_access_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct bpf_verifier_env*,int,int,int,int,int*) ;
 int FUNC_2 (struct bpf_verifier_env*,struct bpf_reg_state*,int) ;
 int FUNC_3 (struct bpf_verifier_env*,int,int) ;
 int FUNC_4 (struct bpf_verifier_env*,int,int,int,int) ;
 int FUNC_5 (struct bpf_verifier_env*,int,int,int,int) ;
 int FUNC_6 (struct bpf_verifier_env*,int,int,int,int) ;
 int FUNC_7 (struct bpf_verifier_env*,struct bpf_reg_state*,int,int,int) ;
 int FUNC_8 (struct bpf_verifier_env*,int,int,int,int,int) ;
 int FUNC_9 (struct bpf_verifier_env*,struct bpf_reg_state*,int,int) ;
 int FUNC_10 (struct bpf_verifier_env*,struct bpf_func_state*,int,int,int) ;
 int FUNC_11 (struct bpf_verifier_env*,struct bpf_func_state*,int,int,int,int) ;
 int FUNC_12 (struct bpf_verifier_env*,struct bpf_reg_state*,int,int,int) ;
 int FUNC_13 (struct bpf_reg_state*,int) ;
 struct bpf_reg_state* FUNC_14 (struct bpf_verifier_env*) ;
 struct bpf_func_state* FUNC_15 (struct bpf_verifier_env*,struct bpf_reg_state*) ;
 scalar_t__ FUNC_16 (struct bpf_verifier_env*,int) ;
 int FUNC_17 (struct bpf_verifier_env*,struct bpf_reg_state*,int) ;
 int FUNC_18 (struct bpf_verifier_env*,struct bpf_reg_state*,int) ;
 int FUNC_19 (struct bpf_verifier_env*,int *,int) ;
 scalar_t__ FUNC_20 (struct bpf_reg_state*) ;
 scalar_t__ FUNC_21 (int) ;
 int * VAR_11 ;
 scalar_t__ FUNC_22 (int) ;
 int FUNC_23 (struct bpf_verifier_env*,struct bpf_func_state*,int) ;
 int FUNC_24 (struct bpf_verifier_env*,char*,...) ;

__attribute__((used)) static int FUNC_25(struct bpf_verifier_env *VAR_12, int VAR_13, u32 VAR_14,
       int VAR_15, int VAR_16, enum bpf_access_type VAR_17,
       int VAR_18, bool VAR_19)
{
 struct bpf_reg_state *VAR_20 = FUNC_14(VAR_12);
 struct bpf_reg_state *VAR_21 = VAR_20 + VAR_14;
 struct bpf_func_state *VAR_22;
 int VAR_23, VAR_24 = 0;

 VAR_23 = FUNC_0(VAR_16);
 if (VAR_23 < 0)
  return VAR_23;


 VAR_24 = FUNC_7(VAR_12, VAR_21, VAR_15, VAR_23, VAR_19);
 if (VAR_24)
  return VAR_24;


 VAR_15 += VAR_21->off;

 if (VAR_21->type == VAR_7) {
  if (VAR_17 == VAR_2 && VAR_18 >= 0 &&
      FUNC_16(VAR_12, VAR_18)) {
   FUNC_24(VAR_12, "R%d leaks addr into map\n", VAR_18);
   return -VAR_4;
  }
  VAR_24 = FUNC_5(VAR_12, VAR_14, VAR_15, VAR_23, VAR_17);
  if (VAR_24)
   return VAR_24;
  VAR_24 = FUNC_4(VAR_12, VAR_14, VAR_15, VAR_23, 0);
  if (!VAR_24 && VAR_17 == VAR_0 && VAR_18 >= 0)
   FUNC_18(VAR_12, VAR_20, VAR_18);

 } else if (VAR_21->type == VAR_5) {
  enum bpf_reg_type VAR_25 = VAR_10;

  if (VAR_17 == VAR_2 && VAR_18 >= 0 &&
      FUNC_16(VAR_12, VAR_18)) {
   FUNC_24(VAR_12, "R%d leaks addr into ctx\n", VAR_18);
   return -VAR_4;
  }

  VAR_24 = FUNC_2(VAR_12, VAR_21, VAR_14);
  if (VAR_24 < 0)
   return VAR_24;

  VAR_24 = FUNC_1(VAR_12, VAR_13, VAR_15, VAR_23, VAR_17, &VAR_25);
  if (!VAR_24 && VAR_17 == VAR_0 && VAR_18 >= 0) {




   if (VAR_25 == VAR_10) {
    FUNC_18(VAR_12, VAR_20, VAR_18);
   } else {
    FUNC_17(VAR_12, VAR_20,
          VAR_18);
    if (FUNC_21(VAR_25))
     VAR_20[VAR_18].id = ++VAR_12->id_gen;





    VAR_20[VAR_18].subreg_def = VAR_3;
   }
   VAR_20[VAR_18].type = VAR_25;
  }

 } else if (VAR_21->type == VAR_8) {
  VAR_15 += VAR_21->var_off.value;
  VAR_24 = FUNC_9(VAR_12, VAR_21, VAR_15, VAR_23);
  if (VAR_24)
   return VAR_24;

  VAR_22 = FUNC_15(VAR_12, VAR_21);
  VAR_24 = FUNC_23(VAR_12, VAR_22, VAR_15);
  if (VAR_24)
   return VAR_24;

  if (VAR_17 == VAR_2)
   VAR_24 = FUNC_11(VAR_12, VAR_22, VAR_15, VAR_23,
      VAR_18, VAR_13);
  else
   VAR_24 = FUNC_10(VAR_12, VAR_22, VAR_15, VAR_23,
            VAR_18);
 } else if (FUNC_20(VAR_21)) {
  if (VAR_17 == VAR_2 && !FUNC_19(VAR_12, ((void*)0), VAR_17)) {
   FUNC_24(VAR_12, "cannot write into packet\n");
   return -VAR_4;
  }
  if (VAR_17 == VAR_2 && VAR_18 >= 0 &&
      FUNC_16(VAR_12, VAR_18)) {
   FUNC_24(VAR_12, "R%d leaks addr into packet\n",
    VAR_18);
   return -VAR_4;
  }
  VAR_24 = FUNC_6(VAR_12, VAR_14, VAR_15, VAR_23, 0);
  if (!VAR_24 && VAR_17 == VAR_0 && VAR_18 >= 0)
   FUNC_18(VAR_12, VAR_20, VAR_18);
 } else if (VAR_21->type == VAR_6) {
  if (VAR_17 == VAR_2 && VAR_18 >= 0 &&
      FUNC_16(VAR_12, VAR_18)) {
   FUNC_24(VAR_12, "R%d leaks addr into flow keys\n",
    VAR_18);
   return -VAR_4;
  }

  VAR_24 = FUNC_3(VAR_12, VAR_15, VAR_23);
  if (!VAR_24 && VAR_17 == VAR_0 && VAR_18 >= 0)
   FUNC_18(VAR_12, VAR_20, VAR_18);
 } else if (FUNC_22(VAR_21->type)) {
  if (VAR_17 == VAR_2) {
   FUNC_24(VAR_12, "R%d cannot write into %s\n",
    VAR_14, VAR_11[VAR_21->type]);
   return -VAR_4;
  }
  VAR_24 = FUNC_8(VAR_12, VAR_13, VAR_14, VAR_15, VAR_23, VAR_17);
  if (!VAR_24 && VAR_18 >= 0)
   FUNC_18(VAR_12, VAR_20, VAR_18);
 } else if (VAR_21->type == VAR_9) {
  VAR_24 = FUNC_12(VAR_12, VAR_21, VAR_14, VAR_15, VAR_23);
  if (!VAR_24 && VAR_17 == VAR_0 && VAR_18 >= 0)
   FUNC_18(VAR_12, VAR_20, VAR_18);
 } else {
  FUNC_24(VAR_12, "R%d invalid mem access '%s'\n", VAR_14,
   VAR_11[VAR_21->type]);
  return -VAR_4;
 }

 if (!VAR_24 && VAR_23 < VAR_1 && VAR_18 >= 0 && VAR_17 == VAR_0 &&
     VAR_20[VAR_18].type == VAR_10) {

  FUNC_13(&VAR_20[VAR_18], VAR_23);
 }
 return VAR_24;
}
