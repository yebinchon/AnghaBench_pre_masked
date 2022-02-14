
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tn_buf ;
struct bpf_verifier_env {int dummy; } ;
struct bpf_reg_state {int var_off; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (struct bpf_verifier_env*,char*,...) ;

__attribute__((used)) static int FUNC_3(struct bpf_verifier_env *VAR_2,
         const struct bpf_reg_state *VAR_3,
         int VAR_4, int VAR_5)
{




 if (!FUNC_0(VAR_3->var_off)) {
  char VAR_6[48];

  FUNC_1(VAR_6, sizeof(VAR_6), VAR_3->var_off);
  FUNC_2(VAR_2, "variable stack access var_off=%s off=%d size=%d\n",
   VAR_6, VAR_4, VAR_5);
  return -VAR_0;
 }

 if (VAR_4 >= 0 || VAR_4 < -VAR_1) {
  FUNC_2(VAR_2, "invalid stack off=%d size=%d\n", VAR_4, VAR_5);
  return -VAR_0;
 }

 return 0;
}
