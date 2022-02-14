
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nfp_insn_meta {int dummy; } ;
struct bpf_verifier_env {int dummy; } ;
struct bpf_reg_state {int dummy; } ;


 int FUNC_0 (struct bpf_verifier_env*,char*,char const*) ;

__attribute__((used)) static bool
FUNC_1(const char *VAR_0, struct bpf_verifier_env *VAR_1,
      struct nfp_insn_meta *VAR_2,
      u32 VAR_3, const struct bpf_reg_state *VAR_4)
{
 if (!VAR_3) {
  FUNC_0(VAR_1, "%s: not supported by FW\n", VAR_0);
  return 0;
 }

 return 1;
}
