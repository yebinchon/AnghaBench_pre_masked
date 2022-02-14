
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nfp_prog {int dummy; } ;
struct bpf_insn {int dst_reg; int imm; } ;
struct nfp_insn_meta {struct bpf_insn insn; } ;


 int FUNC_0 (struct nfp_prog*,struct nfp_insn_meta*,int,int ) ;

__attribute__((used)) static int FUNC_1(struct nfp_prog *VAR_0, struct nfp_insn_meta *VAR_1)
{
 const struct bpf_insn *VAR_2 = &VAR_1->insn;
 u8 VAR_3 = VAR_2->dst_reg * 2;

 return FUNC_0(VAR_0, VAR_1, VAR_3, VAR_2->imm);
}
