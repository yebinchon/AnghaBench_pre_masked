
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tn_buf ;
struct bpf_verifier_env {int dummy; } ;
struct TYPE_3__ {scalar_t__ value; } ;
struct bpf_reg_state {TYPE_1__ var_off; scalar_t__ off; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__) ;
 int FUNC_1 (char*,int,TYPE_1__) ;
 int FUNC_2 (struct bpf_verifier_env*,char*,...) ;

__attribute__((used)) static int FUNC_3(struct bpf_verifier_env *VAR_1,
    const struct bpf_reg_state *VAR_2, int VAR_3)
{




 if (VAR_2->off) {
  FUNC_2(VAR_1, "dereference of modified ctx ptr R%d off=%d disallowed\n",
   VAR_3, VAR_2->off);
  return -VAR_0;
 }

 if (!FUNC_0(VAR_2->var_off) || VAR_2->var_off.value) {
  char VAR_4[48];

  FUNC_1(VAR_4, sizeof(VAR_4), VAR_2->var_off);
  FUNC_2(VAR_1, "variable ctx access var_off=%s disallowed\n", VAR_4);
  return -VAR_0;
 }

 return 0;
}
