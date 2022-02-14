
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_prog {int dummy; } ;
struct bpf_insn {int dst_reg; } ;
struct nfp_insn_meta {struct bpf_insn insn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nfp_prog*,int ,int ,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct nfp_prog *VAR_2, struct nfp_insn_meta *VAR_3)
{
 const struct bpf_insn *VAR_4 = &VAR_3->insn;

 FUNC_0(VAR_2, FUNC_2(VAR_4->dst_reg * 2), FUNC_3(0),
   VAR_0, FUNC_1(VAR_4->dst_reg * 2));
 FUNC_0(VAR_2, FUNC_2(VAR_4->dst_reg * 2 + 1), FUNC_3(0),
   VAR_1, FUNC_1(VAR_4->dst_reg * 2 + 1));

 return 0;
}
