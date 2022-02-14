
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_prog {int insns; } ;
struct TYPE_2__ {int * prev; } ;
struct nfp_insn_meta {TYPE_1__ l; } ;



__attribute__((used)) static bool
FUNC_0(struct nfp_prog *VAR_0, struct nfp_insn_meta *VAR_1)
{
 return VAR_1->l.prev != &VAR_0->insns;
}
