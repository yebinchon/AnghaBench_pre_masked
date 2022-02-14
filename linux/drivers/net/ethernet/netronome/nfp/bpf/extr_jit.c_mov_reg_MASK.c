
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_prog {int dummy; } ;
struct bpf_insn {int dst_reg; int src_reg; } ;
struct nfp_insn_meta {struct bpf_insn insn; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct nfp_prog*,int ,int ) ;
 int FUNC_2 (struct nfp_prog*,int,int) ;

__attribute__((used)) static int FUNC_3(struct nfp_prog *VAR_0, struct nfp_insn_meta *VAR_1)
{
 const struct bpf_insn *VAR_2 = &VAR_1->insn;

 FUNC_2(VAR_0, VAR_2->dst_reg * 2, VAR_2->src_reg * 2);
 FUNC_1(VAR_0, FUNC_0(VAR_2->dst_reg * 2 + 1), 0);

 return 0;
}
