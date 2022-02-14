
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct nfp_insn_meta {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct nfp_insn_meta const*) ;
 int FUNC_1 (struct nfp_insn_meta const*) ;
 scalar_t__ FUNC_2 (struct nfp_insn_meta const*) ;

__attribute__((used)) static inline bool FUNC_3(const struct nfp_insn_meta *VAR_3)
{
 u8 VAR_4;

 if (FUNC_0(VAR_3))
  return 1;

 if (!FUNC_1(VAR_3))
  return 0;

 VAR_4 = FUNC_2(VAR_3);
 return VAR_4 != VAR_2 && VAR_4 != VAR_1 && VAR_4 != VAR_0;
}
