
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct nfp_prog {int dummy; } ;
struct TYPE_2__ {int dst_reg; scalar_t__ imm; } ;
struct nfp_insn_meta {TYPE_1__ insn; } ;


 struct nfp_insn_meta* FUNC_0 (struct nfp_insn_meta*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct nfp_prog*,int ,scalar_t__) ;
 int FUNC_4 (struct nfp_prog*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct nfp_prog *VAR_0, struct nfp_insn_meta *VAR_1)
{
 struct nfp_insn_meta *VAR_2 = FUNC_0(VAR_1);
 u32 VAR_3, VAR_4;
 u8 VAR_5;

 VAR_5 = VAR_2->insn.dst_reg * 2;
 VAR_3 = VAR_2->insn.imm;
 VAR_4 = VAR_1->insn.imm;

 FUNC_3(VAR_0, FUNC_2(VAR_5), VAR_3);


 if (VAR_4 == VAR_3)
  FUNC_4(VAR_0, FUNC_2(VAR_5 + 1), FUNC_1(VAR_5));
 else
  FUNC_3(VAR_0, FUNC_2(VAR_5 + 1), VAR_4);

 return 0;
}
