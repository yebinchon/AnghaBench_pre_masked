
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nfp_prog {int * prog; } ;
struct nfp_insn_meta {int off; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(struct nfp_prog *VAR_1, struct nfp_insn_meta *VAR_2,
       struct nfp_insn_meta *VAR_3, u32 VAR_4)
{
 if (FUNC_0(VAR_1->prog[VAR_4 + 1])) {
  FUNC_2("BUG: failed to fix up callee register saving\n");
  return -VAR_0;
 }

 FUNC_1(&VAR_1->prog[VAR_4 + 1], VAR_3->off);

 return 0;
}
