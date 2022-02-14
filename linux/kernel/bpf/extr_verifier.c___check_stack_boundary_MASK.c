
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int tn_buf ;
struct bpf_verifier_env {int dummy; } ;
struct bpf_reg_state {int var_off; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct bpf_reg_state* FUNC_0 (struct bpf_verifier_env*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,int,int ) ;
 int FUNC_3 (struct bpf_verifier_env*,char*,int ,...) ;

__attribute__((used)) static int FUNC_4(struct bpf_verifier_env *VAR_2, u32 VAR_3,
      int VAR_4, int VAR_5,
      bool VAR_6)
{
 struct bpf_reg_state *VAR_7 = FUNC_0(VAR_2, VAR_3);

 if (VAR_4 >= 0 || VAR_4 < -VAR_1 || VAR_4 + VAR_5 > 0 ||
     VAR_5 < 0 || (VAR_5 == 0 && !VAR_6)) {
  if (FUNC_1(VAR_7->var_off)) {
   FUNC_3(VAR_2, "invalid stack type R%d off=%d access_size=%d\n",
    VAR_3, VAR_4, VAR_5);
  } else {
   char VAR_8[48];

   FUNC_2(VAR_8, sizeof(VAR_8), VAR_7->var_off);
   FUNC_3(VAR_2, "invalid stack type R%d var_off=%s access_size=%d\n",
    VAR_3, VAR_8, VAR_5);
  }
  return -VAR_0;
 }
 return 0;
}
