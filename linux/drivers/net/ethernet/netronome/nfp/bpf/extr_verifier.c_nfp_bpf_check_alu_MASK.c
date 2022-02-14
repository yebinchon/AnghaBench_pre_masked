
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_prog {int dummy; } ;
struct TYPE_2__ {int src_reg; int dst_reg; scalar_t__ imm; } ;
struct nfp_insn_meta {TYPE_1__ insn; void* umax_src; void* umin_src; void* umax_dst; void* umin_dst; } ;
struct bpf_verifier_env {int dummy; } ;
struct bpf_reg_state {int umax_value; int umin_value; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 struct bpf_reg_state* FUNC_0 (struct bpf_verifier_env*) ;
 scalar_t__ FUNC_1 (struct nfp_insn_meta*) ;
 scalar_t__ FUNC_2 (struct nfp_insn_meta*) ;
 void* FUNC_3 (void*,int ) ;
 scalar_t__ FUNC_4 (struct nfp_insn_meta*) ;
 scalar_t__ FUNC_5 (struct nfp_insn_meta*) ;
 void* FUNC_6 (void*,int ) ;
 int FUNC_7 (struct bpf_verifier_env*,char*) ;

__attribute__((used)) static int
FUNC_8(struct nfp_prog *VAR_5, struct nfp_insn_meta *VAR_6,
    struct bpf_verifier_env *VAR_7)
{
 const struct bpf_reg_state *VAR_8 =
  FUNC_0(VAR_7) + VAR_6->insn.src_reg;
 const struct bpf_reg_state *VAR_9 =
  FUNC_0(VAR_7) + VAR_6->insn.dst_reg;

 VAR_6->umin_src = FUNC_6(VAR_6->umin_src, VAR_8->umin_value);
 VAR_6->umax_src = FUNC_3(VAR_6->umax_src, VAR_8->umax_value);
 VAR_6->umin_dst = FUNC_6(VAR_6->umin_dst, VAR_9->umin_value);
 VAR_6->umax_dst = FUNC_3(VAR_6->umax_dst, VAR_9->umax_value);
 if (FUNC_2(VAR_6)) {
  if (VAR_6->umax_dst > VAR_4) {
   FUNC_7(VAR_7, "multiplier is not within u32 value range\n");
   return -VAR_3;
  }
  if (FUNC_5(VAR_6) == VAR_2 && VAR_6->umax_src > VAR_4) {
   FUNC_7(VAR_7, "multiplicand is not within u32 value range\n");
   return -VAR_3;
  }
  if (FUNC_4(VAR_6) == VAR_0 &&
      FUNC_5(VAR_6) == VAR_1 && VAR_6->insn.imm < 0) {
   FUNC_7(VAR_7, "sign extended multiplicand won't be within u32 value range\n");
   return -VAR_3;
  }
 }
 if (FUNC_1(VAR_6)) {
  if (VAR_6->umax_dst > VAR_4) {
   FUNC_7(VAR_7, "dividend is not within u32 value range\n");
   return -VAR_3;
  }
  if (FUNC_5(VAR_6) == VAR_2) {
   if (VAR_6->umin_src != VAR_6->umax_src) {
    FUNC_7(VAR_7, "divisor is not constant\n");
    return -VAR_3;
   }
   if (VAR_6->umax_src > VAR_4) {
    FUNC_7(VAR_7, "divisor is not within u32 value range\n");
    return -VAR_3;
   }
  }
  if (FUNC_5(VAR_6) == VAR_1 && VAR_6->insn.imm < 0) {
   FUNC_7(VAR_7, "divide by negative constant is not supported\n");
   return -VAR_3;
  }
 }

 return 0;
}
