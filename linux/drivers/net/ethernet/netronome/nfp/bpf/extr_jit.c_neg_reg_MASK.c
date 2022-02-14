
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nfp_prog {int dummy; } ;
struct TYPE_2__ {int dst_reg; } ;
struct nfp_insn_meta {TYPE_1__ insn; } ;


 int VAR_0 ;
 int FUNC_0 (struct nfp_prog*,int ,int ,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct nfp_prog*,struct nfp_insn_meta*,int) ;

__attribute__((used)) static int FUNC_5(struct nfp_prog *VAR_1, struct nfp_insn_meta *VAR_2)
{
 u8 VAR_3 = VAR_2->insn.dst_reg * 2;

 FUNC_0(VAR_1, FUNC_2(VAR_3), FUNC_3(0), VAR_0, FUNC_1(VAR_3));
 FUNC_4(VAR_1, VAR_2, VAR_3);

 return 0;
}
