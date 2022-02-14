
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int code; } ;
struct nfp_insn_meta {TYPE_1__ insn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline bool FUNC_0(const struct nfp_insn_meta *VAR_3)
{
 return (VAR_3->insn.code & ~VAR_0) == (VAR_1 | VAR_2);
}
