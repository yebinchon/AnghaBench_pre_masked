
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_prog {int dummy; } ;
struct bpf_insn {int dst_reg; int src_reg; int off; } ;
struct nfp_insn_meta {struct bpf_insn insn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nfp_prog*,int ,int ,int ,int ) ;
 int FUNC_1 (struct nfp_prog*,int ,int ,int ) ;
 int FUNC_2 (struct nfp_prog*) ;
 int FUNC_3 (struct nfp_prog*) ;
 scalar_t__ FUNC_4 (struct nfp_insn_meta*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(struct nfp_prog *VAR_3, struct nfp_insn_meta *VAR_4)
{
 const struct bpf_insn *VAR_5 = &VAR_4->insn;

 FUNC_0(VAR_3, FUNC_2(VAR_3), FUNC_5(VAR_5->dst_reg * 2),
   VAR_1, FUNC_6(VAR_5->src_reg * 2));
 if (FUNC_4(VAR_4)) {
  FUNC_0(VAR_3, FUNC_3(VAR_3),
    FUNC_5(VAR_5->dst_reg * 2 + 1), VAR_1,
    FUNC_6(VAR_5->src_reg * 2 + 1));
  FUNC_0(VAR_3, FUNC_7(), FUNC_2(VAR_3), VAR_0,
    FUNC_3(VAR_3));
 }
 FUNC_1(VAR_3, VAR_2, VAR_5->off, 0);

 return 0;
}
