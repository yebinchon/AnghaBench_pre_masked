
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int swreg ;
struct nfp_prog {int dummy; } ;
struct bpf_insn {int dst_reg; int off; int imm; } ;
struct nfp_insn_meta {struct bpf_insn insn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nfp_prog*,int ,int ,int ,int ) ;
 int FUNC_1 (struct nfp_prog*,int ,int ,int ) ;
 int FUNC_2 (struct nfp_prog*) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (struct nfp_prog*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct nfp_prog *VAR_2, struct nfp_insn_meta *VAR_3)
{
 const struct bpf_insn *VAR_4 = &VAR_3->insn;
 swreg VAR_5;

 VAR_5 = FUNC_5(VAR_2, VAR_4->imm, FUNC_2(VAR_2));
 FUNC_0(VAR_2, FUNC_4(),
   FUNC_3(VAR_4->dst_reg * 2), VAR_0, VAR_5);
 FUNC_1(VAR_2, VAR_1, VAR_4->off, 0);

 return 0;
}
