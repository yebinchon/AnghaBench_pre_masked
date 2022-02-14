
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u64 ;
struct nfp_prog {int dummy; } ;
struct TYPE_2__ {unsigned int imm; int dst_reg; } ;
struct nfp_insn_meta {TYPE_1__ insn; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct nfp_prog*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct nfp_prog *VAR_0, struct nfp_insn_meta *VAR_1)
{
 u64 VAR_2 = VAR_1->insn.imm;

 FUNC_1(VAR_0, FUNC_0(VAR_1->insn.dst_reg * 2), VAR_2 & ~0U);
 FUNC_1(VAR_0, FUNC_0(VAR_1->insn.dst_reg * 2 + 1), VAR_2 >> 32);

 return 0;
}
