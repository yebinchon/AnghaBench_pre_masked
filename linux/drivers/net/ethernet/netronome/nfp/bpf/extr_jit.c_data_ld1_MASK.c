
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_prog {int dummy; } ;
struct TYPE_2__ {int imm; } ;
struct nfp_insn_meta {TYPE_1__ insn; } ;


 int FUNC_0 (struct nfp_prog*,struct nfp_insn_meta*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct nfp_prog *VAR_0, struct nfp_insn_meta *VAR_1)
{
 return FUNC_0(VAR_0, VAR_1, VAR_1->insn.imm, 1);
}
