
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_prog {int dummy; } ;
struct TYPE_2__ {int imm; } ;
struct nfp_insn_meta {TYPE_1__ insn; } ;
 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct nfp_prog*,struct nfp_insn_meta*) ;
 int FUNC_2 (struct nfp_prog*,struct nfp_insn_meta*) ;
 int FUNC_3 (struct nfp_prog*,struct nfp_insn_meta*) ;
 int FUNC_4 (struct nfp_prog*,struct nfp_insn_meta*) ;
 int FUNC_5 (struct nfp_prog*,struct nfp_insn_meta*) ;

__attribute__((used)) static int FUNC_6(struct nfp_prog *VAR_1, struct nfp_insn_meta *VAR_2)
{
 switch (VAR_2->insn.imm) {
 case 129:
  return FUNC_1(VAR_1, VAR_2);
 case 128:
  return FUNC_2(VAR_1, VAR_2);
 case 132:
 case 131:
 case 133:
  return FUNC_3(VAR_1, VAR_2);
 case 134:
  return FUNC_4(VAR_1, VAR_2);
 case 130:
  return FUNC_5(VAR_1, VAR_2);
 default:
  FUNC_0(1, "verifier allowed unsupported function\n");
  return -VAR_0;
 }
}
