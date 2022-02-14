
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nfp_prog {struct nfp_insn_meta* verifier_meta; } ;
struct TYPE_8__ {int code; scalar_t__ src_reg; scalar_t__ dst_reg; } ;
struct nfp_insn_meta {TYPE_4__ insn; } ;
struct bpf_verifier_env {TYPE_3__* prog; } ;
struct TYPE_7__ {TYPE_2__* aux; } ;
struct TYPE_6__ {TYPE_1__* offload; } ;
struct TYPE_5__ {struct nfp_prog* dev_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct nfp_insn_meta*) ;
 scalar_t__ FUNC_1 (struct nfp_insn_meta*) ;
 scalar_t__ FUNC_2 (struct nfp_insn_meta*) ;
 scalar_t__ FUNC_3 (struct nfp_insn_meta*) ;
 scalar_t__ FUNC_4 (struct nfp_insn_meta*) ;
 int FUNC_5 (struct nfp_prog*,struct nfp_insn_meta*,struct bpf_verifier_env*) ;
 int FUNC_6 (struct nfp_prog*,struct bpf_verifier_env*) ;
 int FUNC_7 (struct nfp_prog*,struct bpf_verifier_env*,struct nfp_insn_meta*) ;
 int FUNC_8 (struct nfp_prog*,struct nfp_insn_meta*,struct bpf_verifier_env*,scalar_t__) ;
 int FUNC_9 (struct nfp_prog*,struct nfp_insn_meta*,struct bpf_verifier_env*) ;
 int FUNC_10 (struct nfp_prog*,struct nfp_insn_meta*,struct bpf_verifier_env*) ;
 struct nfp_insn_meta* FUNC_11 (struct nfp_prog*,struct nfp_insn_meta*,int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (struct bpf_verifier_env*,char*,...) ;

int FUNC_14(struct bpf_verifier_env *VAR_4, int VAR_5,
      int VAR_6)
{
 struct nfp_prog *VAR_7 = VAR_4->prog->aux->offload->dev_priv;
 struct nfp_insn_meta *VAR_8 = VAR_7->verifier_meta;

 VAR_8 = FUNC_11(VAR_7, VAR_8, VAR_5);
 VAR_7->verifier_meta = VAR_8;

 if (!FUNC_12(VAR_8->insn.code)) {
  FUNC_13(VAR_4, "instruction %#02x not supported\n",
   VAR_8->insn.code);
  return -VAR_2;
 }

 if (VAR_8->insn.src_reg >= VAR_3 ||
     VAR_8->insn.dst_reg >= VAR_3) {
  FUNC_13(VAR_4, "program uses extended registers - jit hardening?\n");
  return -VAR_2;
 }

 if (FUNC_1(VAR_8))
  return FUNC_7(VAR_7, VAR_4, VAR_8);
 if (VAR_8->insn.code == (VAR_1 | VAR_0))
  return FUNC_6(VAR_7, VAR_4);

 if (FUNC_2(VAR_8))
  return FUNC_8(VAR_7, VAR_8, VAR_4,
      VAR_8->insn.src_reg);
 if (FUNC_3(VAR_8))
  return FUNC_9(VAR_7, VAR_8, VAR_4);

 if (FUNC_4(VAR_8))
  return FUNC_10(VAR_7, VAR_8, VAR_4);

 if (FUNC_0(VAR_8))
  return FUNC_5(VAR_7, VAR_8, VAR_4);

 return 0;
}
