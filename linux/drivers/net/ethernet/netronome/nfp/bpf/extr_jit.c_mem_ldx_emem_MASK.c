
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int swreg ;
struct nfp_prog {int dummy; } ;
struct TYPE_2__ {int src_reg; int dst_reg; int off; } ;
struct nfp_insn_meta {TYPE_1__ insn; } ;


 int FUNC_0 (struct nfp_prog*,struct nfp_insn_meta*,int,int ,int,unsigned int) ;
 int FUNC_1 (struct nfp_prog*) ;
 int FUNC_2 (struct nfp_prog*,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct nfp_prog *VAR_0, struct nfp_insn_meta *VAR_1,
      unsigned int VAR_2)
{
 swreg VAR_3;

 VAR_3 = FUNC_2(VAR_0, VAR_1->insn.off, FUNC_1(VAR_0));

 return FUNC_0(VAR_0, VAR_1, VAR_1->insn.src_reg * 2,
      VAR_3, VAR_1->insn.dst_reg * 2, VAR_2);
}
