
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; } ;
struct nfp_insn_meta {TYPE_1__ ptr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct nfp_insn_meta const*) ;

__attribute__((used)) static inline bool FUNC_1(const struct nfp_insn_meta *VAR_1)
{
 return FUNC_0(VAR_1) && VAR_1->ptr.type == VAR_0;
}
