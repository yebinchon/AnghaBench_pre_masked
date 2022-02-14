
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
struct nfp_prog {int dummy; } ;
struct bpf_insn {unsigned int imm; int dst_reg; } ;
struct nfp_insn_meta {struct bpf_insn insn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nfp_prog*,int,int ,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct nfp_prog *VAR_2, struct nfp_insn_meta *VAR_3)
{
 const struct bpf_insn *VAR_4 = &VAR_3->insn;
 u64 VAR_5 = VAR_4->imm;

 FUNC_0(VAR_2, VAR_4->dst_reg * 2, VAR_0, VAR_5 & ~0U);
 FUNC_0(VAR_2, VAR_4->dst_reg * 2 + 1, VAR_1, VAR_5 >> 32);

 return 0;
}
