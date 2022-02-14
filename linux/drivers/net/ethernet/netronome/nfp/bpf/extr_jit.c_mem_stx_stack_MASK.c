
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_prog {int dummy; } ;
struct TYPE_2__ {int src_reg; int dst_reg; } ;
struct nfp_insn_meta {TYPE_1__ insn; } ;


 int FUNC_0 (struct nfp_prog*,struct nfp_insn_meta*,unsigned int,unsigned int,int,int,int,int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_1(struct nfp_prog *VAR_1, struct nfp_insn_meta *VAR_2,
       unsigned int VAR_3, unsigned int VAR_4)
{
 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4,
       VAR_2->insn.src_reg * 2, VAR_2->insn.dst_reg * 2,
       0, VAR_0);
}
