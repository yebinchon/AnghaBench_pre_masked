
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nfp_prog {int dummy; } ;
struct bpf_reg_state {scalar_t__ type; } ;
struct nfp_insn_meta {struct bpf_reg_state ptr; } ;
struct bpf_verifier_env {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 struct bpf_reg_state* FUNC_0 (struct bpf_verifier_env*) ;
 scalar_t__ FUNC_1 (struct nfp_insn_meta*) ;
 scalar_t__ FUNC_2 (struct nfp_insn_meta*) ;
 scalar_t__ FUNC_3 (struct nfp_insn_meta*) ;
 int FUNC_4 (struct nfp_prog*,struct nfp_insn_meta*,struct bpf_reg_state const*,struct bpf_verifier_env*) ;
 int FUNC_5 (struct bpf_verifier_env*,struct nfp_insn_meta*,struct bpf_reg_state const*,int ) ;
 int FUNC_6 (struct bpf_verifier_env*,char*,...) ;

__attribute__((used)) static int
FUNC_7(struct nfp_prog *VAR_9, struct nfp_insn_meta *VAR_10,
    struct bpf_verifier_env *VAR_11, u8 VAR_12)
{
 const struct bpf_reg_state *VAR_13 = FUNC_0(VAR_11) + VAR_12;
 int VAR_14;

 if (VAR_13->type != VAR_5 &&
     VAR_13->type != VAR_8 &&
     VAR_13->type != VAR_6 &&
     VAR_13->type != VAR_7) {
  FUNC_6(VAR_11, "unsupported ptr type: %d\n", VAR_13->type);
  return -VAR_0;
 }

 if (VAR_13->type == VAR_8) {
  VAR_14 = FUNC_4(VAR_9, VAR_10, VAR_13, VAR_11);
  if (VAR_14)
   return VAR_14;
 }

 if (VAR_13->type == VAR_6) {
  if (FUNC_1(VAR_10)) {
   VAR_14 = FUNC_5(VAR_11, VAR_10, VAR_13,
          VAR_3);
   if (VAR_14)
    return VAR_14;
  }
  if (FUNC_2(VAR_10)) {
   FUNC_6(VAR_11, "map writes not supported\n");
   return -VAR_1;
  }
  if (FUNC_3(VAR_10)) {
   VAR_14 = FUNC_5(VAR_11, VAR_10, VAR_13,
          VAR_2);
   if (VAR_14)
    return VAR_14;
  }
 }

 if (VAR_10->ptr.type != VAR_4 && VAR_10->ptr.type != VAR_13->type) {
  FUNC_6(VAR_11, "ptr type changed for instruction %d -> %d\n",
   VAR_10->ptr.type, VAR_13->type);
  return -VAR_0;
 }

 VAR_10->ptr = *VAR_13;

 return 0;
}
