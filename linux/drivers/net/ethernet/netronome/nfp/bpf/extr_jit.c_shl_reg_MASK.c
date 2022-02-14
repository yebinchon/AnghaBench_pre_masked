
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
struct nfp_prog {int dummy; } ;
struct bpf_insn {int dst_reg; int src_reg; } ;
struct nfp_insn_meta {scalar_t__ umin_src; scalar_t__ umax_src; struct bpf_insn insn; } ;


 int FUNC_0 (struct nfp_prog*,struct nfp_insn_meta*,int,scalar_t__) ;
 int FUNC_1 (struct nfp_prog*,int,int) ;
 int FUNC_2 (struct nfp_prog*,struct nfp_insn_meta*,int) ;

__attribute__((used)) static int FUNC_3(struct nfp_prog *VAR_0, struct nfp_insn_meta *VAR_1)
{
 const struct bpf_insn *VAR_2 = &VAR_1->insn;
 u64 VAR_3, VAR_4;
 u8 VAR_5, VAR_6;

 VAR_5 = VAR_2->dst_reg * 2;
 VAR_3 = VAR_1->umin_src;
 VAR_4 = VAR_1->umax_src;
 if (VAR_3 == VAR_4)
  return FUNC_0(VAR_0, VAR_1, VAR_5, VAR_3);

 VAR_6 = VAR_2->src_reg * 2;
 FUNC_1(VAR_0, VAR_5, VAR_6);
 FUNC_2(VAR_0, VAR_1, VAR_5);
 return 0;
}
