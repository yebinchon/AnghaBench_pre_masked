
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
 int FUNC_4 (struct bpf_verifier_env*,char*,int,char*,scalar_t__,int,int) ;

__attribute__((used)) static int FUNC_5(struct bpf_verifier_env *VAR_1,
       const struct bpf_reg_state *VAR_2,
       int VAR_3, int VAR_4, bool VAR_5)
{
 struct tnum VAR_6;
 int VAR_7;


 if (!VAR_5 || VAR_4 == 1)
  return 0;
 VAR_7 = 2;

 VAR_6 = FUNC_0(VAR_2->var_off, FUNC_1(VAR_7 + VAR_2->off + VAR_3));
 if (!FUNC_2(VAR_6, VAR_4)) {
  char VAR_8[48];

  FUNC_3(VAR_8, sizeof(VAR_8), VAR_2->var_off);
  FUNC_4(VAR_1,
   "misaligned packet access off %d+%s+%d+%d size %d\n",
   VAR_7, VAR_8, VAR_2->off, VAR_3, VAR_4);
  return -VAR_0;
 }

 return 0;
}
