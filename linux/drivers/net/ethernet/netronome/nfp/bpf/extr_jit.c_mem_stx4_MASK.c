
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_prog {scalar_t__ type; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct nfp_insn_meta {TYPE_1__ ptr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct nfp_prog*,struct nfp_insn_meta*,int) ;
 int FUNC_1 (struct nfp_prog*,struct nfp_insn_meta*) ;

__attribute__((used)) static int FUNC_2(struct nfp_prog *VAR_2, struct nfp_insn_meta *VAR_3)
{
 if (VAR_3->ptr.type == VAR_1)
  if (VAR_2->type == VAR_0)
   return FUNC_1(VAR_2, VAR_3);
 return FUNC_0(VAR_2, VAR_3, 4);
}
