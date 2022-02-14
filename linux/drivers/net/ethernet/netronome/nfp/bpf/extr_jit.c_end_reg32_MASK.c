
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nfp_prog {int dummy; } ;
struct bpf_insn {int dst_reg; int imm; } ;
struct nfp_insn_meta {struct bpf_insn insn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nfp_prog*,int ,int,int ,int ,int) ;
 int FUNC_1 (struct nfp_prog*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct nfp_prog*,int ,int) ;
 int FUNC_6 (struct nfp_prog*,int ,int ) ;
 int FUNC_7 (struct nfp_prog*,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct nfp_prog *VAR_2, struct nfp_insn_meta *VAR_3)
{
 const struct bpf_insn *VAR_4 = &VAR_3->insn;
 u8 VAR_5 = VAR_4->dst_reg * 2;

 switch (VAR_4->imm) {
 case 16:
  FUNC_0(VAR_2, FUNC_4(VAR_5), 0x9, FUNC_3(VAR_5),
         VAR_0, 8);
  FUNC_0(VAR_2, FUNC_4(VAR_5), 0xe, FUNC_2(VAR_5),
         VAR_1, 16);

  FUNC_6(VAR_2, FUNC_4(VAR_5 + 1), 0);
  break;
 case 32:
  FUNC_5(VAR_2, FUNC_2(VAR_5), VAR_5);
  FUNC_6(VAR_2, FUNC_4(VAR_5 + 1), 0);
  break;
 case 64:
  FUNC_7(VAR_2, FUNC_1(VAR_2), FUNC_3(VAR_5 + 1));

  FUNC_5(VAR_2, FUNC_2(VAR_5), VAR_5 + 1);
  FUNC_5(VAR_2, FUNC_1(VAR_2), VAR_5);
  break;
 }

 return 0;
}
