
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_prog {int dummy; } ;
struct bpf_insn {int dst_reg; int src_reg; int off; } ;
struct nfp_insn_meta {struct bpf_insn insn; } ;
typedef enum br_mask { ____Placeholder_br_mask } br_mask ;
typedef enum alu_op { ____Placeholder_alu_op } alu_op ;


 scalar_t__ FUNC_0 (struct nfp_insn_meta*) ;
 int FUNC_1 (struct nfp_prog*,int,int,int,int,int ) ;

__attribute__((used)) static int
FUNC_2(struct nfp_prog *VAR_0, struct nfp_insn_meta *VAR_1,
      enum alu_op VAR_2, enum br_mask VAR_3)
{
 const struct bpf_insn *VAR_4 = &VAR_1->insn;

 FUNC_1(VAR_0, VAR_4->dst_reg * 2, VAR_2,
    VAR_4->src_reg * 2, VAR_3, VAR_4->off);
 if (FUNC_0(VAR_1))
  FUNC_1(VAR_0, VAR_4->dst_reg * 2 + 1, VAR_2,
     VAR_4->src_reg * 2 + 1, VAR_3, VAR_4->off);

 return 0;
}
