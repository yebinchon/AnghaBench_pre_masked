
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tn_buf ;
struct tnum {int dummy; } ;
struct bpf_verifier_env {int dummy; } ;
struct bpf_reg_state {scalar_t__ off; int var_off; } ;


 int VAR_0 ;
 struct tnum FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct tnum,int) ;
 int FUNC_3 (char*,int,int ) ;
 int FUNC_4 (struct bpf_verifier_env*,char*,char const*,char*,scalar_t__,int,int) ;

__attribute__((used)) static int FUNC_5(struct bpf_verifier_env *VAR_1,
           const struct bpf_reg_state *VAR_2,
           const char *VAR_3,
           int VAR_4, int VAR_5, bool VAR_6)
{
 struct tnum VAR_7;


 if (!VAR_6 || VAR_5 == 1)
  return 0;

 VAR_7 = FUNC_0(VAR_2->var_off, FUNC_1(VAR_2->off + VAR_4));
 if (!FUNC_2(VAR_7, VAR_5)) {
  char VAR_8[48];

  FUNC_3(VAR_8, sizeof(VAR_8), VAR_2->var_off);
  FUNC_4(VAR_1, "misaligned %saccess off %s+%d+%d size %d\n",
   VAR_3, VAR_8, VAR_2->off, VAR_4, VAR_5);
  return -VAR_0;
 }

 return 0;
}
