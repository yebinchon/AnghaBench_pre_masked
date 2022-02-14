
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
struct nfp_prog {int dummy; } ;
struct bpf_insn {unsigned int imm; int dst_reg; } ;
struct nfp_insn_meta {int flags; struct bpf_insn insn; } ;
typedef enum alu_op { ____Placeholder_alu_op } alu_op ;


 int VAR_0 ;
 int FUNC_0 (struct nfp_prog*,int,int,unsigned int) ;

__attribute__((used)) static int
FUNC_1(struct nfp_prog *VAR_1, struct nfp_insn_meta *VAR_2,
       enum alu_op VAR_3, bool VAR_4)
{
 const struct bpf_insn *VAR_5 = &VAR_2->insn;
 u64 VAR_6 = VAR_5->imm;

 if (VAR_4) {
  VAR_2->flags |= VAR_0;
  return 0;
 }

 FUNC_0(VAR_1, VAR_5->dst_reg * 2, VAR_3, VAR_6 & ~0U);
 FUNC_0(VAR_1, VAR_5->dst_reg * 2 + 1, VAR_3, VAR_6 >> 32);

 return 0;
}
