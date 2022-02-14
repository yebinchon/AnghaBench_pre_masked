
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
typedef int swreg ;
struct nfp_prog {int dummy; } ;
struct bpf_insn {unsigned int imm; int dst_reg; int off; } ;
struct nfp_insn_meta {struct bpf_insn insn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nfp_prog*,int ,int ,int ,int ) ;
 int FUNC_1 (struct nfp_prog*,int ,int ,int ) ;
 int FUNC_2 (struct nfp_prog*) ;
 int FUNC_3 (struct nfp_prog*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 (struct nfp_prog*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_8(struct nfp_prog *VAR_3, struct nfp_insn_meta *VAR_4)
{
 const struct bpf_insn *VAR_5 = &VAR_4->insn;
 u64 VAR_6 = VAR_5->imm;
 swreg VAR_7, VAR_8, VAR_9;

 VAR_7 = FUNC_4(VAR_5->dst_reg * 2);
 VAR_8 = FUNC_5(VAR_5->dst_reg * 2 + 1);

 if (VAR_6 & ~0U) {
  VAR_9 = FUNC_7(VAR_3, VAR_6 & ~0U, FUNC_3(VAR_3));
  FUNC_0(VAR_3, FUNC_2(VAR_3),
    FUNC_4(VAR_5->dst_reg * 2), VAR_1, VAR_9);
  VAR_7 = FUNC_2(VAR_3);
 }

 if (VAR_6 >> 32) {
  VAR_9 = FUNC_7(VAR_3, VAR_6 >> 32, FUNC_3(VAR_3));
  FUNC_0(VAR_3, FUNC_3(VAR_3),
    FUNC_4(VAR_5->dst_reg * 2 + 1), VAR_1, VAR_9);
  VAR_8 = FUNC_3(VAR_3);
 }

 FUNC_0(VAR_3, FUNC_6(), VAR_7, VAR_0, VAR_8);
 FUNC_1(VAR_3, VAR_2, VAR_5->off, 0);

 return 0;
}
