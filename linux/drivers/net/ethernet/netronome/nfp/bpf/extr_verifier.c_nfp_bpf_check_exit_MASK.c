
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char* u64 ;
typedef int tn_buf ;
struct nfp_prog {scalar_t__ type; } ;
struct bpf_verifier_env {int dummy; } ;
struct TYPE_3__ {char* value; } ;
struct bpf_reg_state {scalar_t__ type; TYPE_1__ var_off; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 struct bpf_reg_state* FUNC_0 (struct bpf_verifier_env*) ;
 int FUNC_1 (struct bpf_verifier_env*,char*,scalar_t__,char*) ;
 scalar_t__ FUNC_2 (TYPE_1__) ;
 int FUNC_3 (char*,int,TYPE_1__) ;

__attribute__((used)) static int
FUNC_4(struct nfp_prog *VAR_9,
     struct bpf_verifier_env *VAR_10)
{
 const struct bpf_reg_state *VAR_11 = FUNC_0(VAR_10) + VAR_2;
 u64 VAR_12;

 if (VAR_9->type == VAR_1)
  return 0;

 if (!(VAR_11->type == VAR_4 && FUNC_2(VAR_11->var_off))) {
  char VAR_13[48];

  FUNC_3(VAR_13, sizeof(VAR_13), VAR_11->var_off);
  FUNC_1(VAR_10, "unsupported exit state: %d, var_off: %s\n",
   VAR_11->type, VAR_13);
  return -VAR_3;
 }

 VAR_12 = VAR_11->var_off.value;
 if (VAR_9->type == VAR_0 &&
     VAR_12 <= VAR_6 &&
     VAR_12 != VAR_7 && VAR_12 != VAR_8 &&
     VAR_12 != VAR_5) {
  FUNC_1(VAR_10, "unsupported exit state: %d, imm: %llx\n",
   VAR_11->type, VAR_12);
  return -VAR_3;
 }

 return 0;
}
