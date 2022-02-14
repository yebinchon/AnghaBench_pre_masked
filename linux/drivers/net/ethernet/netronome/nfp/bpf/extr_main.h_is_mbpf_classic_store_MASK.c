
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int code; } ;
struct nfp_insn_meta {TYPE_1__ insn; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline bool FUNC_2(const struct nfp_insn_meta *VAR_2)
{
 u8 VAR_3 = VAR_2->insn.code;

 return FUNC_0(VAR_3) == VAR_1 && FUNC_1(VAR_3) == VAR_0;
}
