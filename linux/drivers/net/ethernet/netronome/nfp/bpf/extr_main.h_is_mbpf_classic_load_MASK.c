
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int code; } ;
struct nfp_insn_meta {TYPE_1__ insn; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline bool FUNC_2(const struct nfp_insn_meta *VAR_3)
{
 u8 VAR_4 = VAR_3->insn.code;

 return FUNC_0(VAR_4) == VAR_2 &&
        (FUNC_1(VAR_4) == VAR_0 || FUNC_1(VAR_4) == VAR_1);
}
