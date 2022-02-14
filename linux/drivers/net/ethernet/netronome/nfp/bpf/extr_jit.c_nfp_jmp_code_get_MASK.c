
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int code; } ;
struct nfp_insn_meta {TYPE_1__ insn; } ;
struct jmp_code_map {int br_mask; } ;


 unsigned int FUNC_0 (struct jmp_code_map const*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int,char*) ;
 struct jmp_code_map const* VAR_0 ;

__attribute__((used)) static const struct jmp_code_map *FUNC_3(struct nfp_insn_meta *VAR_1)
{
 unsigned int VAR_2;

 VAR_2 = FUNC_1(VAR_1->insn.code) >> 4;

 if (FUNC_2(VAR_2 >= FUNC_0(VAR_0) ||
        !VAR_0[VAR_2].br_mask,
        "no code found for jump instruction"))
  return ((void*)0);

 return &VAR_0[VAR_2];
}
