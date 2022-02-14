
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfp_prog {int dummy; } ;
struct TYPE_4__ {int src_reg; int dst_reg; } ;
struct nfp_insn_meta {int xadd_over_16bit; int xadd_maybe_16bit; TYPE_2__ insn; } ;
struct bpf_verifier_env {int dummy; } ;
struct TYPE_3__ {int value; int mask; } ;
struct bpf_reg_state {scalar_t__ type; TYPE_1__ var_off; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct bpf_reg_state* FUNC_0 (struct bpf_verifier_env*) ;
 int FUNC_1 (struct nfp_prog*,struct nfp_insn_meta*,struct bpf_verifier_env*,int) ;
 int FUNC_2 (struct bpf_verifier_env*,char*,scalar_t__) ;

__attribute__((used)) static int
FUNC_3(struct nfp_prog *VAR_3, struct nfp_insn_meta *VAR_4,
     struct bpf_verifier_env *VAR_5)
{
 const struct bpf_reg_state *VAR_6 = FUNC_0(VAR_5) + VAR_4->insn.src_reg;
 const struct bpf_reg_state *VAR_7 = FUNC_0(VAR_5) + VAR_4->insn.dst_reg;

 if (VAR_7->type != VAR_1) {
  FUNC_2(VAR_5, "atomic add not to a map value pointer: %d\n",
   VAR_7->type);
  return -VAR_0;
 }
 if (VAR_6->type != VAR_2) {
  FUNC_2(VAR_5, "atomic add not of a scalar: %d\n", VAR_6->type);
  return -VAR_0;
 }

 VAR_4->xadd_over_16bit |=
  VAR_6->var_off.value > 0xffff || VAR_6->var_off.mask > 0xffff;
 VAR_4->xadd_maybe_16bit |=
  (VAR_6->var_off.value & ~VAR_6->var_off.mask) <= 0xffff;

 return FUNC_1(VAR_3, VAR_4, VAR_5, VAR_4->insn.dst_reg);
}
